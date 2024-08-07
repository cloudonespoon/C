#include <stdio.h>
int main()
{
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%u\n", a + b);
    printf("%u\n", a - b);
    printf("%u\n", a * b);
    printf("%u\n", a / b);
    printf("%u\n", a % b);
    printf("%0.2f\n", (float)a / b);
    return 0;
}