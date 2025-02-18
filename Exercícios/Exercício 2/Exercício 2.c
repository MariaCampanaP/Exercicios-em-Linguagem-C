#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][4];
    int i = 0;
    int j = 0;
    int somaVendedor = 0;
    int vendaCadasemana = 0;
    int vendasMes = 0;


    printf("Digite a quantidade de vendas de cada vendedor:");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    //Calcular e exibir o total de vendas de cada vendedor
    for(i = 0; i < 3; i++){
            //Reseta a soma para o próximo vendedor
            somaVendedor = 0;
        for(j = 0; j < 4; j++){
            somaVendedor += matriz[i][j];
        }
        printf("Total de vendas do vendedor %d:%d\n", i + 1, somaVendedor);
        vendasMes += somaVendedor; //Adiciona as vendas do vendedor ao total
    }

    /*O j vem antes do i dessa vez pq queremos calcular a soma das vendas
    de todos para uma semana específica, então o loop percorre as semanas
    primeiro e dps percorre os vendedores, somando as vendas de todos os vendedores
    para aquela semana específica*/

    for(j = 0; j < 4; j++){
        vendaCadasemana = 0;
        for(i = 0; i < 3; i++){
            vendaCadasemana += matriz[i][j];
        }
        printf("Total de vendas de cada semana %d:%d\n", j + 1, vendaCadasemana);
    }

    printf("Total de vendas do mes:%d\n", vendasMes);

    return 0;
}

