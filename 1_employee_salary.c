#include <stdio.h>

int main() {
    int hours;
    int valueHourWorked;
    float salary;
    
    printf("Digite as horas que o funcionário trabalhou: \n");
    scanf("%d", &hours);
    printf("Digite o valor da hora de trabalho: \n");
    scanf("%d", &valueHourWorked);
    
    salary = hours * valueHourWorked;
    
    printf("O salário do funcionário é de: R$%0.2f ", salary);
    
    return 0;
}