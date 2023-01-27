#include <cstdio>

int main()
{
    int n,i,j,m,k,a[7],t=0;
    for(i=0; i<7; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<7; i++)
    {
        for(j=0; j<7; j++)
        {
            if(a[i]>a[j])
            {
                k=a[i];
                a[i]=a[j];
            a[j]=k;
            }
        }
    }
    for(i=6; i>=0; i--)
    {
        if(a[i]%2==1)
        {
            m=a[i];
            break;
        }
    }
    for(i=0; i<7; i++)
    {
        if(a[i]%2==0)
        {
            a[i]=0;
        }
    }
    for(i=0; i<7; i++)
    {
        t=t+a[i];
    }
    if(t==0)
    {
        t=-1;
    }

    printf("%d\n%d",t,m);
    return 0;
}
