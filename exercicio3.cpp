#include <iostream>

int main () {
    int num1;
    
    printf("digite um numero: ");
    scanf("%d", &num1);

    if (num1 % 3 == 0 && num1 % 5 == 0){
        printf("o numero é multiplo por 3 e 5\n");
    } 
        else {
        printf("o numero nao é multiplo por 3 e 5\n");
    }
    return 0;
}