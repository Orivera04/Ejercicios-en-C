//DECLARACION DE LIBRERIAS A UTILIZAR //
#include<string.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<mouse.h>

// DECLARACION DE VARIABLES CON VALORES DETERMINADOS //
#define tambuf 513
#define Esc 27
#define Cfondo 0
#define Enter 1
#define Tab 9
#define clinea 14
#define ponercursor(x,y) dibcursor(x,y);
#define borrarcursor(x,y) dibcursor(x,y);
#define tamcruz 5
#define DIM     2
#define PMAX    100
#define X       0
#define Y       1

// DECLARALCION DE ESTRUCTURAS
typedef enum{FALSE,TRUE} bool;
typedef int tPointi[DIM];
typedef tPointi tPolygoni[PMAX];

// METODOS BOOLEANOS //
bool LeftOn(tPointi,tPointi,tPointi);
bool Between(tPointi,tPointi,tPointi);
bool Collinear(tPointi,tPointi,tPointi);
bool InCone(int,int,int,tPolygoni);
bool Diagonal(int,int,int,tPolygoni);
bool Diagonalie(int,int,int,tPolygoni);
bool Intersect(tPointi,tPointi,tPointi,tPointi);
bool Left(tPointi,tPointi,tPointi);
bool IntersectProp(tPointi,tPointi,tPointi,tPointi);
bool Xor(bool,bool);

// DECLARACION DE METODOS Y FUNCIONES //
long Area2(tPointi,tPointi,tPointi);
int seleccionar(tPolygoni,int,int);
int Pantihorario(tPolygoni,int);
void printcoord(int,int,int,int,int);
void erasecoord(int,int);
void borrarlinea(int,int,int,int); 
void refrescar(tPolygoni p,int cont,float escala,int left,int top);
void  ponerlinea(int,int,int,int);
void usarraton(void);
void  PointAssign(tPointi,tPointi);
void Triangulate1(int,tPolygoni,float,int,int); 
void TriRecurse(int,tPolygoni,int[],float,int,int);
void  ClipEar1(int,int,tPolygoni,int[]);
void Dibujar_Componentes();
void Operaciones();
void Restart();

// DECLARACION DE VARIABLES GLOBALES //
int Boton1 = 0, Boton2 = 0, Boton3 = 0, Boton4 = 0,Boton5 = 0,Boton6 = 0,I = 0, Contador =0, T=1,Tcl = 0,c=0,c1=0,Contador_Vertices=0,n;
int salir=0, raton=1, cont=0;
tPolygoni p1,Guardas;
int Vertices[100][6],Auxiliar[100][6];
int cont1=0,habilitar=0;
static Color,Colores;

// *********************************** VOID MAIN **************************** // 
void main()
{

int Driver = DETECT,Mode;
initgraph(&Driver,&Mode,"c:\\tc\\bgi");

Dibujar_Componentes();

	while(I == 0 )
	{
		Operaciones();
	}

closegraph();
}

// **************** DIBUJAMOS LOS COMPONENTES GRAFICOS ******************* //
void Dibujar_Componentes()
{
msituar(1,1,1) ;
setcolor(LIGHTCYAN);
setfillstyle(SOLID_FILL,LIGHTBLUE) ;
setlinestyle(45,5,3);
rectangle(0,0,178,479);
floodfill(1,1,LIGHTCYAN);
setcolor(YELLOW);
rectangle(21,436,158,468);
rectangle(17,19,159,49);
rectangle(17,79,159,109);
rectangle(17,129,159,158);
rectangle(17,179,159,219);
rectangle(17,249,159,289);
rectangle(17,319,159,364);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(42,26,"Ubicar Puntos");
outtextxy(42,87,"Triangulacion");
outtextxy(42,137,"Tricoloreado");
outtextxy(58,194,"Guardas");
outtextxy(55,447,"Salir");
outtextxy(42,270,"Ver  Arreglo");
outtextxy(45,340,"Restart");
mlimit(1,0,0,179,479);
}

