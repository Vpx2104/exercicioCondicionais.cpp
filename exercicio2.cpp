#include <iostream>

int main() {
    int num1; 

    printf("digite o numero: ");
    scanf("%d", &num1);

     if (num1 <0) {
        printf("o numero digitado é negativo.\n");
    }
    else {
        printf("o numero digitado é positivo\n");
    }
    return 0;
}