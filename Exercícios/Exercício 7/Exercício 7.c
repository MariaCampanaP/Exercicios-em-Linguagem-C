#include <stdio.h>
#include <stdlib.h>

/* Declar��o da fun��o dobrarValores, recebe dois par�metros: dois ponteiros para inteiros (int *A e int *B). O uso
de ponteiros significa que estamos passando o endere�o das vari�veis A e B para a fun��o, permitindo que a fun��o
altere diretamente seus valore*/

void dobrarValores(int *A, int *B){

    *A = *A * 2; //Dobrar o valor de A
    *B = *B * 2; //Dobrar o valor de B
}

int main(){

    int A, B; //Declarar as vari�veis A e B

    printf("Digite o valor de A:"); //Exibir mensagem para o usu�rio
    scanf("%d", &A); //Ler o valor de A fornecido pelo usu�rio

    printf("Digite o valor de B:"); //Exibir mensagem para o usu�rio
    scanf("%d", &B); //Ler o valor de B fornecido pelo usu�rio

    dobrarValores(&A, &B);

    printf("Valor de A (dobrado):%d\n", A); //Mostrar o valor de A ap�s ser dobrado
    printf("Valor de B (dobrado):%d\n", B); //Mostrar o valor de B ap�s ser dobrado
    printf("Soma dos valores dobrados:%d\n", A + B); //Mostrar a soma dos valores dobrados de A e B

    return 0;

}
