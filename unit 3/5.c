#include<stdio.h>
#define Y_to_S 3.165e7
int main()
{
    float user_year;
    printf("Enter the number of light years: ");
    scanf("%f", &user_year);
    printf("%f light years = %f astronomical units.\n", user_year, user_year * Y_to_S);
    return 0;
}