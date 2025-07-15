//enter letter for _______times 
#include<stdio.h>
int main()
{
    int i=1,num;
    char letter;
    printf("enter a letter:");
    scanf("%c",&letter);
    printf("enter a num:");
    scanf("%d",&num);
    while(i<=num)
    {
        printf("%c\n",letter);
        i++;
    }
}