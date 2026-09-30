#include <stdio.h>

int main()
{
    int n, remainder;
    long long binary = 0, place = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        remainder = n % 2;

        binary = binary + remainder * place;

        place = place * 10;

        n = n / 2;
    }

    printf("%lld", binary);

    return 0;
}