#include <stdio.h>

int main() {
    int celsius;
    int fahrenheit;
    
    
    printf("Digite os graus em Fahrenheit: \n");
    scanf("%d", &fahrenheit);
    
    celsius = ( (5*(fahrenheit-32)) / 9 );
    
    printf("A temperatura em Celsius é: %d\n", celsius);
    
    return 0;
}