// ******************** RESTART ****************************//
void Restart()
{

int i;
Boton1 = 0;
Boton2 = 0;
Boton3 = 0;
Boton4 = 0;
Boton5 = 0;
Boton6 = 0;
I = 0;
Contador =0;
habilitar = 0;
cont1 = 0;
cont = 0;
T = 1;
c=0;
Tcl = 0;
c1 = 0;
Contador_Vertices=0;
n = 0;
	for(i=0;i<cont1;i++)
	{
		p1[i][i] = 0;
		Guardas[i][i] = 0;
		Auxiliar[i][i] = 0;
	}
main();
msituar(1,1,1) ;

}

//*******************************USAR RATON ************************* //
void usarraton(void)
{
	mver();
		/*PARA DIBUJAR*/
		if(mclick()==1 && habilitar==0)
		{
			setcolor(2);
			setfillstyle(8,0);
			bar(180,0,639,30);		
			outtextxy(200,15,"Click Derecho para Finalizar");
			mlimit(1,180,30,639,479);
			cont1=seleccionar(p1,4,5); 

			if(Pantihorario(p1,cont1)==0)
			{
				habilitar=1;
				setcolor(2);
				setfillstyle(8,0);
				bar(180,0,640,30);		
				outtextxy(200,10,"Poligono Cumple la Condicion");
				outtextxy(200,20,"Presiona una tecla");
			 }

			 else
			 {
				habilitar=0;
				setcolor(2);
				setfillstyle(8,0);
				bar(180,0,640,30);		
				outtextxy(200,10,"Poligono no cumple la condicion!"); 
				getch();
				Restart();
			 }
		Tcl = getch();
		if(Tcl == Esc)
		{
			Restart();
		}
		else
		{
			if(Tcl == Enter)
			{
				mlimit(1,0,0,179,479);	
				Boton1 = 0;
				Boton2 = 0;
				Boton3 = 0;
				Boton4 = 0;
				Boton5 = 0;
				Boton6 = 0;
				Operaciones();
			}
		}
	
  	 }

}

