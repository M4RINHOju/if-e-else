#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome1[15] ="";
	char nome2[15] ="";
	char nome3[15] ="";
	float p1=0.0;
	float p2=0.0;
	float p3=0.0;
	int ptotal=0;
	int idade1 =0;
	int idade2 =0;
	int idade3 =0;
	printf("!!!!!!!!!!!!!!!bem vindo ao nosso balao!!!!!!!!!!!!!!\n\n");
	printf("...:::Vamos fazer um teste:::...\n\n\n");
	printf("digite o primeiro nome:");
	scanf("%s",&nome1);
	printf("digite seu peso:");
	scanf("%f",&p1);
	printf("Digite sua idade:");
	scanf("%i",&idade1);
	printf("\n________________________________________________________________\n\n\n");
	printf("digite o segundo nome:");
	scanf("%s",&nome2);
	printf("digite seu peso:");
	scanf("%f",&p2);
	printf("digite sua idade:");
	scanf("%i",&idade2);
	printf("\n________________________________________________________________\n\n\n");
	printf("digite o terceiro nome:");
	scanf("%s",&nome3);
	printf("digite seu peso:");
	scanf("%f",&p3);
	printf("Digite sua idade:");
	scanf("%i",&idade3);
	printf("\n________________________________________________________________\n\n\n");

	ptotal= (p1+p2+p3);
	
	if((idade1<16)||(idade2<16)||(idade3<16)){
		printf("voo bloqueado menor de 16 identificado!!!\n\n");
	}else{
	if(ptotal>300)
		printf("ultrapassou o peso, voo não liberado!!!\n\n");
	}
	system("pause");
	return 0;
}
