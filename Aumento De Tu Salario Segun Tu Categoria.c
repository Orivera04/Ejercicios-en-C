#include <stdio.h>
void main()
{
  float categoria,salario,resultado,aumento; 
  printf("\t\t\t\t|----------|\n");
  printf("\t\t\t\t|Bienvenido|\n");
  printf("\t\t\t\t|----------|\n ");
  printf("\nPon la categoria y tu salario -> ");
scanf("%f%f",&categoria,&salario);
        while(categoria<0 || categoria>4)
		{
		printf("No existe esa categoria vuelve a introducir los datos  -> ");	
	    scanf("%f%f",&categoria,&salario);
		}
       
		if(categoria==1)
		{
		 aumento=salario*0.15;
		 resultado=salario+aumento;
		 printf("Tu categoria es 1(15%)\n");
			
		} 
       
        if(categoria==2)
		{
		 aumento=salario*0.10;
		 resultado=salario+aumento;
		 printf("Tu categoria es 2(10%)\n");
			
		} 
		if(categoria==3)
		{
		 aumento=salario*0.08;
		 resultado=salario+aumento;
		 printf("Tu categoria es 3(8%)\n");
			
		}
		if(categoria==4)
		{
		 aumento=salario*0.07;
		 resultado=salario+aumento;
		 printf("Tu categoria es 4(7%)\n");
			
		}
		
		printf("Tu aumento es:%.2f y tu salario total es:%.2f\n",aumento,resultado);
		system("pause");  
}
