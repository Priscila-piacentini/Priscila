//Retirado do e-book ( pagina 33) 
// videos no youtube 
// tive ajuda de uma colega do trabalho

#include<stdio.h>
#include<math.h>
 int main(void){
	float num1=0, num2=0,  num, raizquadrada, resultado=0 ;
	int op;
	do{
		op=0;
	printf("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICAO\n\t4 - DIVISAO\n\t5 - POTENCIA\n\t6 - RAIZ QUADRADA");
	printf("\n Escolha uma opcao: ");
	scanf("%d", &op);
	

	
	if (op==6)	{
			printf("\n Digite o um numero: ");	
		scanf("%f", &num1);
		resultado = sqrt(num1);
	}else 
{

		printf("\n Digite o primeiro numero: ");
		scanf ("%f", &num1);
		printf("\n Digite o segundo numero: ");
		scanf("%f", &num2);
	switch(op){
			case 1:
				resultado = num1+num2;
				break;
				case 2: 
				resultado = num1-num2;
				break;
				case 3:
					resultado  = num1*num2;
					break;
					case 4 :
					resultado = num1/num2;
					break;
					case 5 :
						resultado = pow(num1,num2);
						break;
						
				default:
					printf("\n Digite uma opcao valida\n");
					break;
					

					
		}
	}	
			
	
		printf("\n\t  resultado e: %0.f\n", resultado);
		
			printf("\n Digite 1 para continuar: \n");
					scanf("%i", &op);
	
	}while(op==1);
}
