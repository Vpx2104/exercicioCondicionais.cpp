#include <iostream>

int main() {
    float x, y;

    printf("Insira as coordenadas (x, y) do ponto no plano cartesiano: ");
    scanf("%f %f", &x, &y);

     if (x > 0 && y > 0) {
        printf("O ponto está localizado no primeiro quadrante.\n");
    } else if (x < 0 && y > 0) {
        printf("O ponto está localizado no segundo quadrante.\n");
    } else if (x < 0 && y < 0) {
        printf("O ponto está localizado no terceiro quadrante.\n");
    } else if (x > 0 && y < 0) {
        printf("O ponto está localizado no quarto quadrante.\n");
    } else if (x == 0 && y == 0) {
        printf("O ponto está localizado na origem.\n");
    } else if (x == 0) {
        printf("O ponto está localizado sobre o eixo y.\n");
    } else if (y == 0) {
        printf("O ponto está localizado sobre o eixo x.\n");
    }

    return 0;
}