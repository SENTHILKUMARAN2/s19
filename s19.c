#include<stdio.h>
int main()
{
int num,i,f;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
f=f*i;
printf("factorial of %d is %d",num,f);
return 0;
}
