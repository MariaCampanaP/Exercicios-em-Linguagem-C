#include <stdio.h>
#include <stdlib.h>

//Função para preencher o array com o valor utilizando ponteiros

/* Int *arr -> Um ponteiro para o início do array. Em C, um array
é passado para funções como um ponteiro para seu primeiro elemento,
então arr aponta para o primeiro elemento do array.*/

void preencherArray(int *arr, int valor, int tamanho){

    for(int i = 0; i < tamanho; i++){
        //*(arr + 1) acessa o valor do i-ésimo elemento do array e, = valor atribui o valor fornecido como argumento àquele elemento
        *(arr + i) = valor;
    }

}

int main(){

    int array[5]; //Definindo um array com 5 elementos
    int valor = 10; //Valor que será atribuído a todos os elementos do array

    preencherArray(array, valor, 5); //Preenchendo com o valor 10

    //Exibindo o conteúdo do array para verificar se os valores foram atribuídos corretamente
    printf("Conteudo do array apos preenchimento:\n");

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]); //Exibe o valor de cada elemento do array
    }

    return 0;

}
