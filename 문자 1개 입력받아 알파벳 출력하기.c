#include <stdio.h>
int main()
{
    char n, t = 'a';
    scanf("%c", &n);
    do
    {
        printf("%c ", t);
        t++;
    } while (t < n + 1);
}