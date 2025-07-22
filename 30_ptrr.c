#include<stdio.h>
int main()
{
    int a =12;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n,a");
    printf("address of a = %d\n",&a);
    printf("address of a by ptr = %d\n",ptr);
    ptr++;
    printf("adress of a  = %d\n ",&a);
     printf("adress of a by ptr = %d\n ",ptr );
}