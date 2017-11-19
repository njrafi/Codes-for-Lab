#include <stdio.h>

double h = 0.0000001;


double f(double x)                              // The Equation
{
        return x*x + 2 * x + 2;
}

double ff(double x)                             // Integration of the Equation
{
        return x*x*x/3 + x*x + 2*x;
}

double simp(double a,double b)                  // Simpson's Rule Formula
{
        return (b-a)*(f(a) + 4 * f((a+b)/2) + f(b))/6;
}


int main()
{
        double a , b;
        int i;

        printf("The equation is x^2 + 2 * x - 2 \n\n");
        printf("Enter lower limit and upper limit\n\n\n");
        for(i = 1 ; ; i++)
        {

                printf("Observation %d:\n",i);
                printf("Lower Limit: ");
                if(scanf("%lf",&a)==EOF)
                        break;
                printf("Upper Limit: ");
                scanf("%lf",&b);

                printf("\nThe Estimated value: %.8lf\n" , simp(a,b));
                printf("The Actual value: %.8lf\n" ,ff(b)-ff(a));
                printf("Difference: %.8lf\n\n\n", fabs(simp(a,b)-ff(b) + ff(a)));
        }













        return 0;
}

