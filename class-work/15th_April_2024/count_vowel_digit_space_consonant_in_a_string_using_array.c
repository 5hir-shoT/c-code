#include<stdio.h>
#include<string.h>
int main()
{
    char arr[15];
    int sp=0,vow=0,con=0,dig=0,i;
    printf("enter any string:\n");
    gets(arr);
    puts(arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='A'|| arr[i]=='a'||arr[i]=='E'||arr[i]=='e'||arr[i]=='I'||arr[i]=='i'||arr[i]=='O'||arr[i]=='o'||arr[i]=='U'||arr[i]=='u')
        {
            vow++;
        }
        else if(arr[i]==' ')
        {
            sp++;
        }
        else if(arr[i]>='0' && arr[i]<='9')
        {
            dig++;
        }
        else if(arr[i]>='a' && arr[i]<='z'||arr[i]>='A' && arr[i]<='Z')
        {
            con++;
        }
    }
    printf("No. of vowels=%d\n",vow);
    printf("No. of consonants=%d\n",con);
    printf("No. of spaces=%d\n",sp);
    printf("No. of digits=%d\n",dig);
    return 0;   
}

/*

output:

enter any string:
my name is 123
my name is 123
No. of vowels=3
No. of consonants=5
No. of spaces=3
No. of digits=3

instead of writing gets(arr); you can also write fgets(arr,sizeof(arr),stdin);

*/