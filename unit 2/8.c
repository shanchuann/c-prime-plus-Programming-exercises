#include<stdio.h>
void one_three(void);
void two(void);
int main()
{
    printf("starting now:\n");
    one_three();
    printf("\n");
    two();
    printf("\n");
    printf("three\n");
    printf("done!");
    return 0;
}
void one_three(void)
{
    printf("one");
}
void two(void)
{
    printf("two");
}