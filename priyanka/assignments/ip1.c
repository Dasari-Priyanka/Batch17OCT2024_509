#include <stdio.h>
#include <stdlib.h>

#define MAX 80

//swap integers by pointer
void swap_nums(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

//swap pointers to string 
void swap_pointers(char **x, char **y)
{
    char *tmp;
    tmp = *x;
    printf("\n swap_pointers: x, y is %p %p, tmp=x:%p \n", (void *)*x,(void *)*y, tmp);
    printf("\n swap_pointers: x, y is %s %s, tmp=x:%d \n", *x, *y, *tmp);
    *x = *y;
    *y = tmp;
    printf("\nswap_pointers :  x, y is %s %s \n", *x, *y);
}

int test_swap_char()
{
    char arr1[MAX]="ABC";
    char arr2[MAX] = "DEFGH";

    char *s1 = arr1;
    char *s2 = arr2;
    printf("\n s1, s2 address bef  is %p %p", s1, s2);

    //swap the pointers
    swap_pointers(&s1,&s2);
    printf("\n s1, s2 address aft is %p %p", s1, s2);

    return 0;
}

int test_swap_num()
{

    int a = 3;
    int b = 4;

    //swap the numbers using pass by pointer
    swap_nums(&a,&b);
    printf("a is %d\n", a);
    printf("b is %d\n", b);
}

int main()
{
    //swap 2 numbers
    test_swap_num();
    //swap two string pointers
    test_swap_char();

    return 0;
}
