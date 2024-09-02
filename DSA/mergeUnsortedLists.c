#include <stdio.h>
#include <stdlib.h>

void mergeLists(int list1[], int n1, int list2[], int n2, int mergedList[]) {
    for (int i = 0; i < n1; i++) {
        mergedList[i] = list1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedList[n1 + i] = list2[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;
    
    printf("Enter the number of elements in the first list: ");
    scanf("%d", &n1);
    int *list1 = malloc(n1 * sizeof(int));
    printf("Enter elements of the first list: \n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &list1[i]);
    }

    printf("Enter the number of elements in the second list: ");
    scanf("%d", &n2);
    int *list2 = malloc(n2 * sizeof(int));
    printf("Enter elements of the second list: \n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &list2[i]);
    }

    int *mergedList = malloc((n1 + n2) * sizeof(int));
    mergeLists(list1, n1, list2, n2, mergedList);
    
    printf("Merged list: \n");
    printArray(mergedList, n1 + n2);

    free(list1);
    free(list2);
    free(mergedList);

    return 0;
}

/*  
    Output:
    Enter the number of elements in the first list: 3
    Enter elements of the first list: 
    3 1 5
    Enter the number of elements in the second list: 4
    Enter elements of the second list: 
    8 2 6 4
    Merged list: 
    3 1 5 8 2 6 4 
*/
