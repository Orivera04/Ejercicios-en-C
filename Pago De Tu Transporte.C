#include <stdio.h>
main()
{
  int contador,km,toneladas,pago; 
  printf("\t\t\t\t|----------|\n");
  printf("\t\t\t\t|Bienvenido|\n");
  printf("\t\t\t\t|----------|\n ");
  printf("\nIngresa tu tipo de transporte y KM recorridos(1-Bicicleta,2-Moto,3-Carro,4-Camion -> ");
  scanf("%d%d",&contador,&km);
      switch(contador)
	     {
		  case 1:
		  pago=50*km;
		  printf("Recorriste %d km y tu pago es %d ",km,pago );		
		  break;
		  
		  case 2:
		  pago=50*km;
		  printf("Recorriste %d km y tu pago es %d ",km,pago );	
		  break;
		  
		  case 3:
		  pago=100*km;
		  printf("Recorriste %d km y tu pago es %d ",km,pago );
		  break;
		  
		  case 4:
		  printf("Tienes un camion por lo cual debes pagar una cantidad extra\ningresa la cantidad de peso en toneladas de tu camion -> ");
		  scanf("%d",&toneladas);
		  pago=(150*km)+(toneladas *100);
		  printf("Recorriste %d km tu camion pesa %d toneladas y tu pago es %d ",km,toneladas,pago );
		  break;
		  
		  default:
		  printf("Error");									
			break;	
		 }

} 
 
