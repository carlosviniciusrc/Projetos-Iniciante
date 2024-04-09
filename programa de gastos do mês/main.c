#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("Gastos do Mes\n\n");
	
	float salario, nubank, inter, academia, faculdade, total;
	
	printf("Digite o valor do salario: ");
	scanf("%f",&salario);
	
	printf("Digite o valor do cartao Nubank: ");
	scanf("%f", &nubank);
	
	printf("Digite o valor do cartao Inter: ");
	scanf("%f", &inter);
	
	printf("Digite o valor da Academia: ");
	scanf("%f", &academia);
	
	printf("Digite o valor do faculdade: ");
	scanf("%f", &faculdade);
	
	total = salario - (nubank + inter + academia + faculdade);
	
	if(total >= 0)
		printf("voce pode gastar\n");
	else
	   printf("voce nao pode gastar\n");
	
	printf("O valor que sobrou foi de: %2.f\n", total);
	
	system("pause");
	
	return 0;
}
