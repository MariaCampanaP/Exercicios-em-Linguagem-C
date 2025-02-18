#include <stdio.h>
#include <stdlib.h>

struct ibge{

    float salario;
    int idade;
    char sexo;
    int numeroFilhos;

};

int main(){

    //Definindo o máximo de pessoas que podem ser cadastradas
    struct ibge pessoas[5];

    //Variável para controlar o loop
    int contador = 0;

    float somaIdadeMulheres = 0;
    int numeroMulheres = 0;

    //Enquanto a idade for diferente de 0, continue coletando os dados
    while(1){
        //Leitura dos dados
        printf("Digite o salario da pessoa %d:", contador + 1);
        scanf("%f", &pessoas[contador].salario);

        printf("Digite a idade da pessoa %d:", contador + 1);
        scanf("%d", &pessoas[contador].idade);

        //Se a idade for 0, sai do loop
        if(pessoas[contador].idade == 0){
            break;
        }

        printf("Digite o sexo da pessoa %d (M/F):", contador + 1);
        scanf(" %c", &pessoas[contador].sexo);

        printf("Digite o numero de filhos da pessoa %d:", contador + 1);
        scanf("%d", &pessoas[contador].numeroFilhos);

        //Aumenta o contador para a próxima pessoa
        contador++;

    }

    /* O laço for serve para percorrer todos os registros de pessoas
    que foram armazenados na estrutura pessoas[]*/
    for(int i = 0; i < contador; i++){
        /* O if nesse caso verifica duas coisas se pessoas[i].salario < 300
        e se a pessoa é do sexo feminino*/
        if(pessoas[i].salario < 300 && (pessoas[i].sexo == 'F'|| pessoas[i].sexo == 'f')){
            //Se a condição do if for verdadeira, a idade dessa pessoa será acumulada na variável
            somaIdadeMulheres += pessoas[i].idade;//Acumula a idade
            numeroMulheres++;//Conta quantas mulheres
        }
    }

    //Esse if verifica se o número de mulheres que atendem ao critério do salario inferior a R$300 é maior que 0
    if(numeroMulheres > 0){
        //Se if for verdadeira, então o programa calcula a média da idade dessas mulheres
        float mediaIdadeMulheres = somaIdadeMulheres / numeroMulheres;
        printf("A media de idade das mulheres com salario inferior a R$ 300,00 e:%.2f\n", mediaIdadeMulheres);
    }else {
        printf("Nao ha mulheres com salario inferior a R$ 300,00.\n");
    }

    float somaSalario = 0;

    /*O objetivo desse loop é percorrer todas as pessoas registradas no vetor
    pessoas[] e somar o salário de cada uma delas*/
    for(int i = 0; i < contador; i++){
        //é o processo de somar o salário de cada pessoa à variável somaSalario
        somaSalario += pessoas[i].salario;
    }

    //Agora, calculamos a média de salários dividindo somaSalario pelo número total de pessoas registradas (contador)
    float mediaSalario = somaSalario / contador;
    printf("A media de salario da populacao e:%.2f\n", mediaSalario);

    int somaFilhos = 0;

    //Ele vai percorrer todos os elementos do vetor pessoas[], que contém as informações das pessoas registradas
    for(int i = 0; i < contador; i++){
        //A cada iteração, o número de filhos da pessoa é adicionado à soma total de filhos
        somaFilhos += pessoas[i].numeroFilhos;
    }

    //Dividimos o total de filhos pelo número de pessoas para calcular a média do número de filhos
    float mediaFilhos = somaFilhos / (float)contador;
    printf("A media do numero de filhos e:%.2f\n", mediaFilhos);

    float maiorSalario = pessoas[0].salario;
    int menorIdade = pessoas[0].idade;

    //O loop vai continuar até que i seja menor que contador, que é o número total de pessoas que foram registradas
    for(int i = 1; i < contador; i++){
        //Verificar se o salario da pessoa atual é maior que o maiorSalario já encontrado
        if(pessoas[i].salario > maiorSalario){
                //Se a condição for verdadeira atualizamos maior salario para o salario da pessoa atual
                maiorSalario = pessoas[i].salario;
        }

        //A condição if checa se a idade da pessoa atual é menor que a menorIdade já resgistrada
        if(pessoas[i].idade < menorIdade){
            //Se essa condição for verdadeira, significa que encontramos uma idade menor, então atualizamos menorIdade para a idade da pessoa atual
            menorIdade = pessoas[i].idade;
        }
    }

    printf("O maior salario e:%.2f\n", maiorSalario);
    printf("A menor idade e:%d\n", menorIdade);


    return 0;

}
