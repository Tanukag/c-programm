#include<stdio.h>
int main()
{
   int rem , num ,s,digit_count=0;
   printf("enter a num:");
   scanf("%d",&num);
   printf("enter a num for search :");
   scanf("%d",&s);
   while(num>0)
  { rem=num%10;
   if(rem==s) 
{
    digit_count++;
}
num=num/10;
}
if (digit_count>0)
{
    printf("digitfound %d time in num\n",digit_count);
}
else {
    printf("digit not found\n");
}
}