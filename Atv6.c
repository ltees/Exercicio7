#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int opcao;
    double total = 0.0;

    printf("Bem-vindo á compra de frutas!\n");

    do {
        printf("\nMenu de frutas disponíveis:\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MAÇA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("0 => Finalizar a compra\n");

        printf("Digite o número da fruta que deseja comprar ( ou 0 para finalizar): ");
        scanf("%d", &opcao);

        if(opcao == 0) {
            break;
        } else if (opcao >= 1 && opcao <= 3) {
            int quantidade;
            printf("Digite a quantidade de frutas que deseja comprar: ");
            scanf("%d", &quantidade);

            double preco_unitario;
            switch (opcao) {
                case 1:
                    preco_unitario = 5.0;
                    printf("Você comprou %d ABACAXI(s).\n", quantidade);
                    break;
                case 2:
                    preco_unitario = 1.0;
                    printf("Você comprou %d MAÇA(s).\n", quantidade);
                    break;
                case 3:
                    preco_unitario = 4.0;
                    printf("Você comprou %d PERA(s).\n", quantidade);
                    break;
            }
            total += (quantidade * preco_unitario);
        } else {
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (1);

    printf("Total da compra> R$%.2lf\n", total);
    printf("Obrigado por comprar conosco!\n");

    return 0;
}