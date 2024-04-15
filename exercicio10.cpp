#include <iostream>

int main() {
    float s;
    float r;
    float saldo;

    printf("Digite a quantia que deseja retirar: ");
    scanf("%f", &r);

      if (s >= r) {
        printf("Você pode fazer a retirada.\n");
    } else {
        printf("Saldo insuficiente. Seu saldo atual é de %.2f reais.\n", saldo);
    }

    return 0;
}
