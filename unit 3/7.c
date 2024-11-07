#include <stdio.h>
int main()
{
    float height;
    printf("Enter your height in inches: ");
    scanf("%f", &height);
    printf("Your height in centimeters is %f.\n", height * 2.54);
    return 0;
}