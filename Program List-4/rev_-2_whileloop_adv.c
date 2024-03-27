#include <stdio.h>
int main()
{
  int numStart, numEnd, i;
  printf("Enter the upper value: ");
  scanf("%d", &numStart);
  printf("Enter the lower value: ");
  scanf("%d", &numEnd);
  i = numStart;
  printf("Natural Numbers with difference 2 ranging between %d to %d are: \n", numStart, numEnd);
  while (i >= numEnd)
  {
    printf("%d ", i);;
    i -= 2;
  }
  return 0;
} 