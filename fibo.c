#include <stdio.h>
//#include <conio.h> //Descomentar esta linea
#include <stdlib.h>
#define clrscr() system("clear") //Comentar estas dos lineas
#define getch() system("read")
int cont=2,  tac,  fac; //Contador de fibo
void fibo(int n1, int n2, int n,int imp);
void trian(int n,int t, int imp);
void tetra(int n);
void main()
{
    clrscr();
    /*fibo(0,1,13,0);
    printf("\b \n");
    printf("%d\n",fac);
    cont=2; //Para la proxima vez que se ejecute
    trian(9,1,0);
    printf("%d",tac);*/
    tetra(9);
    //getch();  
}

//Triangular
void trian(int n,int t, int imp)
{
    int acum=0,i;
    if (t != n+1)
    {
	for(i=1;i<=t;i++)
	{
	    acum+=i;
	}
	if ( imp == 1)
	    printf("%d ",acum);
	t++;
	tac=acum;
	trian(n,t,imp);
    }
}

//Fibonacci 
void fibo(int n1, int n2, int n,int imp)
{
    int res;
    if (n != 0)
    {
    	if (cont==2)
	{
	    if (imp)
	    	printf("0,");
	    fac=0;
	    cont--;
	    n--;
	    fibo(n1,n2,n,imp);
	}
	else if (cont == 1 )
	{
	    if (imp)
	    	printf("1,");
	    fac=1;
	    cont--;
	    n--;
	    fibo(n1,n2,n,imp);
	}
    	else
    	{
	    res=n1+n2;
	    if (imp)
	    	printf("%d,",res);
	    fac=res;
	    n--;
	    fibo(n2,res,n,imp);
        }
     }
}
void tetra(int n)
{
    int i,tr=1;
    cont=0;
    printf("%d,",1);
    for(i=2;i<=n;i++)
    {
	trian(i,2,0);
	//printf("%d \n",tac);
	fibo(tr,tac,1,1);
	tr=fac;
    }
}
