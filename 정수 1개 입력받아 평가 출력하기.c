#include <stdio.h>
int main()
{
    unsigned int a;
    scanf("%d", &a);
    if (a >= 90) printf("A");
    else if (a >= 70) printf("B");
    else if (a >= 40) printf("C");
    else if (a >= 0) printf("D");
    return 0;
}