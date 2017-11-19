#include <stdio.h>


double f(double x)              // The main equation
{
        return x*x + 2 * x - 2;
}

double df(double x)             // Derivative of the equation
{
        return 2*x + 2 ;
}


int main()
{
        int t = 0,i;
        printf("The equation is x^2 + 2 * x - 2 = 0\n\n");

        printf("Iteration numbers: ");
        scanf("%d", &t);                // The iteration number
                                        // more iteration = more accuracy

        double x = 0;
        for(i = 0 ; i < t ; i++)
        {

                printf("%lf\n",x);
                x = x - f(x)/df(x);     // The Newton Raphson Method equation
        }


        printf("The root is  %lf\n" , x);       // Found root

}
