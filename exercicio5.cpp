#include <iostream>

int main() {
    float numero1, numero2;
    char operacao;

    printf("Insira o primeiro número: ");
    scanf("%f", &numero1);
    printf("Insira o segundo número: ");
    scanf("%f", &numero2);
    printf("Insira a operação (+, -, *, /): ");
    scanf(" %c", &operacao); 

    
    float resultado;
    if (operacao == '+') {
        resultado = numero1 + numero2;
    } else if (operacao == '-') {
        resultado = numero1 - numero2;
    } else if (operacao == '*') {
        resultado = numero1 * numero2;
    } else if (operacao == '/') {
        if (numero2 != 0) {
            resultado = numero1 / numero2;
        } else {
            printf("Erro: Divisão por zero.\n");
            return 1; 
        }
    } else {
        printf("Erro: Operação inválida.\n");
        return 1; 
    }

    printf("O resultado da operação é: %.2f\n", resultado);

    return 0;
}