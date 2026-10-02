#include <stdio.h>

int main()
{
    long long n, complement = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;

        place = place * 10;
        n = n / 10;
    }

    printf("%lld", complement);

    return 0;
}