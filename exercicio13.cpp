#include <iostream>

int main() {
    float nota_atual, nota_recuperacao, presenca, nota_final;

    printf("Digite a nota atual do aluno: ");
    scanf("%f", &nota_atual);

    printf("Digite a nota da recuperação do aluno: ");
    scanf("%f", &nota_recuperacao);

    printf("Digite a prenseça do aluno: ");
    scanf("%f", &presenca);

    if (nota_atual < 7 && nota_atual >= 5) {
        nota_final = nota_atual + nota_recuperacao;
        if (presenca >= 75 && nota_final >= 10) {
            printf("Aprovado\n");
            printf("Nota final: %.2f\n", nota_final);
            printf("Presença: %.2f%%\n", presenca);
        } else {
            printf("Reprovado\n");
            printf("Nota final: %.2f\n", nota_final);
            printf("Presença: %.2f%%\n", presenca);
        }
    } else{
        printf("Aluno não precisa de recuperação, Nota atual: %.2f\n", nota_atual);
    }
}