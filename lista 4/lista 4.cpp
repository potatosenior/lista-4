#include <stdio.h>
#include <stdlib.h>

double pow(double a, int b);
int main(void) {
	int exercicio = 1;

	while (exercicio != 0) {
		printf("Digite o exercicio desejado: ");
		scanf_s("%d", &exercicio);

		switch (exercicio)
		{
		case 1:
		{
			int A[6] = { 1, 0, 5, -2, -5, 7 },
				soma = 0;

			soma = A[0] + A[1] + A[5];
			printf("A soma e igual a: %d\n", soma);

			A[4] = 100;
			for (int i = 0; i < 6; ++i) {
				printf("A[%d] = %d\n", i, A[i]);
			}

			break;
		}
		case 2:
		{
			int valores[6], i = 0;

			for (i; i < 6; i++)
			{
				printf("Digite o %d numero: ", i + 1);
				scanf_s("%d", &valores[i]);
			}
			for (int i = 0; i < 6; i++)
			{
				printf("O %d valor lido foi: %d\n", i + 1, valores[i]);
			}
			break;
		}
		case 3: 
		{
			double valores[10], resultado[10];

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%f", &valores[i]);
			}
			for (int i = 0; i < 10; i++)
			{
				resultado[i] = pow(valores[i], 2);
				printf_s("valores[%d] = %.2lf, resultado[%d] = %.2lf\n", i, valores[i], i, resultado[i]);
			}
		}

		case 4:
		{
			int vetor[8], a, b;

			for (int i = 0; i < 8; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);
			}
			do {
				printf_s("Digite respectivamente dois valores entre 0 e 8: ");
				scanf_s("%d %d", &a, &b);
			} while (a < 0 || a > 8 && b < 0 || b > 8);
			printf_s("A soma dos valores na posicao vetor[%d] e vetor[%d] e igual a: %d\n", a, b, vetor[a] + vetor[b]);

			break;
		}

		

		default:
		{
			if (exercicio == 0)
				printf("Saindo do progama!...");
			else
				printf("Exercicio invalido!\n");
		}
		}
	}
	return 0;
}

double pow(double a, int b) {
	double resultado = a;

	for(int i = 2; i <= b; i++)
		resultado *= a;

	return resultado;
}