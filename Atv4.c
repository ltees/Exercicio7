#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int contador = 0;
    int num = 1;
    
    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");
    while(contador < 5) {
        if(num % 3 == 0) {
            printf("%d\n", num);
            contador++;
        }
        num++;
    }
}