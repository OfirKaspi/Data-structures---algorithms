#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *P, *newP;
    int i;

    P=(int*)malloc(5*sizeof(int));
    P[0]=3;P[1]=1;P[2]=2;P[3]=7;P[4]=5;

    newP=(int*)malloc(10*sizeof(int));

    for(i=0;i<5;i++)
        newP[i]=P[i];

    free(P);
    P=newP;
    newP=NULL;

    for(i=0;i<10;i++)
        printf("%d \n", P[i]);

    return 0;
}