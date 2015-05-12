#include <stdio.h>
//#include <conio.h> //Descomentar esta linea
#include <stdlib.h>
#define clrscr() system("clear") //Comentar estas dos lineas
#define getch() system("read")
int cont=2, contr=1, tac,  fac; //Contador de fibo, contador de tetra, ultimo triangular y ultimo fibo.
void fibo(int n1, int n2, int n,int imp);
void trian(int n,int t, int imp);
void tetra(int tr, int n, int in);
void menu();
int elem();
void pres();
//En el main solo se llama el menu.
void main()
{
    menu();
}

void menu()
{
    char cnt='s';
    char* opp=malloc(sizeof(char));
    int op;
    do
    {
	clrscr();
	printf("\t\t\tSUCESIONES\n");
	printf("1. Presentación\n");
	printf("2. Fibonacci\n");
	printf("3. Números Triangulares\n");
	printf("4. Números Tetraédricos\n");
	printf("5. Salir\n");
	printf("Escriba una opción: ");
	scanf("%s",opp);
	op=atoi(opp);
	switch (op)
	{
	    case 1: clrscr(); pres(); getch(); break;
	    case 2:
		    clrscr();
		    fibo(0,1,elem(),1);
    		    printf("\b \n");
		    cont=2;
		    getch();
		    break;
	    case 3:
		    clrscr();
		    trian(elem(),1,1);
    		    printf("\b \n");
		    getch();
		    break;
	    case 4:
		    clrscr();
		    tetra(1,elem(),1);
		    printf("\b \n");
		    fac=0;
		    tac=0;
		    cont=2;
		    contr=1;
		    getch();
		    break;
	    case 5: cnt='n'; break;
	    default: clrscr();printf("Ópción no válida");
	}
	
    }while (cnt == 's'|| cnt == 'S');
}
void pres()
{
        clrscr();
	printf("\n                      Universidad Tecnol¢gica de Panama \n");
	printf("            Facultad de Ingenier¡a en Sistemas Computacionales\n");
	printf("           Departamento de Computaci¢n y Simulaci¢n de Sistemas\n\n");
	printf("                            Estructuras Discretas\n\n");
	printf("                               Laboratorio nø2\n");
	printf("                        Ingeniera Jacqueline De Ching\n\n");
	printf("                                   Grupo: \n");
	printf("                          Espinosa, Angel  8-905-1352    \n"); 
    printf("                              Rodriguez, Maria 8-900-1207\n\n");
	printf("                                   1IL-121\n");
}
int elem()
{
    int dig;
    char * digg=malloc(sizeof(char));
    printf("Ingrese la cantidad de elementos de la sucesión: ");
    scanf("%s",digg);
    dig=atoi(digg);
    return dig;
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
	    printf("%d,",acum);
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

//Tetraédrico
void tetra(int tr, int n,int in)
{
    cont=0;
    if (in != n+1)
    {
        if (contr)
        {
    	    printf("%d,",1);
	    contr--;
	    in++;
	    tetra(tr,n,in);
        }
	else
	{
	    trian(in,1,0);
	    //printf("%d+%d\n",tr,tac);
	    fibo(tr,tac,1,1);
	    tr=fac;
	    in++;
	    tetra(tr,n,in);
	}
    }
}
