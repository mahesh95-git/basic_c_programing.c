#include <stdio.h>
#include <conio.h>
void sum(int a, int b)
{
    printf("%d", a + b);
}
void sub(int a, int b)
{
    printf("%d", a - b);
}
void multi(int a, int b)
{
    printf("%d", a * b);
}
void divi(int a, int b)
{
    float divi;
    printf("%f", divi = a / b);
}
void rem(int a, int b)
{
    float rem;
    printf("%f", rem = a % b);
}
int main()
{
    void (*ptr[10])(int, int) = {sum, sub, multi, divi, rem};
    int a, b, choice;
    printf("program to display arithmetic operations using function pointer\n");
    printf("+=0\n-=1\n*=2\n/=3\nremender=4\n");
    printf("enter your choice:");
    scanf("%d", &choice);
    printf("enter tow number:");
    scanf("%d%d", &a, &b);
    (*ptr[choice])(a, b);
}