// ********************** OPERACIONES ********************** //
void Operaciones()
{
int i,j;
mver();
setfillstyle(1,LIGHTGRAY);
setcolor(14);
bar(555,435,620,465);
outtextxy(565,448,"Volver");

	if(minlimit(1,550,435,620,475) == 1 & mclick() == 1)
	{	
		Boton1 = 0;
		Boton2 = 0 ;
		Boton3 = 0;
		Boton4 = 0;
		Boton5 = 0;
		Boton6 = 0;
		mlimit(1,0,0,180,480);
	}

	 if(minlimit(1,21,436,158,468) == 1 & mclick() == 1)
	 {
 		I = 3;
	}

	 else if(minlimit(1,17,19,159,49) == 1  & mclick() == 2)
 	{
		Boton1 = 1;
		Boton2 = 0;
		Boton3 = 0;
		Boton4 = 0;
		Boton5 = 0;
		Boton6 = 0;
		mlimit(1,180,0,640,480);
	}

	 else if(minlimit(1,17,79,159,109) == 1 & mclick() == 1)
	 {
		Boton1 = 0;
		Boton2 = 1;
		Boton3 = 0;
		Boton4 = 0;
		Boton5 = 0;
		Boton6 = 0;
		mlimit(1,180,0,640,480);
 	}

	else if(minlimit(1,17,129,159,158) == 1 & mclick() == 1)
	{
		Dibujar_Componentes();
		Boton1 = 0;
		Boton2 = 0;
		Boton3 = 0;
		Boton4 = 0;
		Boton5 = 1;
		Boton6 = 0;
		mlimit(1,180,0,639,479);		
	}

	else if(minlimit(1,17,179,159,219) == 1 & mclick() == 1)
	{
		Dibujar_Componentes();															
		Boton1 = 0;
		Boton2 = 0;
		Boton3 = 0;
		Boton4 = 1;
		Boton5 = 0;
		Boton6 = 0;
		mlimit(1,180,0,639,479);		
	}

	else if(minlimit(1,17,249,159,289) == 1 & mclick() == 1)
	{
		Dibujar_Componentes();
		Boton1 = 0;
		Boton2 = 0;
		Boton3 = 1;
		Boton4 = 0;
		Boton5 = 0;
		Boton6 = 0;
		mlimit(1,180,0,639,479);		
	}
	
	else if(minlimit(1,17,319,159,364) == 1 & mclick() == 1)
	{
		Dibujar_Componentes();
		Boton1 = 0;
		Boton2 = 0;
		Boton3 = 0;
		Boton4 = 0;
		Boton5 = 0;
		Boton6 = 1;
		mlimit(1,180,0,639,479);				
		
	}
		
// ****************** BOTON 1 *********************** //

	//CREAMOS EL POLIGONO//
	 if(Boton1 == 1)
	{
		usarraton();
	}

// ****************** BOTON 2 *********************** //

	// PROCEDEMOS A VERIFICAR SI EL POLIGONO ES OPTIMO PARA LA TRIANGULACION, Y LUEGO SE TRIANGULA //
	else if(Boton2 == 1)
	{
		setcolor(2);
		setfillstyle(8,0);
		bar(180,0,640,30);
		outtextxy(250,10,"Presiona Esc para salir");	
		outtextxy(250,20,"Presiona Enter para ir al Menu");

		if(habilitar == 1)
		{
			Triangulate1(cont1,p1,1, 180,30);
		}

		else if(habilitar == 0 )
		{	
			setcolor(14);
			setfillstyle(8,0);
			outtextxy(200,400,"No hay poligono para triangular");
			getch();
			Restart();
		}

	}

// ********************* BOTON 3 **************************************//

	// GRAFICAMOS EL POLIGONO, MEDIANTE LOS PUNTOS INGRESADO//
	else if(Boton3 == 1)
	{
	cleardevice();
	delay(500);
	Dibujar_Componentes();
	setcolor(2);
	setfillstyle(8,0);
	bar(180,0,639,30);
	outtextxy(250,10,"Presiona Esc para salir");	
	outtextxy(250,20,"Presiona Enter para ir al Menu");
	
	if(cont1>2)
	{	
		setcolor(14);
		for(i=0;i<cont1-1;i++)
		{
			line(p1[i][0]+4,p1[i][1]+5,p1[i+1][0]+4,p1[i+1][1]+5);
		}
		line(p1[cont1-1][0]+4,p1[cont1-1][1]+5,p1[0][0]+4,p1[0][1]+5);
		mlimit(1,0,0,179,479);	
	}	

	else
	{
		setcolor(2);
		setfillstyle(8,0);
		bar(180,0,640,30);
		outtextxy(250,180,"No hay poligono para mostrar");	
	}
	Tcl = getch();
	
	if(Tcl == Enter)
	{
		Boton1 = 0;
		Boton2 = 0;
		Boton3 = 0;
		Boton4 = 0;
		Boton5 = 0;
		Boton6 = 0;
		Operaciones();
	}
	else if(Tcl == Esc)
	{
		Restart();
	}
	

	
	}

// ************************ BOTON 4 ******************************//

	// SE MUESTRAN LOS GUARDAS //
	else if(Boton4 == 1)
	{
		setcolor(2);
		setfillstyle(8,0);
		bar(180,0,639,30);
		outtextxy(250,10,"Presiona Esc para salir");	
		outtextxy(250,20,"Presiona Enter para ir al Menu");

		if (cont1 < 3)
		{
			setcolor(2);
			setfillstyle(8,0);
			bar(180,0,640,30);
			outtextxy(250,200,"No hay poligono para mostrar");
			Tcl = getch();
			Restart();
		}
		else
		{
			if(habilitar==1)
			{
				for(i=0;i<=cont1;i++)
				{
					setfillstyle(1,MAGENTA);
					setcolor(WHITE);
					fillellipse(Guardas[i][0],Guardas[i][1],5,5);
				}
				Tcl = getch();
				if(Tcl == Esc)
				{
					Restart();
				}
	
				else
				{
					if(Tcl == Enter)
					{
						msituar(1,1,1);
						mlimit(1,0,0,179,479);	
						Boton1 = 0;
						Boton2 = 0;
						Boton3 = 0;
						Boton4 = 0;
						Boton5 = 0;
						Boton6 = 0;
						Operaciones();
				
					}
				}

			}
			
		}
	}

// ************************ BOTON 5 **************************//

	// REALIZAMOS EL TRICOLOREADO //
	else if(Boton5 == 1)
	{
		setcolor(2);
		setfillstyle(8,0);
		bar(180,0,639,30);
		outtextxy(250,10,"Presiona Esc para salir");	
		outtextxy(250,20,"Presiona Enter para ir al Menu");

		if(cont1>2)
		{
			for(i = 0; i < Contador_Vertices-1 ; i++)
			{		
				setfillstyle(1,10+(++Color)%3);
				fillellipse(Vertices[i][0],Vertices[i][1],4,4);
				if (i % 2 == 0)
				{
					setfillstyle(1,10+(++Color)%3);
				}
				setfillstyle(1,10+(++Color)%3);
				fillellipse(Vertices[i][2],Vertices[i][3],4,4);
				setfillstyle(1,10+(++Color)%3);
				fillellipse(Vertices[i][4],Vertices[i][5],4,4);		
				
				if(i<Contador_Vertices-1)
				{
					setfillstyle(1,10+(++Color)%3);
					fillellipse(Vertices[i][4],Vertices[i][5],4,4);							
				}
			
			}
			Tcl = getch();
			if(Tcl == Esc)
			{
				Restart();
			}
			else
			{
			if(Tcl == Enter)
				{
					mlimit(1,0,0,179,479);	
					Boton1 = 0;
					Boton2 = 0;
					Boton3 = 0;
					Boton4 = 0;
					Boton5 = 0;
					Operaciones();
			
				}
			}

		}
	}

// ************************ BOTON 6 **************************//

	// REINICIAMOS EL PROGRAMA //
	else if(Boton6 == 1)
	{
		Restart();	
	}
}

