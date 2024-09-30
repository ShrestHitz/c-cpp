#include <stdio.h>

int main(){
    int r, h;

    printf("Enter radius of the cylinder: ");
    scanf("%d", &r);

    printf("Enter height of the cylinder: ");
    scanf("%d", &h);
    
    printf("The volume of the cylinder is%f", 3.14*r*r*h);
    return 0;
}