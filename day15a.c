#include <stdio.h>

int main()
{
    int n;
    long long factorial = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%lld", factorial);

    return 0;
}