#include <stdio.h>


int main()
{
        int i,x,y=1000000000,lim;
        srand(time(NULL));

        printf("Enter Lower Bound: ");
        scanf("%d",&x);

        while(1)
        {
                if(y<x)
                        printf("Upper bound can't be less than lower bound.\n");

                printf("Enter Upper Bound: ");
                scanf("%d",&y);
                if(y>=x)
                        break;
        }

        printf("How many numbers you want to generate: ");
        scanf("%d",&lim);

        printf("\nHere are %d numbers between %d and %d:\n\n",lim,x,y);

        for(i=0;i<lim;i++)
                printf("%d ",x + rand() % (y - x + 1) ) ;

        printf("\n");
        return 0;
}