//Identificamos si el poligono se encuentra antihorariamente //
//**********************************PANTIHORARIO********************************************/
 int Pantihorario(tPolygoni p,int n)
 {
 int i,min=0,ant,suc,area;
 for(i=0;i<n;++i)
	if(p[i][1]<p[min][1] || (p[i][1]==p[min][1] && p[i][0]>p[min][0]))
	   min=i;
 ant=(min+(n-1))%n;
 suc=(min+1)%n;
 area=p[ant][0]*p[min][1] - p[ant][1]*p[min][0] + p[ant][1]*p[suc][0] - p[ant][0]*p[suc][1] + p[min][0]*p[suc][1] - p[suc][0]*p[min][1];
/*se estan usando coordenadas fisicas por eso se retorna 0*/
 if(area>0)
	return 0;
 else
	return 1;
 }

//Calculamos las areas para la validacion de valores positivos //
/********FUNCION AREA2************/
long Area2(tPointi a,tPointi b,tPointi c)
{
 long area;
 area=(long)(b[0]-a[0])*(long)(c[1]-a[1]);
 area-=(long)(b[1]-a[1])*(long)(c[0]-a[0]);
 return(area);
}

//Si recordamos una de las propiedades de la función del cálculo del área del triángulo, el resultado es positivo si la lectura ordenada de los vértices nos da un recorrido antihorario. Esta propiedad puede ser útil para determinar si un punto c está a la izquierda del segmento ab//
/**********FUNCION LEFT***********/
bool Left(tPointi a,tPointi b,tPointi c)
{
 return Area2(a,b,c)>0;
}

// Calcula si el area es mayor o igual a cero, similar a la funcion anterior.//
/**********FUNCION LEFTON**********/
bool LeftOn(tPointi a,tPointi b,tPointi c)
{
 return Area2(a,b,c)>=0;
}

//Este mismo principio sirve para determinar si el punto c está justamente a la derecha. O si el área del triángulo abc es igual a cero, lo que indica que los tres puntos son colineales//
/*********FUNCION COLLINEAR********/
bool Collinear(tPointi a,tPointi b,tPointi c)
{
 return Area2(a,b,c)==0;
}

// Comprueba que las Insersecciones son Propias //
/**********FUNCION INTERSECTPROP*************/
bool IntersectProp(tPointi a,tPointi b,tPointi c,tPointi d)
{
 if(Collinear(a,b,c)||Collinear(a,b,d)||Collinear(c,d,a)||Collinear(c,d,b))
	return FALSE;
 return Xor(Left(a,b,c),Left(a,b,d)) && Xor(Left(c,d,a),Left(c,d,b));
}

