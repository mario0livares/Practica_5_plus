#include <stdio.h>
//function to check leap year
int checkLeapYear(int year)
{
if( (year % 400==0)||(year%4==0 && year%100!=0) )
return 1;
else
return 0;
}
int main()
{
int i,n1,n2;
printf("Enter the value of N: ");
scanf("%d",&n1);
printf("ingresa el limite que deseas:");
scanf("%d",&n2);
printf("Leap years from %d to %d:\n",n1,n2);
for(i=n1;i<=n2;i++)
{
if(checkLeapYear(i))
printf("%d\t",i);
}
return 0;
}
