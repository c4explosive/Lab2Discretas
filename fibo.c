#include <stdio.h>
//#include <conio.h> //Descomentar esta linea
#include <stdlib.h>
#define clrscr() system("clear") //Comentar estas dos lineas
#define getch() system("read")
int cont=2; //Contador de fibo
void fibo(int n1, int n2, int n);
void trian(int n);
void main()
{
    clrscr();
    /*fibo(0,1,13);
    printf("\b \n");
    cont=2; //Para la proxima vez que se ejecute*/
    trian(5);
    //getch();
   
}

void trian(int n)
{
    int acum=0,i;
    if (n != 0)
    {
	for(i=1;i<=n;i++)
	{
	    acum+=i;
	}
	printf("%d ",acum);
	n--;
	trian(n);
    }
}

//Fibonacci 
void fibo(int n1, int n2, int n)
{
    int res;
    if (n != 0)
    {
    	if (cont==2)
	{
	    printf("0,");
	    cont--;
	    n--;
	    fibo(n1,n2,n);
	}
	else if (cont == 1 )
	{
	    printf("1,");
	    cont--;
	    n--;
	    fibo(n1,n2,n);
	}
    	else
    	{
	    res=n1+n2;
	    printf("%d,",res);
	    n--;
	    fibo(n2,res,n);
        }
     }
}
