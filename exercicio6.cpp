#include<iostream>

int main(){
    int ano;

    printf("digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 1){
        printf("o ano é bissexto\n" );
    }
    else {
       printf ("o ano não é bissexto \n");
    }

    return 0;
}
