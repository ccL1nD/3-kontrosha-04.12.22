#include <stdio.h>
#include <hfcal.h>

void display_calories(float weight, float distance, float coeff)
{
    printf("Ves: %3.2f funta\n", weight);
    printf("Rasstoyanie: %3.2f mili\n", distance);
    printf("Sgenno calorii: %4.2f cal\n", coeff*weight*distance);
}