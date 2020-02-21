#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

double Summa(double S)
{
    S = pow(S, 0.25);
    return S;
}

int main()
{
    //printf ("Enter S: ");
    double S;
    scanf("%lf", &S);
    printf ("%lf", Summa(S));
}
