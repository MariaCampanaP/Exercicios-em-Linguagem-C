#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho1;
    int tamanho2;

    //Solicita o tamanho do primeiro array
    printf("Digite o tamanho do primeiro array:");
    scanf("%d", &tamanho1);

    //Solicita o tamanho do segundo array
    printf("Digite o tamanho do segundo array:");
    scanf("%d", &tamanho2);

    //Aloca memória para o primeiro array
    int *array1 = (int *) malloc (tamanho1 * sizeof(int));

    //Aloca memória para o segundo array
    int *array2 = (int *) malloc (tamanho2 * sizeof(int));

    //Preenche o primeiro array
    printf("Digite os elementos do primeiro array:\n");
    for(int i = 0; i < tamanho1; i++){
        printf("Elemento %d:", i + 1);
        scanf("%d", &array1[i]);
    }

    //Preenche o segundo array
    printf("Digite os elementos do segundo array:\n");
    for(int i = 0; i < tamanho2; i++){
        printf("Elemento %d:", i + 1);
        scanf("%d", &array2[i]);
    }

    //O For é usado para percorrer os arrays e preencher cada elementos com o valor inserido pelo usuário

    //Verifica se os tamanhos dos arrays são iguais
    if(tamanho1 != tamanho2){
        printf("Os arrays nao tem o mesmo tamanho!\n");
        return 1; //Encerra o programa se os tamanhos forem diferentes
    }

    //Aloca memória para o terceiro array (para armazenar a soma)
    int *array3 = (int *) malloc (tamanho1 * sizeof(int));

    //Soma os elementos correspondentes dos dois arrays
    //Usamos um for para somar os elementos correspondentes dos dois arrays e armazenar o resultado no terceiro
    for(int i = 0; i < tamanho1; i++){
        array3[i] = array1[i] + array2[i];
    }

    //Exibe a soma dos arrays
    printf("Resultado das soma dos arrays:\n");
    //O for percorre o array resultante (array 3) e imprime os elementos
    for(int i = 0; i < tamanho1; i++){
        printf("Elemento %d:%d\n", i + 1, array3[i]);
    }

    //Libera a memória alocada
    free(array1);
    free(array2);
    free(array3);

    return 0;
}
