#include<stdio.h>
int main(void)
{
    //整数的溢出
    short x = 32767;
    printf("x = %d\n", x);
    x++;
    printf("x = %d\n", x);
    x++;
    printf("x = %d\n", x);

    //浮点数的上溢
    float y = 3.4E38;
    printf("y = %e\n", y);
    y = y * 100.0f;
    printf("y = %e\n", y);

    //浮点数的下溢
    y = 1.234E-38;
    printf("y = %e\n", y);
    y = y / 10.0f;
    printf("y = %e\n", y);

    return 0;
}