#include <stdio.h>
#define mxn 1002

double f(double X,double Y)
{
        return X*sqrt(Y);               // the function f(x,y)
}

double error(double X,double val)       // Calculation error for a particular x
{
        double tem  = (X*X + 4);
        tem *= tem;
        tem /= 16;

        return fabs(val-tem);
}

double x[mxn], y[mxn];                  // for storing value for each x and y


int main()
{
        double l,r,h,k1,k2,k3,k4,ini,n;
        int i;


        printf("Runge Kutta method to solve dy/dx = x * sqrt(y)\n\n");
        printf("This equation has an exact solution:\ny(x) = 1/16 * (x^2 + 4)^2 \n\n\n\n");

        printf("Enter lower limit: ");
        scanf("%lf", &l);

        printf("Enter upper limit: ");
        scanf("%lf", &r);

        printf("Enter number of steps: ");
        scanf("%lf", &n);

        printf("Enter initial value: ");
        scanf("%lf" , &ini);

        x[0] = l;
        y[0] = ini;
        h = (r-l)/n;

        for(i = 0 ; i < n ; i++)
        {
                k1 = h * f( x[i] , y[i] );
                k2 = h * f( x[i] + h/2 , y[i] + k1/2);
                k3 = h * f( x[i] + h/2 , y[i] + k2/2);
                k4 = h * f( x[i] + h, y[i] + k3);

                double yy = (k1 + 2 * k2 + 2 * k3 + k4)/6;

                x[i+1] = x[i] + h;
                y[i+1] = y[i] + yy;

        }

        printf("\n\n\nx\t\ty\t\tabsolute error\n\n");

        for(i = 0 ; i <= n ; i++)
                printf("%.6lf\t%.6lf\t%.6lf\n",x[i],y[i],error(x[i],y[i]));


        return 0;

}