//Capaz de saber si un punto c está o no en el segmento ab. Para ellos veremos si la coordenada x de c cae en el intervalo determinado por la coordenada x de a y b. Lo mismo debe hacerse para la ordenada.//
/**********FUNCION BETWEEN*******************/
bool Between(tPointi a,tPointi b,tPointi c)
{
 if(!Collinear(a,b,c))
	 return FALSE;
 if(a[X] !=b[X])
	return((a[X]<=c[X]) && (c[X]<=b[X])) || ((a[X]>=c[X]) && (c[X]>=b[X]));
 else
	return((a[Y]<=c[Y]) && (c[Y]<=b[Y])) || ((a[Y]>=c[Y]) && (c[Y]>=b[Y]));
}

//Verifica las intersecciones de diagonales // 
/***********FUNCION INTERSECT**************/
bool Intersect(tPointi a,tPointi b,tPointi c,tPointi d)
{
	if(IntersectProp(a,b,c,d))
	return TRUE; 	//Hay intersección propia//
 else
   if(Between(a,b,c)||Between(a,b,d)||Between(c,d,a)||Between(c,d,b))
	  return TRUE; //Hay interseccion impropia //
   else
	  return FALSE; //No hay interseccion //
}


//Esta function verifica si una diagonal se intersecta con una arista del poligono.//
/*********DIAGONALIE**************/
bool Diagonalie(int i,int j,int n,tPolygoni P)
{
 int k,k1;
 for(k=0;k<n;k++)
	{
	 k1=(k+1)%n;
	 if(!((k==i) || (k1==i) || (k==j) || (k1==j)))
	   if(Intersect(P[i],P[j],P[k],P[k1]))
		  return FALSE;
	}
	return TRUE;
}

// Determina si el vector que une los vértices i y j del polígono P es interior o no al polígono.//
/**********FUNCION INCONE**********/
bool InCone(int i,int j,int n,tPolygoni P)
{
 int i1,in1;
 i1=(i+1)%n;
 in1=(i+n-1)%n;
 if(LeftOn(P[in1],P[i],P[i1]))
	return Left(P[i],P[j],P[in1]) && Left(P[j],P[i],P[i1]);
 else
	return!(LeftOn(P[i],P[j],P[i1]) && LeftOn(P[j],P[i],P[in1]));
}

//Esta function verifica la possible diagonal entre dos vertices.//
/*********FUNCION DIAGONAL***********/
bool Diagonal(int i,int j,int n,tPolygoni P)
{
 return(InCone(i,j,n,P) && Diagonalie(i,j,n,P));
}

//Esta función triangula el poligono P de n vertices.//
/****************FUNCION TRIANGULATE1*******************/
void Triangulate1(int n,tPolygoni P,float escala,int left,int top)
{
 tPolygoni Pt;
 int labels[PMAX],i;
 for(i=0;i<n;i++)
	{
		PointAssign(Pt[i],P[i]);
		labels[i]=i;
	}
  TriRecurse(n,Pt,labels,escala,left,top);
}

//Esta function remueve el triangulo formado por la diagonal y la arista asociada ala diagonal, para lo cual reasigna las etiquetas del polígono.//
/**********FUNCION CLIPEAR1**********/
void ClipEar1(int i,int n,tPolygoni P,int labels[])
{
 int k;
 for(k=i;k<(n-1);k++)
	{
	 PointAssign(P[k],P[k+1]);
	 labels[k]=labels[k+1];
	}
}

