#include <stdio.h>

int main() {
    int num, num2, squareSum;
    float result;
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num);
    
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    
    while(num2 <= 0){
        printf("O segundo número não pode ser 0 ou menor, digite novamente!\n");
        scanf("%d", &num2);
    }
    
    squareSum = (num * num) + (num2 * num2);
    result = (float) num / num2;
    
    printf("A soma dos quadrados dos números é: %d\n", squareSum);
    printf("O resultado da divisão dos dois valores é: %.1f", result);
    
    return 0;
    

}