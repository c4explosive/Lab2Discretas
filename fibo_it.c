#include <stdio.h>
//#include <conio.h> //Descomentar esta linea
#include <stdlib.h>
#define clrscr() system("clear") //Comentar estas dos lineas
#define getch() system("read")
void fibo();
void main()
{
    fibo();
}
void fibo()
{
    int i,num1=0,num2=1,res;
    printf("%d ",num1);
    printf("%d ",num2);
    for(i=0;i<=10;i++)
    {
	res=num1+num2;
	printf("%d ",res);
	num1=num2;
	num2=res;
    }
}
