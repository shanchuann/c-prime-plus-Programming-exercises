#include<stdio.h>
int main()
{
    float water_molecule_mass = 3.0e-23;
    float water_mass = 950;
    float user_mass;
    printf("Enter the mass of water in quarts: ");
    scanf("%f", &user_mass);
    printf("The number of water molecules in %f quarts of water is %e.\n", user_mass, user_mass * water_mass / water_molecule_mass);
    return 0;
}