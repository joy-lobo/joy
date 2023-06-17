#include<stdio.h>

int m,n,p,q[],i,j,k=0,x=0;

int main()
{
    printf("Input the range:\n");
    scanf("%d%d",&m,&n);

    for(i=m; i<=n; i++)
    {
        q[i]=0;
        steps(i);
        printf("\nNumber = %d , steps = %d",i,q[i]);
    }
    for(i=m; i<=n; i++)
    {
        if(q[i]>=k)
        {
            k=q[i];
            x=i;
        }
    }
    printf("\nBetween '%d' and '%d', the number",m,n);


    for(i=m; i<=n; i++)
    {
        if(q[i]==k)
        {
            printf (" %d,",i);
        }
    }
    printf(" has the highest life cycle of %d steps.",k);
}
int steps(int n)
{
    if (n%2==0 && n!=1)
    {
        p=n/2;
        n=p;
        q[i]++;
        steps(n);
    }
    else if (n%2!=0 && n!=1)
    {
        p=(3*n)+1;
        n=p;
        q[i]++;
        steps(n);
    }
    return q;
}
