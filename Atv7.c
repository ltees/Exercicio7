#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");


    int totalHabitantes = 0;
    int totalMulheresCastanhas = 0;
    int idade, idadeMin = 18, idadeMax = 35;
    char sexo, olhos, cabelos;
    double salario;
    
    printf("Informe os dados dos habitantes. Para finalizar, digite uma idade igual a -1.\n");
    
    while (1) {
        printf("\nSexo (m/f): ");
        scanf(" %c", &sexo);
        
        if (sexo == 'm' || sexo == 'f') {
            printf("Cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);
            
            if (olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p') {
                printf("Cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &cabelos);
                
                if (cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r') {
                    printf("Idade (entre 10 e 100): ");
                    scanf("%d", &idade);
                    
                    if (idade == -1) {
                        break; // Finalizar a entrada de dados
                    }
                    
                    if (idade >= 10 && idade <= 100) {
                        printf("Salário: ");
                        scanf("%lf", &salario);
                        
                        if (salario >= 0) {
                            totalHabitantes++;
                            if (sexo == 'f' && idade >= idadeMin && idade <= idadeMax && olhos == 'c' && cabelos == 'c') {
                                totalMulheresCastanhas++;
                            }
                        } else {
                            printf("Salário não pode ser negativo. Tente novamente.\n");
                        }
                    } else {
                        printf("Idade fora do intervalo permitido. Tente novamente.\n");
                    }
                } else {
                    printf("Opção de cor de cabelos inválida. Tente novamente.\n");
                }
            } else {
                printf("Opção de cor de olhos inválida. Tente novamente.\n");
            }
        } else {
            printf("Opção de sexo inválida. Tente novamente.\n");
        }
    }
    
    if (totalHabitantes > 0) {
        double porcentagemMulheresCastanhas = ((double)totalMulheresCastanhas / totalHabitantes) * 100;
        printf("\nPorcentagem de mulheres com olhos e cabelos castanhos entre 18 e 35 anos: %.2lf%%\n", porcentagemMulheresCastanhas);
    } else {
        printf("\nNenhum habitante foi registrado.\n");
    }
    
    return 0;
}