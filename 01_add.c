#include<stdio.h>
int main()
{
   int  num,a,b,c;
printf("welcome to my calculator \n");
printf("type 1 for additon \n 2 for subtraction \n 3 for multiplication \n 4 for divison \n as per your choise\n ");
printf("enter here for calculation:  ");
scanf("%d",&num);
switch(num)
{
    case 1:
    printf("you entered 1 for addition\n");
    printf("enter yor first number ");
    scanf("%d",&a);
    printf("enter your second number ");
    scanf("%d",&b);
    c=a+b;
    printf("addition=%d\n",c);
    break;
    case 2:
    printf("you entered 2 for substraction\n" );
    printf("enter your first number");
    scanf("%d",&a);
    printf("enter your second number ");
    scanf("%d",&b);
    c=a-b;
    printf("substraction=%d\n",c);
    break;
    case 3:
    printf("you enter 3 for multiplication\n");
    printf("enter your first number ");
    scanf("%d",&a);
    printf("enter your second number ");
    scanf("%d",&b);
    c=a*b;
    printf("multiplication=%d\n",c);
    break;
    case 4:
     printf("you enter 4 for divison\n ");
    printf("enter your first number ");
    scanf("%d",&a);
    printf("enter your second number ");
    scanf("%d",&b);
    c=a/b;
    printf("divison=%d\n",c);
    break;
    default:
    printf("please enter number 1 to 4\n");
}
}