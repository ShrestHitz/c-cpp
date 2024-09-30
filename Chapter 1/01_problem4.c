#include <stdio.h>

int main(){
    float p;
    int r, t;
    printf("Enter the value of p: ");
    scanf("%f", &p);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    printf("Enter the value of t: ");
    scanf("%d", &t);

    printf("The value of simple interest is%f", (p*r*t)/100);
    return 0;
}