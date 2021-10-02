
#include<stdio.h>
int lru(int n,int a[50],int nf)
{
    int q[20],k=0,c=0,r,i,j,t,c1,c2[20],b[20];
    q[k]=a[k];
    printf("\n");
    printf("pages\t     LRU ALGORITHM for the      \n");
    printf("%d",a[0]);
    printf("\t%d\n",q[k]);
    c++;
    k++;
    for(i=1;i<n;i++)
    {
        printf("%d",a[i]);
        c1=0;
        for(j=0;j<nf;j++)
        {
            if(a[i]!=q[j])
                c1++;
        }
        if(c1==nf)
        {
            c++;
            if(k<nf)
            {
                q[k]=a[i];
                k++;
                for(j=0;j<k;j++)
                printf("\t%d",q[j]);
                printf("\n");
            }
            else
            {
                for(r=0;r<nf;r++)
                {
                    c2[r]=0;
                    for(j=i-1;j<n;j--)
                    {
                        if(q[r]!=a[j])
                            c2[r]++;
                        else

                    }
                }
                for(r=0;r<nf;r++)
                    b[r]=c2[r];
                for(r=0;r<nf;r++)
                {
                    for(j=r;j<nf;j++)
                    {
                        if(b[r]<b[j])
                        {
                            
                            t=b[r];
                            b[r]=b[j];
                            b[j]=t;
                            break;
                        }
                    }
                }
                for(r=0;r<nf;r++)
                {
                    if(c2[r]==b[0])
                        q[r]=a[i];
                    printf("\t\t\t\t%d",q[r]);
                }
                printf("\n");
        }
    }
}
printf("\nNumber of page faults count will be : %d\n",c);
}
/****************************************************************/
void main()
{
    int a[50],i,nf,n;
    printf("Enter no of page:");
    scanf("%d",&n);
    printf("enter the reference string:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter no of frames:");
    scanf("%d",&nf);
    lru(n,a,nf);
}

