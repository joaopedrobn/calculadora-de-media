#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%lf", &num3);

    double media = (num1 + num2 + num3) / 3;

    printf("A media dos tres numeros e: %.2lf\n", media);

    return 0;
}
