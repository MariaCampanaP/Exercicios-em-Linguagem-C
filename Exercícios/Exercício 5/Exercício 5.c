#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{

    char nome[100];
    int idade;
    char sexo;
    char cpf[100];
    int anoNascDia;
    int anoNascMes;
    int anoNascAno;
    int setor;
    char cargo[31];
    float salario;
};

//A função Funcionario recebe um ponteiro para uma estrutura dados (*func)
void Funcionario(struct dados *func){

    printf("Digite o nome:\n");
    //A função usa fgets para ler a entrada do usuário (o nome) e armazená-la no campo nome da estrutura
    //O operador -> é usado para acessar e modificar os campos de uma estrutura quando trabalhamos com um ponteior para ela
    fgets(func->nome, 100, stdin);
    func->nome[strcspn(func->nome, "\n")] = '\0'; //Remover a quebra de linha

    printf("Digite a idade:\n");
    scanf("%d", &func->idade);

    printf("Digite o sexo (M/F):\n");
    scanf(" %c", &func->sexo);

    getchar(); //Limpar o buffer antes de usar fgets
    printf("Digite o CPF:\n");
    fgets(func->cpf, 100, stdin);
    func->cpf[strcspn(func->cpf, "\n")] = '\0'; //Remover a quebra de linha


    printf("Digite o ano de nascimento(dd/mm/aa):\n");
    scanf("%d/%d/%d", &func->anoNascDia, &func->anoNascMes, &func->anoNascAno);

    printf("Digite o setor (0 a 99):\n");
    scanf("%d", &func->setor);

    getchar(); //Limpar o buffer antes de usar fgets
    printf("Digite o cargo:\n");
    fgets(func->cargo, 31, stdin);
    func->cargo[strcspn(func->cargo, "\n")] = '\0'; //Remover a quebra de linha

    printf("Digite o salario\n");
    scanf("%f", &func->salario);

}

int main(){

    struct dados funcionario;

    Funcionario(&funcionario);

    printf("\nDados coletados:\n");
    printf("Nome:%s\n", funcionario.nome);
    printf("Idade:%d\n", funcionario.idade);
    printf("Sexo:%c\n", funcionario.sexo);
    printf("CPF:%s\n", funcionario.cpf);
    printf("Data de Nascimento:%d/%d/%d\n", funcionario.anoNascDia, funcionario.anoNascMes, funcionario.anoNascAno);
    printf("Setor:%d\n", funcionario.setor);
    printf("Cargo:%s\n", funcionario.cargo);
    printf("Salario:%.2f\n", funcionario.salario);

    return 0;
}
