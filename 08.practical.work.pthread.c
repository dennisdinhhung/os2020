#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *bgThread (void *param)
{
    //Fibonacci thread
    int n1=1, n2 = 1, n3;

    while (n3<=1000000)
    {
        if(n3!=0)
        printf ("The fibo sequence: %d\n", n3);
        
        n3 = n1 + n2;

        

        n1=n2;
        n2=n3;

    }

    return 0;


}

int main()
{
    pthread_t tid;
    pthread_create(&tid,NULL,bgThread,NULL);


    //Prime Thread
    int i=3, count, c;
    printf ("The prime sequence: 2\n");
    
    while (i <= 1000)
    {

        for (c=2; c<=i; c++)
        {
            if (i%c == 0)
                break;
        }

        if (c == i)
        {
            printf("The prime sequence: %d\n", i);
        }

        i++;

    }

    return 0;
}