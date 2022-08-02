#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main(int argc, char *argv[]) {
	
	float  Cantidad = 0;
	int C500=0,C200=0,C100=0,C50=0,C20=0,C10=0,C5=0,C1=0,C0_50=0,C0_25=0,C0_10=0,C0_05=0;
	printf("|***********************************************************|\n");
	printf("|                           Cajero                          |\n");
	printf("|***********************************************************|\n");
	printf("Ingrese la cantidad en efectivo -> ");
	scanf("%f", &Cantidad);
	 do
	 {    
	 
	if(fmod(Cantidad,500)== 0)
    { 
  	C500 = C500+1;
    Cantidad=Cantidad-500;       
	}
	else if(fmod(Cantidad,200) == 0)
    { 
  	C200 = C200+1;
    Cantidad=Cantidad-200; 
     }      
     else if(fmod(Cantidad,100)== 0)
    { 
  	C100 = C100+1;
    Cantidad=Cantidad-100;       
	}
	else if(fmod(Cantidad,50)== 0)
    { 
  	C50 = C50+1;
    Cantidad=Cantidad-50;       
	}
	else if(fmod(Cantidad,20)== 0)
    { 
  	C20 = C20+1;
    Cantidad=Cantidad-20;       
	} 
	else if(fmod(Cantidad,10)== 0)
    { 
  	C10 = C10+1;
    Cantidad=Cantidad-10;       
	}  
		else if(fmod(Cantidad,5)== 0)
    { 
  	C5 = C5+1;
    Cantidad=Cantidad-5;       
	}   
		else if(fmod(Cantidad,1)== 0)
    { 
  	C1 = C1+1;
    Cantidad=Cantidad-1;       
	} 
		else if(fmod(Cantidad,0.50)== 0)
    { 
  	C0_50 = C0_50+1;
    Cantidad=Cantidad-0.50;       
	}       
	else if(fmod(Cantidad,0.25)== 0)
    { 
  	C0_25 = C0_25+1;
    Cantidad=Cantidad-0.25;       
	}     
	else if(fmod(Cantidad,0.10)== 0)
    { 
  	C0_10 = C0_10+1;
    Cantidad=Cantidad-0.10;       
	}  
	else if(fmod(Cantidad,0.05)== 0)
    { 
  	C0_05 = C0_05+1;
    Cantidad=Cantidad-0.05;       
	}         
	 }
	while(Cantidad != 0);

printf("Billetes de a 500 -> %d\n",C500);
printf("Billetes de a 200 -> %d\n",C200);
printf("Billetes de a 100 -> %d\n",C100);
printf("Billetes de a 50 -> %d\n",C50);
printf("Billetes de a 20 -> %d\n",C20);
printf("Billetes de a 10 -> %d\n",C10);
printf("Billetes de a  5 -> %d\n",C5);
printf("Billetes de a  1 -> %d\n",C1);
printf("Billetes de a  0.50  -> %d\n",C0_50);
printf("Billetes de a  0.25  -> %d\n",C0_25);
printf("Billetes de a  0.10  -> %d\n",C0_10);
printf("Billetes de a  0.05  -> %d\n",C0_05);
system("pause");

}