//Esta funccion obtiene los vértices de la possible diagonal.//
/***********TRIRECURSE*************/
void TriRecurse(int n,tPolygoni P,int labels[],float escala,int left,int top)
{
int i,i1,i2,x,y;
	 if(n>3)
		setcolor(clinea);
		for(i=0;i<=n;i++)
		{
			i1=(i+1)%n;
			i2=(i+2)%n;
			if(Diagonal(i,i2,n,P))
			{
				line(P[i][0]*escala+4,P[i][1]*escala+5,P[i2][0]*escala+4,P[i2][1]*escala+5);
				x=(P[i][0]+P[i1][0]+P[i2][0])/3;
				y=(P[i][1]+P[i1][1]+P[i2][1])/3;

				if(c%2==0)
				{
					Guardas[c1][0] = x; 
					Guardas[c1][1] = y;
				}

			
				if(Contador_Vertices == 0)
				{
					Vertices[Contador_Vertices][0] = P[i][0]*escala+4;
					Vertices[Contador_Vertices][1] = P[i][1]*escala+5;
				 	Vertices[Contador_Vertices][2] = P[i2][0]*escala+4;
				 	Vertices[Contador_Vertices][3] = P[i2][1]*escala+5;
			 		Vertices[Contador_Vertices][4] = P[i1][0]*escala+4;
			 		Vertices[Contador_Vertices][5] = P[i1][1]*escala+5;

					Auxiliar[Contador_Vertices][0] = P[i][0]*escala+4;
					Auxiliar[Contador_Vertices][1] = P[i][1]*escala+5;
			 		Auxiliar[Contador_Vertices][2] = P[i2][0]*escala+4;
			 		Auxiliar[Contador_Vertices][3] = P[i2][1]*escala+5;
			 		Auxiliar[Contador_Vertices][4] = P[i1][0]*escala+4;
			 		Auxiliar[Contador_Vertices][5] = P[i1][1]*escala+5;

				}
		
				else
				{				
					if(((P[i][0]*escala+4) !=Auxiliar[Contador_Vertices-1][0]) && ((P[i][1]*escala+5) != Auxiliar[Contador_Vertices-1][1]) && ((P[i2][0]*escala+4) != Auxiliar[Contador_Vertices-1][2]) && ((P[i2][1]*escala+5) != Auxiliar[Contador_Vertices-1][3]) && ((P[i1][0]*escala+4) != Auxiliar[Contador_Vertices-1][4]) && ((P[i1][1]*escala+5) != Auxiliar[Contador_Vertices-1][5]) )
						Vertices[Contador_Vertices][0] = P[i][0]*escala+4;
						Vertices[Contador_Vertices][1] = P[i][1]*escala+5;
					 	Vertices[Contador_Vertices][2] = P[i2][0]*escala+4;
				 		Vertices[Contador_Vertices][3] = P[i2][1]*escala+5;
			 			Vertices[Contador_Vertices][4] = P[i1][0]*escala+4;
			 			Vertices[Contador_Vertices][5] = P[i1][1]*escala+5;
			
						Auxiliar[Contador_Vertices][0] = P[i][0]*escala+4;
						Auxiliar[Contador_Vertices][1] = P[i][1]*escala+5;
				 		Auxiliar[Contador_Vertices][2] = P[i2][0]*escala+4;
				 		Auxiliar[Contador_Vertices][3] = P[i2][1]*escala+5;
				 		Auxiliar[Contador_Vertices][4] = P[i1][0]*escala+4;
				 		Auxiliar[Contador_Vertices][5] = P[i1][1]*escala+5;
				}
	
				if(c == cont1-1)
				{
				Vertices[cont1][4] = P[cont1][0]*escala+4;
				Vertices[cont1][5] = P[cont1][1]*escala+5;
				}


				c++;
				c1++;	
				Contador_Vertices++;
				Tcl = getch();
				if(Tcl != 0)
				{
					mlimit(1,0,0,179,479);
					msituar(1,1,1);
					Boton1 = 0;
					Boton2 = 0;
					Boton3 = 0;
					Boton4 = 0;
					Boton5 = 0;
					Boton6 = 0;
					Operaciones();
				}
				
				ClipEar1(i1,n,P,labels);
				TriRecurse(n-1,P,labels,escala,left,top);

			}
		}
}

//Tabla de verdad da el valor verdadero cuando x e y son distintos//
/*********FUNCION XOR*********/
bool Xor(bool x,bool y)
{
 return !x^!y;
}

//Esta función asigna al punto "a" el valor del punto "b".//
/*********FUNCION POINTASSIGN***********/
void PointAssign(tPointi a,tPointi b)
{
 int i;
 for(i=0;i<DIM;i++)

	a[i]=b[i];
}


//
 /****************************XORPIXEL****************************************/
  void xorpixel(int x,int y)
 {

 putpixel(x,y,0^getpixel(x,y));
 }

