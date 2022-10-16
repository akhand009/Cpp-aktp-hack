
#include<stdio.h>
int lru(int n,int a[50],int nf)
{
    int q[20],k=0,c=0,r,i,j,t,c1,c2[200],b[200];
    q[k]=a[k];
    printf("%d",a[0]);
    printf("\t%d\n",q[k]);
    c++;
    k++;
    for(i=1;i<n-1;i++)
    {
        
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
                for(j=1;j<=k;j++)
                printf("\t%d",q[j]);
                
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
                for(r=1;r<=nf;r++)
                {
                    if(c2[r]==b[1])
                        q[r]=a[i];
                    printf("\t\t\t%d",q[r]);
                }
             
        }
    }
}
printf("Number of page faults count will be : %d\n",c);
}
/****************************************************************/
void main()
{
    int a[40],i,nf,n;
    printf("enter no of page:");
    scanf("%d",&n);
    printf("Enter the reference string:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter no of frames:");
    scanf("%d",&nf);
    
    lru(n,a,nf);
}

