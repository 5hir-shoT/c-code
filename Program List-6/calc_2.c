#include<stdio.h>

// function for taking input from user
float input()
{
  float n;
  scanf("%f",&n);
  return n;
}

// function for displaying the result
void display(float n1, float n2, char ch, float result)
{
  printf("%.2f %c %.2f = %.2f\n", n1, ch, n2, result);
}

// function for addition of two numbers
void add(float n1, float n2)
{
  float result;
  result = n1 + n2;
  display(n1, n2, '+', result);
}

// function for subtraction of two numbers
void subtract(float n1, float n2)
{
  float result;
  result = n1 - n2;
  display(n1, n2, '-', result);
}

// function for multiplication of two numbers
void multiply(float n1, float n2)
{
  float result;
  result = n1 * n2;
  display(n1, n2, '*', result);
}

// function for division of two numbers
void divide(float n1, float n2)
{
  float result;
  result = n1 / n2;
  display(n1, n2, '/', result);
}

// main function
int main()
{
  char ch;
  int choice;
  float n1, n2;

  // do-while loop
  do
  {
    printf("Enter first number: ");
    n1 = input();
    printf("Enter second number: ");
    n2 = input();
     
    printf("\nWhich operation you want to perform,\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
     
    switch (choice) 
    {
      case 1:add(n1, n2);
             break;
      case 2:subtract(n1, n2);
             break;
      case 3:multiply(n1, n2);
             break;
      case 4:divide(n1, n2);
             break;
      default:printf("Invalid choice");
    }

    printf("\nDo you want to continue (y/n): ");
    scanf("%c",&ch);
    scanf("%c",&ch);
    printf("***************************************\n");

  } while(ch=='y' || ch=='Y');

  printf("\nThank You.");
  return 0;
}

/*

output:

Enter first number: 3
Enter second number: 2

Which operation you want to perform,
1.Addition
2.Subtraction
3.Multiplication
4.Division
Enter your choice: 1
3.00 + 2.00 = 5.00

Do you want to continue (y/n): y
***************************************
Enter first number: 3
Enter second number: 2

Which operation you want to perform,
1.Addition
2.Subtraction
3.Multiplication
4.Division
Enter your choice: 4
3.00 / 2.00 = 1.50

Do you want to continue (y/n): Y
***************************************
Enter first number: 3
Enter second number: 2

Which operation you want to perform,
1.Addition
2.Subtraction
3.Multiplication
4.Division
Enter your choice: 5
Invalid choice
Do you want to continue (y/n): n
***************************************   

Thank You.

*/