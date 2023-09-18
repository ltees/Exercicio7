#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma = 0;
    int numero = 2;

    printf("A soma dos 50 primeiros números pares é: ");

    for(int i = 0; i < 50; i++) {
        soma += numero;
        numero += 2;
    }
    printf("%d", numero);

}