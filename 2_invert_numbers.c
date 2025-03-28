#include <stdio.h>

int main() {
    int a;
    int b;
    int aux;
    
    printf("Digite o valor de -a- \n");
    scanf("%d", &a);
    
    printf("Digite o valor de -b- \n");
    scanf("%d", &b);
    
    aux = a;
    a = b;
    b = aux;
    
    
    printf("O valor de -a- é: %d\n", a);
    printf("O valor de -b- é: %d\n", b);
    
    return 0;
}