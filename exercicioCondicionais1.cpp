#include <iostream>

int main() {
    int num1; 

    printf("digite o numero: ");
    scanf("%d", &num1);

     if (num1 %2 == 0) {
        printf("o numero digitado é par.\n");
    }
    else {
        printf("o numero digitado é impar\n");
    }
    return 0;
}