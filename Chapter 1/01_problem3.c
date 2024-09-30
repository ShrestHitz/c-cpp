#include <stdio.h>

int main(){
    float C, F;
    printf("Enter temperature in celcius: ");
    scanf("%f", &C);

    F = ((9.0/5.0)*C)+32;
    printf("The temperature in farenhiet is%f", F);
    scanf("%f", &F);

    return 0;
}