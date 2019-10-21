#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double pow(double a, int b);
int e_primo(int num);
int inter();

int main(void) {
	int exercicio = 1;

	while (exercicio != 0) {
		printf("\n\n-------------------------------------------------------\nDigite 0 para sair ou exercicio desejado: ");
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
					//else
						//printf_s("Vetor[%d] = *Repetido*\n", i);
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
				int vetor[100], cont = 0, j = 0;

				for (int i = 0; i < 100; i++)
				{
					cont = 0;
					for ( j; cont != 1 ; j++)
					{
						if (j % 7 != 0 && j % 10 != 7)
						{
							vetor[i] = j;
							cont = 1;
						}
					}
					printf_s("vetor[%d] = %d\n", i, vetor[i]);
				}
				break;
			}

			case 26:
			{
				/* 
				double media, desvio, vetor[10];
				int n = 10;

				for (int i = 0; i < n; i++)
				{
					pow(vetor[i] - media, 2);
				}
				*/
			}

			case 27:
			{
				struct numero
				{
					int numero;
					int posicao;
				};

				numero primo[10];
				int vetor[10], cont = 0, result;

				for (int i = 0; i < 10; i++)
				{
					printf_s("Digite o %d numero: ", i + 1);
					scanf_s("%d", &vetor[i]);

					result = e_primo(vetor[i]);

					if (result == 1)
					{
						primo[cont].numero = vetor[i];
						primo[cont].posicao = i;
						cont++;
					}
				}
				printf_s("\nOs seguintes numeros sao primos: \n\n");
				for (int i = 0; i < cont; i++)
				{
					printf_s("O numero | %d | na posicao | %d | do vetor.\n", primo[i].numero, primo[i].posicao);
				}
				break;
			}

			case 28:
			{
				int vetor[10], impares[10] = { NULL }, pares[10] = { NULL }, cont_pares = 0, cont_impares = 0;

				for (int i = 0; i < 10; i++)
				{
					printf_s("Digite o %d numero: ", i + 1);
					scanf_s("%d", &vetor[i]);

					if (vetor[i] % 2 == 0)
					{
						pares[cont_pares] = vetor[i];
						cont_pares++;
					}
					else
					{
						impares[cont_impares] = vetor[i];
						cont_impares++;
					}
				}
				printf_s("\nElementos utilizados: \n");
				for (int i = 0; i < 10; i++)
				{
					if (impares[i] != NULL)
					{
						printf_s("\nImpares[%d] = %d ", i, impares[i]);
					}
					if (pares[i] != NULL)
					{
						printf_s("| Pares[%d] = %d\n", i, pares[i]);
					}
				}
				break;
			}

			case 29:
			{
				int vetor[6], pares[6] = { NULL }, soma_pares = 0, qntd_pares = 0, impares[6] = { NULL }, qntd_impares = 0;

				for (int i = 0; i < 6; i++)
				{
					printf_s("Digite o %d numero: ", i + 1);
					scanf_s("%d", &vetor[i]);

					if (vetor[i] % 2 == 0)
					{
						pares[qntd_pares] = vetor[i];
						soma_pares += vetor[i];
						qntd_pares++;
					}
					else
					{
						impares[qntd_impares] = vetor[i];
						qntd_impares++;
					}
				}

					for (int i = 0; i < qntd_pares; i++)
					{
						printf_s("Pares[%d] = | %d | \n", i, pares[i]);
					}
					printf_s("\nSoma dos numeros pares: | %d |\n", soma_pares);
					for (int i = 0; i < qntd_impares; i++)
					{
						printf_s("Impares[%d] = | %d | \n", i, impares[i]);
					}
					printf_s("\nQuantidade de numeros impares digitados: | %d |", qntd_impares);

					break;
			}

			case 30:
			{
				int vetor_a[10], vetor_b[10], interseccao[10],
				cont = 0, n = 10, repetido;

				for (int i = 0; i < n; i++)
				{
					printf_s("Digite o %d numero do primeiro vetor: ", i + 1);
					scanf_s("%d", &vetor_a[i]);
				}
				for (int i = 0; i < n; i++)
				{
					printf_s("Digite o %d numero do segundo vetor: ", i + 1);
					scanf_s("%d", &vetor_b[i]);
				}

				for (int i = 0; i < n; i++)
				{
					for (size_t j = 0; j < n; j++)
					{
						if (vetor_a[i] == vetor_b[j])
						{
							repetido = 0;
							for (int k = 0; k < cont; k++)
							{
								if (vetor_a[i] == interseccao[cont])
								{
									repetido = 1;
								}
							}
							if (repetido == 0)
							{
								interseccao[cont] = vetor_a[i];
								cont++;
							}
						}
					}
				}
				for (int i = 0; i < cont; i++)
				{
					printf_s("interseccao = | %d |\n", interseccao[i]);
				}
				break;
			}
		
			case 31:
			{
				int vetor_a[10], vetor_b[10], uniao[20];

				for (int i = 0; i < 10; i++)
				{
					printf_s("Digite o %d numero do primeiro vetor: ", i + 1);
					scanf_s("%d", &vetor_a[i]);
					uniao[i] = vetor_a[i];
				}
				for (int i = 0; i < 10; i++)
				{
					printf_s("Digite o %d numero do segundo vetor: ", i + 1);
					scanf_s("%d", &vetor_b[i]);
					uniao[i + 10] = vetor_b[i];
				}
				for (int i = 0; i < 20; i++)
				{
					printf_s("Vetor uniao[%d] = | %d |\n", i, uniao[i]);
				}
				break;
			}

			case 32:
			{
				int vetor_a[5], vetor_b[5], soma[5], diferenca[5], produto[5], inters[5], uniao[10], repetidos[5],
					cont = 0, existe;

				for (int i = 0; i < 5; i++)
				{
					printf_s("Digite o %d numero do primeiro vetor: ", i + 1);
					scanf_s("%d", &vetor_a[i]);
					uniao[i] = vetor_a[i];
				}
				for (int i = 0; i < 5; i++)
				{
					printf_s("Digite o %d numero do segundo vetor: ", i + 1);
					scanf_s("%d", &vetor_b[i]);
					uniao[i + 5] = vetor_b[i];
				}

				for (int i = 0; i < 5; i++)
				{
					soma[i] = vetor_a[i] + vetor_b[i];
					diferenca[i] = vetor_a[i] - vetor_b[i];
					produto[i] = vetor_a[i] * vetor_b[i];

					for (int j = 0; j < 5; j++)
					{
						if (vetor_a[i] == vetor_b[j])
						{
							existe = 0;
							for (int k = 0; k < cont; k++)
							{
								if (vetor_a[i] == repetidos[k])
									existe = 1;
							}
							if (existe == 0)
							{
								inters[cont] = vetor_a[i];
								cont++;
							}
						}
					}
				}
				//imprimir os resultados
				printf_s("\n---------------- SOMA ----------------\n\n");
				for (int i = 0; i < 5; i++)
				{
					printf_s("vetor_a[%d] + vetor_b[%d] = | %d |\n",i, i, soma[i]);
				}
				printf_s("\n---------------- DIFERENCA ----------------\n\n");
				for (int i = 0; i < 5; i++)
				{
					printf_s("vetor_a[%d] - vetor_b[%d] = | %d |\n",i,i, diferenca[i]);
				}
				printf_s("\n---------------- PRODUTO ----------------\n\n");
				for (int i = 0; i < 5; i++)
				{
					printf_s("vetor_a[%d] * vetor_b[%d] = | %d |\n",i,i, produto[i]);
				}
				printf_s("\n---------------- INTERSECCAO ----------------\n\n");
				printf_s("vetor_a /\\ vetor_b = ");
				for (int i = 0; i < cont; i++)
				{
					printf_s("%d ", inters[i]);
				}
				printf_s("\n---------------- UNIAO ----------------\n\n");
				printf_s("vetor_a U vetor_b = ");
				for (int i = 0; i < 10; i++)
				{
					printf_s("%d ", uniao[i]);
				}
				
				break;
			}

			case 33:
			{
				int n = 15;
				int vetor[15], cont = 0;

				for (int i = 0; i < n; i++)
				{
					printf_s("Digite o %d numero: ", i + 1);
					scanf_s("%d", &vetor[i]);
				}

				for (int i = 0; i < n; i++)
				{
					if (vetor[i] == 0)
					{
						cont++;
						for (int j = i+1; j < n; j++)
						{
							vetor[j - 1] = vetor[j];
						}
					}
				}
				for (int i = 0; i < n-cont; i++)
				{
					printf_s("vetor[%d] = | %d |\n", i, vetor[i]);
				}
				break;
			}

			case 34:
			{
				int vetor[10], repetidos[10], qntd_repetidos = 0, repetiu;

				for (int i = 0; i < 10; i++)
				{
					printf_s("Digite o %d numero: ", i + 1);
					scanf_s("%d", &vetor[i]);

					repetiu = 0;
					for (int j = 0; j < qntd_repetidos; j++)
					{
						if (vetor[i] == repetidos[j])
						{
							printf_s("\nO numero ja foi digitado!!\n");
							repetiu = 1;

						}
					}
					if (repetiu == 0)
					{
						repetidos[qntd_repetidos] = vetor[i];
						qntd_repetidos++;
					}
					else
					{
						i--;
					}
				}
				for (int i = 0; i < 10; i++)
				{
					printf_s("vetor[%d] = | %d |\n", i, vetor[i]);
				}
				break;
			}
			
			case 35:
			{
				int a = 0, b = 0, soma[6] = { 0 }, soma_final[6] = { 0 }, vetor_aa[5] = { NULL }, vetor_bb[5] = { NULL };
				int cont_a = 0, cont_b = 0, qntd_zeros = 0;
				char vetor_a[5] = {NULL}, vetor_b[5] = {NULL};

				do
				{
					printf_s("Digite o primeiro numero(maior que 0 e menor que 10000): ");
					scanf_s("%d", &a);
					_itoa_s(a, vetor_a, 10);

				} while (a > 10000);
				do
				{
					printf_s("Digite o segundo numero(maior que 0 menor que 10000): ");
					scanf_s("%d", &b);
					_itoa_s(b, vetor_b, 10);

				} while (b > 10000);

				//sprintf_s(vetor_a, "%d", a);
				//sprintf_s(vetor_b, "%d", b);

				for (int i = 4; i >= 0; i--)
				{
					if (vetor_a[i] != -2 && vetor_a[i] != 0)
					{
						vetor_aa[i] = vetor_a[cont_a] - '0';
						cont_a++;
					}
					else
					{
						vetor_aa[i] = 0;
						
					}
					if (vetor_b[i] != -2 && vetor_b[i] != 0)
					{
						vetor_bb[i] = vetor_b[cont_b] - '0';
						cont_b++;
					}
					else
					{
						vetor_bb[i] = 0;
					}
				}

				for (int i = 0; i < 5; i++)
				{
					if (vetor_aa[i] + vetor_bb[i] + soma[i] >= 10)
					{
						soma[i + 1] = ( vetor_aa[i] + vetor_bb[i] + soma[i]) / 10;
						soma[i] += ( vetor_aa[i] + vetor_bb[i] + soma[i] ) % 10;
					}
					else
					{
						soma[i] += vetor_aa[i] + vetor_bb[i];
					}
				}
				for (int i = 5; i >= 0; i--)
				{
					if (soma[i] == 0)
					{
						qntd_zeros++;
					}
					else
						break;
				}

				for (int i = 0; i < 6 - qntd_zeros; i++)
				{
					soma_final[5 - i] = soma[i];
				}

				/*for (int i = 0; i < 5; i++)		//-----debugg
				{
					printf_s("| vetor_a[%d] = %d | vetor_b[%d] = %d | vetor_aa[%d] = %d | vetor_bb[%d] = %d |\n", i, vetor_a[i]-48, i, vetor_b[i]-48, i, vetor_aa[i], i, vetor_bb[i]);
				}*/

				printf_s("\nsoma = ");
				for (int i = qntd_zeros; i < 6; i++)
				{
					printf_s("%d ", soma_final[i]);
				}

				break;
			}

			case 36:
			{
				struct vetor
				{
					float numero;
					int posicao;
				};
				//vetor vetor[10];
				float  vetor[10], menor, ordenado[10];
				int repetido, qntd = 0, jota;

				for (int i = 0; i < 10; i++)
				{
					printf_s("Digite o %d valor: ", i + 1);
					scanf_s("%f", &vetor[i]);
					//vetor[i].posicao = i;
				}

				menor = vetor[1];

				for (int i = 0; i < 10; i++)
				{
					menor = vetor[i];
					for (int j = i; j < 10; j++)
					{
						if (vetor[j] <= menor && vetor[j] != NULL)
						{
							ordenado[i] = vetor[j];
							menor = vetor[j];
							jota = j;
						}
						vetor[jota] = NULL;
					}
					printf_s("ordenado[%d] = %.2f\n", i, ordenado[i]);
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

int e_primo(int num) 
{
	int result = 0;

	for (int i = 2; i <= num; i++)
	{
		if (i == num)
		{
			result = 1;
			break;
		}
		if (num % i == 0)
		{
			break;
		}
	}
	return result;
}