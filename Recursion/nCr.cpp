#include <stdio.h>

int nCr(int n, int r)
{
    if (n==r||r==0) return 1;

    return nCr(n-1, r-1)+nCr(n-1, r);
}

int main()
{
    int r;
    r=nCr(5, 2);

    printf("%d \n", r);
    return 0;
}