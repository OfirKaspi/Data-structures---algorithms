#include <stdio.h>

#define N 12

int fib(int n)
{
    if (n<=1) return n;
    return fib(n-2)+fib(n-1);
}

int F[N+1];

int memoFib(int n)
{
    if (n<=1)
    {
        F[n]=n;
        return n;
    }

    if (F[n-2]==-1) F[n-2]=memoFib(n-2);
    if (F[n-1]==-1) F[n-1]=memoFib(n-1);

    return F[n-2]+F[n-1];
}

int main()
{
    int i, r, l;

    for (i=0; i<=N; i++)
    {
        F[i]=-1;
    }

    r=fib(N);
    l=memoFib(N);

    printf("%d \n%d", r, l);
    return 0;
}