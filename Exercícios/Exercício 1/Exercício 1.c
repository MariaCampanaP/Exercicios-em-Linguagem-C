#include <stdio.h>
#include <stdlib.h>

int main(){

    //Declaro as variáveis necessárias para cada candidato
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int cand4 = 0;

    //Declaro as variáveis necessárias para o voto nulo e o branco
    int votoNulo = 0;
    int votoBranco = 0;

    //Declaro a variável necessária para a contagem de todos os votos inseridos
    int totalVotos = 0;

    //Declaro a variável para armazenar a entrada do usuário
    /*Foi inicializada em -1 para garantir o funcionamento
    do loop while corretamente*/
    int votos = -1;

    while(votos != 0){
        printf("Digite o numero do voto(0 para encerrar:\n");
        printf("1 - Primeiro Candidato\n");
        printf("2 - Segundo Candidato\n");
        printf("3 - Terceiro Candidato\n");
        printf("4 - Quarto Candidato\n");
        printf("5 - Voto em Branco\n");
        printf("6 - Voto Nulo\n");
        scanf("%d", &votos);

        switch (votos){
        case 1:
            printf("Voce escolher o Candidato 1.\n");
            cand1++;
            totalVotos++;
            break;
        case 2:
            printf("Voce escolher o Candidato 2.\n");
            cand2++;
            totalVotos++;
            break;
        case 3:
            printf("Voce escolher o Candidato 3.\n");
            cand3++;
            totalVotos++;
            break;
        case 4:
            printf("Voce escolher o Candidato 4.\n");
            cand4++;
            totalVotos++;
            break;
        case 5:
            printf("Voce escolher Voto Nulo.\n");
            votoNulo++;
            totalVotos++;
            break;
        case 6:
            printf("Voce escolher Voto em Branco.\n");
            votoBranco++;
            totalVotos++;
            break;
        default:
            if(votos != 0){
                printf("Opcao invalida. Tente novamente.\n");
            }
            break;
        }
    }

    printf("\nO total de votos e:\n");
    printf("1 Candidato:%d\n", cand1);
    printf("2 Candidato:%d\n", cand2);
    printf("3 Candidato:%d\n", cand3);
    printf("4 Candidado:%d\n", cand4);

    /*Porcentagem -> A porcentagem de votos nulos sobre o total de
    votos e a porcentagem de votos em branco sobre o total de votos

    A fórmula geral para calcular a porcentagem de um valor em relação
    ao total é: porcentagem = (parte / total) * 100;
    -> A parte será o número de votos nulos ou votos em brancos
    -> O total será a soma de todos os votos válidos, nulos e brancos, ou seja,
    o valor armazenado na variável totalVotos.

    */

    if(totalVotos > 0){

    float porcentagemNulo = (votoNulo / (float)totalVotos) * 100;
    float porcentagemBranco = (votoBranco / (float)totalVotos) * 100;

    printf("Votos em Nulo:%d (%.2f%%)\n", votoNulo, porcentagemNulo);
    printf("Votos em Branco:%d (%.2f%%)\n", votoBranco, porcentagemBranco);

    }else{
        printf("Nenhum voto foi registrado.\n");
    }

    return 0;

}
