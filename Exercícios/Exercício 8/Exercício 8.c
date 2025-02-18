#include <stdio.h>
#include <stdlib.h>

//Fun��o para preencher o array com o valor utilizando ponteiros

/* Int *arr -> Um ponteiro para o in�cio do array. Em C, um array
� passado para fun��es como um ponteiro para seu primeiro elemento,
ent�o arr aponta para o primeiro elemento do array.*/

void preencherArray(int *arr, int valor, int tamanho){

    for(int i = 0; i < tamanho; i++){
        //*(arr + 1) acessa o valor do i-�simo elemento do array e, = valor atribui o valor fornecido como argumento �quele elemento
        *(arr + i) = valor;
    }

}

int main(){

    int array[5]; //Definindo um array com 5 elementos
    int valor = 10; //Valor que ser� atribu�do a todos os elementos do array

    preencherArray(array, valor, 5); //Preenchendo com o valor 10

    //Exibindo o conte�do do array para verificar se os valores foram atribu�dos corretamente
    printf("Conteudo do array apos preenchimento:\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]); //Exibe o valor de cada elemento do array
    }

    return 0;

}
