#include <stdio.h>

int main() {
    float kilometers, meters, centimeters;
    
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * 1000;
    centimeters = meters * 100;
    printf("\n   Distance Conversion    \n");
    printf("Kilometers: %.2f km\n", kilometers);
    printf("Meters:  %.2f m\n", meters);
    printf("Centimeters: %.2f cm\n", centimeters);

    return 0;
}
