#include <stdio.h>
#include <stdlib.h>

double pow(double a, int b);
int main(void) {
	int exercicio = 1;

	while (exercicio != 0) {
		printf("\nDigite 0 para sair ou exercicio desejado: ");
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
				scanf_s("%lf", &valores[i]);
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

		case 5:
		{
			int vetor[10], qntd_pares = 0;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);
				if (vetor[i] % 2 == 0)
					qntd_pares++;
			}
			printf_s("\nO total de numeros pares que o vetor possui e de: %d", qntd_pares);

			break;
		}

		case 6:
		{
			int vetor[10], maior, menor;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);

				if (i == 0) {
					maior = vetor[i];
					menor = vetor[i];
				}
				if (vetor[i] > maior)
					maior = vetor[i];
				if (vetor[i] < menor)
					menor = vetor[i];
			}
			printf_s("O maior elemento inserido foi: %d. E o menor: %d.", maior, menor);

			break;
		}

		case 7:
		{
			int vetor[10], maior, posicao;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);

				if (i == 0) {
					maior = vetor[i];
				}
				if (vetor[i] > maior) {
					maior = vetor[i];
					posicao = i;
				}
				
			}
			printf_s("O maior elemento inserido foi: %d na posicao vetor[%d].", maior, posicao);

			break;

		}

		case 8:
		{
			int valores[6];

			for (int i = 0; i < 6; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &valores[i]);
			}
			printf_s("Os valores inseridos na ordem inversa: \n");
			for (int i = 5; i >= 0; i--)
			{
				printf_s("| %d |\n", valores[i]);
			}

			break;
		}

		case 9:
		{
			int pares[6];

			for (int i = 0; i < 6; i++)
			{
				do {
					printf_s("Digite o %d valor(par): ", i + 1);
					scanf_s("%d", &pares[i]);
					if (pares[i] % 2 != 0)
						printf_s("\nDigite somente numeros PARES!\n\n");
				} while (pares[i] % 2 != 0);
			}
			printf_s("Os valores pares inseridos na ordem inversa: \n");
			for (int i = 5; i >= 0; i--)
			{
				printf_s("| %d |\n", pares[i]);
			}

			break;
		}

		case 10:
		{
			double notas[15], media_geral = 0;

			for (int i = 0; i < 15; i++)
			{
				printf_s("Digite a %d nota: ", i + 1);
				scanf_s("%lf", &notas[i]);
				media_geral += notas[i];
			}
			media_geral /= 15.0;

			printf_s("\nA media geral das notas e igual a: %.2lf", media_geral);

			break;
		}

		case 11:
		{
			double numeros[10], soma_positivos = 0;
			int qntd_negativos = 0;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d numero: ", i + 1);
				scanf_s("%lf", &numeros[i]);
				if (numeros[i] < 0)
					qntd_negativos++;
				else
					soma_positivos += numeros[i];
			}
			printf_s("\nO total de numeros negativos inseridos foi: %d\nA soma dos numeros positivos e de: %.4lf", qntd_negativos, soma_positivos);

			break;
		}

		case 12:
		{
			int vetor[5], maior, menor, media = 0;

			for (int i = 0; i < 5; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);

				if (i == 0) {
					maior = vetor[i];
					menor = vetor[i];
				}
				if (vetor[i] > maior)
					maior = vetor[i];
				if (vetor[i] < menor)
					menor = vetor[i];
				media += vetor[i];
			}
			media /= 5;
			printf_s("\nOs numeros digitados foram: \n");
			for (int i = 0; i < 5; i++)
			{
				printf_s("| %d |\n", vetor[i]);
			}
			printf_s("O maior elemento inserido foi: %d. E o menor: %d. A media: %d", maior, menor, media);

			break;
		}

		case 13:
		{
			int vetor[5], maior, menor, posicao_maior, posicao_menor = 0;

			for (int i = 0; i < 5; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);

				if (i == 0) {
					maior = vetor[i];
					menor = vetor[i];
				}
				if (vetor[i] > maior) {
					maior = vetor[i];
					posicao_maior = i;
				}
				if (vetor[i] < menor) {
					menor = vetor[i];
					posicao_menor = i;
				}
			}
			printf_s("O maior elemento inserido foi: %d na posicao: %d.\nE o menor: %d na posicao: %d.", maior, posicao_maior, menor, posicao_menor);

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