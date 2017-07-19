#include <stdio.h>
void prime()
{
    int n, i, flag = 0;

    printf("Enter a positive integer: /n");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("/n%d is a prime number.",n);
    else
        printf("/n%d is not a prime number.",n);
    
 // return 0;
}
