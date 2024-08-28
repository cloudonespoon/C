#include <stdio.h>
int main()
{
    int n;
    rewind:
    scanf("%d", &n);
    if (n < 0 && n>100) goto rewind;
    while (n != 0) {
        printf("%d\n", n);
        n--;
    }
}