#include <stdio.h>
int main()
{
    int a = 12;
    int *ptr;
    ptr = &a;        
    printf("value of a = %d\n", a);           
    printf("address of a = %p\n", &a);        
    printf("address of a by ptr= %p\n", ptr); 
    ptr++;
    printf("address of a = %p\n", &a);        
    printf("address of a by ptr= %p\n", ptr); 
}