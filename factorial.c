#include <stdio.h>
int main (){
int numeros;
int factorial=1;
printf("Escribe su factorial:");
scanf("%d",&numeros);
printf("%d!=",numeros);
for(int i = numeros; i >1; i--)
{
printf("%dx",i);
factorial*=i;
}
printf("1=%d",factorial);
return 0;
}
