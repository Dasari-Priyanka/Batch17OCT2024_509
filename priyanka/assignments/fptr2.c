#include <stdio.h>
void *getaddr(char mychar);
int add(int,int);
int sub(int,int);
int multiply(int,int);
int divide(int,int);
int main()
{
    int (*f)(int,int)=NULL;
    int num1,num2;
    char input;
    while(1)
    {
        int flag=0;
        printf("\nCalculation options");
        printf("\n+ - addition");
        printf("\n- - substraction");
        printf("\n* - multiplication");
        printf("\n/ - division");
        printf("\n& - exit");
        printf("\nEnter the input: ");
        scanf(" ");
        scanf("%c",&input);
        if(input!='&')
        {
            printf("\nEnter num1: ");
            scanf("%d",&num1);
            printf("\nEnter num2: ");
            scanf("%d",&num2);
        }
        switch(input)
        {
            case '+':
                f=getaddr(input);
                printf("Address of add function is %p",getaddr(input));
                printf("\nAddition of two numbers: %d",f(num1,num2));
                break;
            case '-':
                f=getaddr(input);
                printf("Address of sub function is %p",getaddr(input));
                printf("\nSubstraction of two numbers: %d",f( num1,num2));
                break;
            case '*':
				f=getaddr(input);
                printf("Address of multiply function is %p",getaddr(input));
                printf("\nMultiplication of two numbers: %d",f(num1,num2));
                break;
            case '/':
                f=getaddr(input);
                printf("Address of divide function is %p",getaddr(input));
                printf("\nDivision of two numbers: %d",f(num1,num2));
                break;
            case '&':
                flag=1;
                break;
            default:
                printf("\nEnter the valid input");
                break;
            }
            if(flag==1)
                break;
    }

}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
void *getaddr(char mychar)
{
    switch(mychar)
    {
        case '+':
            return add;
            break;
        case '-':
            return sub;
            break;
        case '*':
            return multiply;
            break;
        case '/':
            return divide;
            break;
        default:
            printf("Enter valid");
            break;
    }
}

