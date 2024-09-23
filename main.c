#include<stdio.h>

int main()
{
    printf("enter 1 for addition ");
    printf("enter 2 for subtraction ");
    printf("enter 3 for multiplication");
    printf("enter 4 for division");
    int choice;
    scanf("%d",&choice);

    if(n==1)
    {
        add();
    }
    else if(n==2)
    {
        sub();
    }
    else if (n==3)
    {
        /* code */
        mult();
    }
    else if(n==4)
    {
        div();
    }
    
}

void add()
{
    int num1,num2;
    printf("enter number 1 and number 2");
    scanf("%d %d",&num1 , &num2);
    int sum=num1+num2;

    printf("num1+num2 is equal to %d",sum);
}

void sub()
{
    int num1,num2;
    printf("enter number 1 and number 2");
    scanf("%d %d",&num1 , &num2);

    if(num1>num2)
    {
        printf("the substraction is %d ",num1-num2);

    }
    else 
    printf("the substraction is %d " , num2-num1);
}

void mult()

{
    int num1,num2;
    printf("enter number 1 and number 2");
    scanf("%d %d",&num1 , &num2);
    printf("the multiplication of number 1 and number 2 is ",num1*num2);
}

void div()
{
   int num1,num2;
    printf("enter number 1 and number 2");
    scanf("%d %d",&num1 , &num2);

    if(num1>num2)
    {
        printf("the division is %d ",num1/num2);

    }
    else 
    printf("the division is %d " , num2/num1);

}
