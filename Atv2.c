#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    int zero = 0;

    printf("Digite seu número (INTEIRO E POSITIVO):");
    scanf("%d", &num);

    while(num >= 0) {
        printf("\n%d", num);
        num--;
    }
}