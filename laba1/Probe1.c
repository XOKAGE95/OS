#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

double Summa(double  A, int B, double C)
{
    double S = 0;
    for (int i = 1; i <= B; i++)
        S += sqrt(A)*C;
    return S;
}

int main()
{
    //printf("%-20s","Enter B, A, C\n");
    double A,C;
    unsigned int B;
    scanf("%u %lf %lf", &B, &A, &C);
    while (A < 0)
    	scanf("%lf", &A);
    printf("%lf", Summa(A, B, C));
}
