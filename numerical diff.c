#include <stdio.h>

double h = 0.0000001;

double f(double x)                              // The equation
{
        return x*x + 2 * x - 2;
}

double df(double x)                             // The derivative of the equation
{
        return 2*x + 2;
}


double calc(double x)                           // equation to calculate diff. value
{
        return (f(x+h)-f(x))/h;
}

int main()
{
        double x;
        int i;

        printf("The equation is x^2 + 2 * x - 2 \n\n");
        printf("Enter the points at which the differentiated value will be obtained\n\n\n");
        for(i = 1 ; ; i++)
        {

                printf("Point %d: ",i);
                if(scanf("%lf",&x)==EOF)
                        break;

                printf("\nThe Estimated value: %.8lf\n" , calc(x));
                printf("The Actual value: %.8lf\n" ,df(x));
                printf("Difference: %.8lf\n\n\n", fabs(calc(x)-df(x)));
        }













        return 0;
}

