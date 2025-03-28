#include <stdio.h>

int main() {
    int num, predecessor, successor;
    
    printf("Digite o numero: \n");
    scanf("%d", &num);
    
    predecessor = num - 1;
    successor = num + 1;
    
   printf("O antecessor de %d é %d e o sucessor é %d\n", num, predecessor, successor);
    
    return 0;
}