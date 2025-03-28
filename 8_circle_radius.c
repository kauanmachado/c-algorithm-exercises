#include <stdio.h>

int main() {
    float pi, radius, area;
    float diameter;
    
    pi = 3.14;
    
    printf("Digite o diametro do circulo: \n");
    scanf("%f", &diameter);
    
    radius = diameter / 2;
    
    area = pi * (radius * radius);
    
    printf("O raio do circulo é: %0.1f, e a area é: %0.1f", radius, area);
    
    return 0;
    
}