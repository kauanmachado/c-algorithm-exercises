#include <stdio.h>

int main() {
    float initialKilometer, finalKilometer, fuelConsumed;

    printf("Digite a kilometragem inicial: \n");
    scanf("%d", &initialKilometer);
    
    printf("Digite a kilometragem final: \n");
    scanf("%d", &finalKilometer);
    
    while(finalKilometer < initialKilometer){
        printf("A kilometragem inicial não pode ser maior que a final, digite novamente! \n");
        scanf("%d", &finalKilometer);
    }
    
    printf("Digite o volume de combustivel consumido: \n");
    scanf("%d", &fuelConsumed);
    
    while(fuelConsumed <= 0){
        printf("O volume de combustivel deve ser maior que 0: \n");
        scanf("%d", &fuelConsumed);
    }
    
    float kilometer = finalKilometer - initialKilometer;
    float media = kilometer / fuelConsumed;
    
    printf("A média de consumo de combustivel é de: %0.2f KM / L", media);
    
    return 0;
}