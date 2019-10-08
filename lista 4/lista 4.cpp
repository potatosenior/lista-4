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

		case 14:
		{
			int vetor[10], iguais[10] = {}, igual, contador_iguais = 0;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);
			}

			for (int i = 0; i < 10; i++)
			{
				for (int k = 0; k < i; k++)
				{
					igual = 0;

					if (vetor[i] == vetor[k])
					{
						for (int j = 0; j < contador_iguais; j++)
						{
							if (vetor[i] == iguais[j])
								igual = 1;
						}
						if (igual == 0)
						{
							iguais[contador_iguais] = vetor[i];
							contador_iguais++;
						}
					}
				}
			}

			for (int i = 0; i < contador_iguais; i++)
			{
				printf_s("Numeros iguais: | %d |\n", iguais[i]);
			}

			break;
		}

		case 15:
		{
			int vetor[20], repetidos[10] = {NULL}, repete, contador = 0;

			for (int i = 0; i < 20; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);
			}

			for (int i = 0; i < 20; i++)
			{
				for (int k = 0; k < i; k++)
				{
					if (vetor[i] == vetor[k])
					{
						repete = 0;

						for (int j = 0; j < contador; j++)
						{
							if (vetor[i] == repetidos[j])
								repete = 1;
						}
						if (repete == 0)
						{
							repetidos[contador] = vetor[i];
							contador++;
						}
					}
				}
				
			}
			for (int i = 0; i < 20; i++)
			{
				repete = 0;
				for (int j = 0; j < contador; j++)
				{
					if (vetor[i] == repetidos[j])
						repete = 1;
				}
				if (repete == 0)
					printf_s("Vetor[%d] = | %d |\n", i, vetor[i]);
				else
					printf_s("Vetor[%d] = *Repetido*\n", i);
			}
			
			break;
		}

		case 16:
		{
			double vetor[5];
			int cod;

			for (int i = 0; i < 5; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%lf", &vetor[i]);
			}
			printf_s("\nDigite o codigo (0, 1 ou 2): ");
			scanf_s("%d", &cod);

			if (cod == 0)
				break;
			else
			{
				if (cod == 1)
				{
					for (int i = 0; i < 5; i++)
					{
						printf("Vetor[%d] = | %lf |\n", i, vetor[i]);
					}
				}
				else
				{
					if (cod == 2)
					{
						for (int i = 4; i >= 0; i--)
						{
							printf_s("Vetor[%d] = | %lf |\n", i, vetor[i]);
						}
					}
					else
						printf_s("\nCodigo invalido!");
				}
			}
				break;
		}

		case 17:
		{
			int vetor[10];
			
			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);
				if (vetor[i] < 0)
					vetor[i] = 0;
			}
			for (int i = 0; i < 10; i++)
			{
				printf_s("vetor[%d] = %d\n", i, vetor[i]);
			}
			break;
		}

		case 18:
		{
			int vetor[10], numero;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);
			}
			printf_s("\nDigite um numero: ");
			scanf_s("%d", &numero);

			for (int i = 0; i < 10; i++)
			{
				if (vetor[i] % numero == 0)
					printf_s("O numero %d na posicao vetor[%d] e multiplo de %d!\n", vetor[i], i, numero);
			}
			break;
		}

		case 19:
		{
			int vetor[50];

			for (int i = 0; i < 50; i++)
			{
				vetor[i] = (i + 5 * i) % (i + 1);
				printf_s("Vetor[%d] = | %d |\n", i, vetor[i]);
			}
			break;
		}

		case 20:
		{
			int vetor[10], impares[10] = { NULL }, i, cont = 0;

			i = 0;

			do
			{
				printf_s("Digite o %d valor: ", i + 1);
				scanf_s("%d", &vetor[i]);

				if (vetor[i] < 0 || vetor[i] > 50)
					i--;
				else
				{ 
					if (vetor[i] % 2 != 0) {
						impares[cont] = vetor[i];
						cont++;
					}
				}

				i++;
			} while ( (vetor[i] < 0 || vetor[i] > 50) && i < 10);

			for (int i = 0; i < 10; i++)
			{
				if (impares[i] != NULL)
					printf_s("Vetor[%d] = %d | impares[%d] = %d\n", i, vetor[i], i, impares[i]);
				else
					printf_s("Vetor[%d] = %d | impares[%d] = --\n", i, vetor[i], i);
			}

			break;
		}

		case 21:
		{
			int vetor_A[10], vetor_B[10], vetor_C[10];

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor do vetor A: ", i + 1);
				scanf_s("%d", &vetor_A[i]);					
			}
			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor do vetor B: ", i + 1);
				scanf_s("%d", &vetor_B[i]);
			}
			for (int i = 0; i < 10; i++)
			{
				vetor_C[i] = vetor_A[i] - vetor_B[i];

				printf_s("Vetor_C[%d] = | %d |\n", i, vetor_C[i]);
			}

			break;
		}

		case 22:
		{
			int vetor_A[10], vetor_B[10], vetor_C[20], cont_a = 0, cont_b = 0;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor do vetor A: ", i + 1);
				scanf_s("%d", &vetor_A[i]);
			}
			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o %d valor do vetor B: ", i + 1);
				scanf_s("%d", &vetor_B[i]);
			}
			for (int i = 0; i < 20; i++)
			{
				if (i % 2 == 0) {
					vetor_C[i] = vetor_A[cont_a];
					cont_a++;
				}
				else
				{
					vetor_C[i] = vetor_B[cont_b];
					cont_b++;
				}

				printf_s("Vetor_C[%d] = | %d |\n", i, vetor_C[i]);
			}
			break;
		}

		case 23:
		{
			double vetor_A[5], vetor_B[5], resultado = 0;

			for (int i = 0; i < 5; i++)
			{
				printf_s("Digite o %d valor do conjunto A: ", i);
				scanf_s("%lf", &vetor_A[i]);
				printf_s("Digite o %d valor do conjunto B: ", i);
				scanf_s("%lf", &vetor_B[i]);
				printf_s("\n");
			}
			for (int i = 0; i < 5; i++)
			{
				resultado += vetor_A[i] * vetor_B[i];
				printf_s("\nVetor_A[%d] = | %lf | Vetor_B[%d] = | %lf |", i, vetor_A[i], i, vetor_B[i]);
			}
			printf_s("\nProduto escalar = %lf", resultado);

			break;
		}

		case 24:
		{
			struct dados_alunos
			{
				int numero;
				float altura;
			};

			struct dados_alunos aluno[10], maior, menor;

			for (int i = 0; i < 10; i++)
			{
				printf_s("Digite o numero do %d aluno: ", i + 1);
				scanf_s("%d", &aluno[i].numero);
				printf_s("Digite a altura do aluno: ");
				scanf_s("%f", &aluno[i].altura);
			}
			for (int i = 0; i < 10; i++)
			{
				if (i == 0) {
					maior.altura = aluno[i].altura;
					maior.numero = aluno[i].numero;

					menor.altura = aluno[i].altura;
					menor.numero = aluno[i].numero;
				}

				if (aluno[i].altura > maior.altura)
				{
					maior.altura = aluno[i].altura;
					maior.numero = aluno[i].numero;
				}
				if (aluno[i].altura < menor.altura)
				{
					menor.altura = aluno[i].altura;
					menor.numero = aluno[i].numero;
				}
			}
			printf_s("O maior aluno tem o numero %d e a altura de %.2f metros!\n", maior.numero, maior.altura);
			printf_s("O menor aluno tem o numero %d e a altura de %.2f metros!\n", menor.numero, menor.altura);

			break;
		}

		case 25:
		{
			int vetor[100], cont = 0;

			for (int i = 0; i < 100; i++)
			{
				cont = 0;
				for (int j = 7; cont != 1 ; j++)
				{
					if (j % 7 == 0 || j % 10 == 7)
					{
						vetor[i] = j;
						cont = 1;
					}
				}
				printf_s("vetor[%d] = %d\n", i, vetor[i]);
			}
			break;
		}

		default:
		{
			if (exercicio == 0)
				printf("Saindo do progama!...");
			else
				printf("\nExercicio invalido!\n");
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