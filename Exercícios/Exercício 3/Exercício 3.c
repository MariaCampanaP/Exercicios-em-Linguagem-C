#include <stdio.h>
#include <stdlib.h>

int main(){

    char frase[100];
    char vogal[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    /* dentro do fgets � passado 3 par�metros, o nome da v�riavel,
    o tamanho dela e o stdin*/

    printf("Digite uma frase:");
    fgets(frase, 100, stdin);

    //Percorrer cada caractere da frase para verificar se ela � uma vogal
    for(int i = 0; frase[i] != '\0'; i++){
        //Verificar se � uma vogal
        for(int j = 0; j < 10; j++){
            if(frase[i] == vogal[j]){
            frase[i] = '*';
            }
        }
    }

    printf("Frase criptografada:%s", frase);

    return 0;
}
