#include <stdio.h>

double e(int x, int n)
{
    static double p=1, f=1;
    double r;

    if (n==0) return 1;

    r=e(x, n-1);
    p=p*x;
    f=f*n;

    return r+p/f;
}

double affE(int x, int n)
{
    static double s;

    if (n==0) return s;

    s=1+x*s/n;

    return affE(x, n-1);
}



int main()
{
    double r, l;
    r=e(2, 10);
    l=affE(2, 10);
    printf("%lf \n%lf", r, l);
    return 0;
}