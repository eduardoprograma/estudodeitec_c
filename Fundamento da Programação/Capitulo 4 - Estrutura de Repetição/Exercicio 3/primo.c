/*Programa Calculo de Numeros Primos*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	/*Declaração de variáveis*/
	int N, P = 0, NP = 0, CN = 0, R;
	/*Entrada de dados*/
	printf("Programa Para identificar números Primos.\n\n");
	printf("Digite um número: ");
	scanf("%d", &N);
	/*Bloco de comando*/
    while(N != -1){
        if(2 <= N && N <= 21){
            while(CN < N){
                CN++;
                printf("\n%d\n\n", CN); //Fiz para poder conferir como o contador estava iniciando
                R = N % CN;
                if(R == 0){
                    P++;
                    printf("\n%dP\n", P);
                }
                else if(R == 1){
                    NP++;
                    printf("\n%d\n", NP);
                }
            }
            /*Saída dos dados*/
            if(P <= 2 ){
                printf("O numero e primo.\n\n");
            }
            else{
                printf("O numero nao e primo.\n\n");
            }
        }
        else{
            printf("Digite um numero entre 92 e 1478.\n\n");
        }
        CN = 0;
        P = 0;
        NP = 0;
        printf("Digite um número: ");
	    scanf("%d", &N);
    }
    /*Fim do código*/
    system("pause");
    return 0;
}