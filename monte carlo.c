#include <stdio.h>
#include <stdlib.h>
#define pi acos(-1)

int main()
{

        int i,t;
        double x,y;                             // the coordinates of the random points
        while(1)
        {
                printf("Number of trials you want to use (input 0 for exit):  ");
                scanf("%d",&t);

                if(!t)
                        break;

                int cnt = 0;                    // number of points inside the circle
                srand(time(NULL));
                for(i = 0 ; i < t ; i++)
                {
                        x = rand()*1.0/RAND_MAX;
                        y = rand()*1.0/RAND_MAX;
                        if(x*x+y*y<=1)
                                cnt++;
                }
                printf("\n\nTrials used: %d\n\n",t);
                printf("Original value of pi  = %.10lf\n",pi);
                printf("Estimated value of pi = %.10lf\n\n",cnt*4.0/t);
                printf("Difference between the two values = %.10lf\n\n\n\n",fabs(pi * 1.0 - (cnt*4.0/t )));
        }
}
