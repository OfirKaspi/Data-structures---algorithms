#include <stdio.h>

int power(int m, int n)
{
    if (n==0) return 1;

    return power(m, n-1)*m;
}

int affPower(int m, int n)
{
    if (n==0) return 1;
    if (n%2==0) return affPower(m*m, n/2);

    return m*affPower(m*m, (n-1)/2);
}

int main()
{
    int r=power(3, 5);
    int l=power(3, 5);
    printf("%d \n%d", r, l);
    return 0;
}