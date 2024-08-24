#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
reload:
    scanf("%d", &b);
    if (a != 0) {
        printf("%d\n", b);
        a = a - 1;
        goto reload;
    }
    return 0;
}