//Dibujamos el cursor mediante la funcion xor.//
 /*********************************DIBCURSOR**********************************/
 void dibcursor(int x,int y)
	{
	 int i;
	 for(i=0;i<tamcruz;i++)
	 {
	 xorpixel(x-i,y);
	 xorpixel(x+i,y);
	 xorpixel(x,y-i);
	 xorpixel(x,y+i);
	}
	xorpixel(x,y);
	}

//Almacenamos los puntos ingresados//
/***********************************************SELECCIONAR ***********************************************************/
int seleccionar(tPolygoni p,int left,int top)
{
int xa,xi,xf,ya,yi,yf,x,y,n;
int tecla=0,c[20];
cont;
	while(tecla!=1 && cont<PMAX ){

		x=mxpos(1)-left;
		y=mypos(1)-top;
		delay(100);
		if (x!=mxpos(1)-left || y!=mypos(1)-top) 
		{
			erasecoord(left,top); 
			printcoord(mxpos(1),mypos(1),1,left,top);
		}
		if (mclick()==1 ) 
			{
			xi=mxpos(1)-left;
			yi=mypos(1)-top;
			p[cont][0]=xa=xf=xi;
			p[cont][1]= yf=ya=yi;
			++cont;
			setcolor(2);
			setfillstyle(1,7);
			bar(3,5,80,15);
			sprintf(c,"Contador=%d",cont);
			delay(100);
			while(mclick()==1) {
				if ( xa!=mxpos(1)-left || ya!=mypos(1)-top) 
				{
					xf=mxpos(1)-left;
					yf=mypos(1)-top;
					erasecoord(left,top);
					printcoord(xf,yf,1,left,top);
					borrarlinea(xi+left,yi+top,xa+left,ya+top);
					ponerlinea(xi+left,yi+top,xf+left,yf+top);
					refrescar(p,cont,1,left,top);
					xa=xf; 
					ya=yf;
				}
			}

			if(xi!=xf || yi!=yf )
			{
				p[cont][0]=xf;
				p[cont][1]=yf;
				ponerlinea(xi+left,yi+top,xf+left,yf+top);
				++cont;
				sprintf(c,"Contador=%d",cont);
				setcolor(1);
				setfillstyle(1,7);
				bar(3,5,80,15);

			}
			if (cont>1 && !(xi!=xf || yi!=yf))
			{
				ponerlinea(p[cont-2][0]+left,p[cont-2][1]+top,p[cont-1][0]+left,p[cont-1][1]+top);
			}

	   }

	  if(mclick()==2 && cont>2)
	{
			ponerlinea(p[0][0]+left,p[0][1]+top,p[cont-1][0]+left,p[cont-1][1]+top);
			tecla=1;
			refrescar(p,cont,1,left,top);
	  }
  }
  
setfillstyle(1,9);
bar(3,5,80,15);
return cont;
  }

//Refrescamos la vista trazando diagonales ya trazadas previamente, tal como una actualizacion //
/*****************************************REFRESCAR *******************************************************/
void refrescar (tPolygoni p,int cont,float escala,int left,int top)
{
		 int i;
		 if (cont>1) {
			setcolor (clinea);
			mocultar();
			for (i=1; i< cont;++i)
			line (p[i-1][0]*escala+left,p[i-1][1]*escala+top,p[i][0]*escala+left,p[i][1]*escala+top);
			}
			mver();
			return;
}

//Mostramos las coordenadas//
/*****************************************PRINTCOORD********************************/
void printcoord(int x,int y,int color,int left,int top)
{
char f[12];
	setcolor(color);
	sprintf(f,"(%d,%d)",x-left,y-top);
	outtextxy(4,6,f);
return;
}

//Ocultamos las coordenadas//
/*****************************************ERASECOORD************************************/
void erasecoord(int left,int top)
{
setfillstyle(1,7);
bar(3,5,80,15);
return;
	}

//Borramos una linea //
/******************************************BORRARLINEA************************************/
void borrarlinea(int x1,int y1,int x2,int y2)
{
mocultar();
setcolor(Cfondo);
line(x1,y1,x2,y2);
mver();
return;
}


//Ubicamos una linea correcta e idonea para el poligono//
/***********************************************PONER LINEA*******************************************/
void ponerlinea(int x1,int y1,int x2,int y2)
{
 mocultar();
 setcolor(clinea);
 line(x1,y1,x2,y2);
 mver();
return;
}