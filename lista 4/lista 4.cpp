#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int exercicio = 1;

	while (exercicio != 0) {
		printf("Digite o exercicio desejado: ");
		scanf("%d", &exercicio);

		switch (exercicio)
		{
		case 1:
		{
			int A[6] = { 1, 0, 5, -2, -5, 7 },
				soma = 0;

			soma = A[0] + A[1] + A[5];
			printf("A soma e igual a: %d", soma);

			A[4] = 100;
			for (int i = 0; i < 6; ++i) {
				printf("A[%d] = %d", i, A[i]);
			}

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
