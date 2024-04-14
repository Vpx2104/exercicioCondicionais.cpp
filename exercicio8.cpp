#include <iostream>

int main (){
    float p,a,imc;
   

    printf ("coloque seu peso em kg: ");
    scanf("%f", &p);
    printf ("coloque sua altura em metros: ");
     scanf("%f", &a);

    imc  = p/(a*a);
    printf("seu imc é: .%2f\n", imc);

    if(imc < 18,5 ) {
        printf("Categoria: Abaixo do peso \n");

    } else if (imc < 25) {
        printf("Categoria: Peso normal");    
    }

    else if (imc < 30) {
        printf("Categoria: Sobrepeso");
    }

    else {
        printf ("categoria: obeso");
    }
    return 0;
}



