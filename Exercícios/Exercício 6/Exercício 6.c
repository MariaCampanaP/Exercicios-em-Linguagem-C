#include <stdio.h>
#include <stdlib.h>

int main(){

    int identificador;
    char nome[100];
    char curso[100];
    float nota1;
    float nota2;

    int i = 0;

    for(i = 0; i < 3; i++){
        printf("Digite o identificador do aluno:");
        scanf("%d", &identificador);
        getchar(); //Limpar buffer antes de ler strings

        printf("Digite o nome do aluno:");

        /* fgets (nome, sizeof(nome), stdin)

        nome -> onde a string ser� armazenada;

        sizeof(nome) -> � o tamanho m�ximo da string que pode ser lida. Como nome foi declarado como
        char nome[100];, sizeof(nome) retorna 100. Isso evita estouro de buffer, garantindo que o usu�rio n�o
        digite mais caracteres do que o espa�o dispon�vel.

        stdin -> indica que estamos lendo a entrada padr�o, ou seja, o que o
        usu�rio digita no teclado */

        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; //Remove a quebra de linha

        printf("Digite o curso do aluno:");
        fgets(curso, sizeof(curso), stdin);
        curso[strcspn(curso, "\n")] = '\0';

        printf("Digite a primeira nota:");
        scanf("%f", &nota1);

        printf("Digite a segunda nota:");
        scanf("%f", &nota2);
        getchar(); //Limpar buffer antes do pr�ximo loop

        //Criar o nome do arquivo com base no nome do aluno
        //Cria um array de caracteres (char), que ser� usado para armazenar o nome do arquivo
        //O tamanho 150 � escolhido para garantir que haja espa�o suficiente para armazenar o nome do aluno e a extens�o .txt
        char nomeArquivo[150];

        //Sprintf -> funciona como printf, mas em vez de exibir o texto na tela, ele armazena o resultado em uma string
        //"%s.txt" -> insere o nome do aluno %s e adiciona o .txt ao final
        //O resultado � salvo dentro de nomeArquivo
        sprintf(nomeArquivo, "%s.txt", nome);

        //Abrir o arquivo para escrita
        FILE *file = fopen(nomeArquivo, "w");
        if(file == NULL){
            printf("Erro ao criar o arquivo!\n");
            return 1; //Encerra o programa em caso de erro
        }

        //Escrever os dados no arquivo
        fprintf(file, "Identificador:%d\n", identificador);
        fprintf(file, "Nome:%s\n", nome);
        fprintf(file, "Curso:%s\n", curso);
        fprintf(file, "Nota 1:%.2f\n", nota1);
        fprintf(file, "Nota 2:%.2f\n", nota2);

        //Fechar o arquivo
        fclose(file);

        printf("Dados do aluno salvos em %s\n", nomeArquivo);
    }

}
