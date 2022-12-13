#include<stdio.h>

int main()
{
    int a,c,f[100],g;
    long int b,d[10000],e[10000];
    
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        scanf("%ld %d",&b,&c);
        for (long int j=1;j<=b;j++)
        {
            d[j]=1;
            e[j]=j;
        }
        for (int j=1;j<=c;j++)
        {
            scanf("%d",&f[j]);
        }
        for (int j=1;j<=b;j++)
        {
            for (int k=1;k<=c;k++)
            {
                if(e[j]%f[k]==0)
                {
                    d[j]+=1;
                }
            }
        }
        g=0;
        for (int j=1;j<=b;j++)
        {
            if(d[j]%2==0)
            {
                e[j]=0;    
            }
            g+=e[j];
        }
        printf("Case #%d:",i);
        if (g!=0)
        {
            for (int j=1;j<=b;j++)
            {
                if(e[j]!=0)
                {
                    printf(" %d",e[j]);
                }
            }    
        }    
        else
        {
            printf(" No room left!");
        }
        printf("\n");
    }
}