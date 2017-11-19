#include<stdio.h>
#include<math.h>


#define mxn 100

double x[100],y[100], tem , p;


void main()
{


        int i,n,j,k;
        printf("How many values to enter: ");
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
                printf("Enter the value of x%d: ",i);
                scanf("%lf", &x[i]);

                printf("Enter the value of f(x%d): ",i);
                scanf("%lf",&y[i]);
        }

        while(1)
        {
                printf("Enter the value of x for finding f(x): ");

                if(scanf("%lf",&p)==EOF)                // press ctrl + z to exit
                        break;
                double ans = 0;

                for(i=0;i<n;i++)
                {
                        tem = 1;
                        for(j=0;j<n;j++)
                                if(i!=j)
                                        tem *= ( p - x[j] ) / ( x[i]-x[j] ) ;
                        ans += y[i]*tem;
                }

                printf("f(%.lf) = %lf\n\n\n",p,ans);
        }
        return 0;
 }

