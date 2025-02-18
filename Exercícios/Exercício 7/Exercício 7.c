#include <stdio.h>
#include <stdlib.h>

/* Declarção da função dobrarValores, recebe dois parâmetros: dois ponteiros para inteiros (int *A e int *B). O uso
de ponteiros significa que estamos passando o endereço das variáveis A e B para a função, permitindo que a função
altere diretamente seus valore*/

void dobrarValores(int *A, int *B){

    *A = *A * 2; //Dobrar o valor de A
    *B = *B * 2; //Dobrar o valor de B
}

int main(){

    int A, B; //Declarar as variáveis A e B

    printf("Digite o valor de A:"); //Exibir mensagem para o usuário
    scanf("%d", &A); //Ler o valor de A fornecido pelo usuário

    printf("Digite o valor de B:"); //Exibir mensagem para o usuário
    scanf("%d", &B); //Ler o valor de B fornecido pelo usuário

    dobrarValores(&A, &B);

    printf("Valor de A (dobrado):%d\n", A); //Mostrar o valor de A após ser dobrado
    printf("Valor de B (dobrado):%d\n", B); //Mostrar o valor de B após ser dobrado
    printf("Soma dos valores dobrados:%d\n", A + B); //Mostrar a soma dos valores dobrados de A e B

    return 0;

}
