#include<stdio.h>
int main()
{
    float cup;
    printf("Enter the number of cups: ");
    scanf("%f", &cup);
    printf("%f cups = %f pints = %f ounces = %f tablespoons = %f teaspoons.\n", cup, cup / 2, cup * 8, cup * 8 * 2, cup * 8 * 2 * 3);
    return 0;
}