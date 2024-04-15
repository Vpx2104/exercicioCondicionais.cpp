#include <iostream>

int main() {
    int leads;
        printf("Digite o número de leads recebidos hoje: ");
    scanf("%d", &leads);

    if (leads <= 5) {
        printf("Quantidade de leads: Baixa\n");
    }
     else if (leads >= 6 && leads <= 10) {
        printf("Quantidade de leads: Esperada\n");
    } 
    else {
        printf("Quantidade de leads: Alta\n");
    }

    return 0;
}