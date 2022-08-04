#include<stdio.h>
void sort(int* arr, int n)
{
    int t,i,j;
    for(i=0; i<=n; i++)
    {
        j=0;
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}
void check(int* arr, int n)
{
    int i=0;
    int j=0;
    int cnt=0;
    int tmp[n];
    for(int i=0;i<n; i++)
    {
     tmp[i]=arr[i];
    }
    sort(tmp,n);
    for(int i=0;i<n-1;i++)
    {
     for(int j=i+1;j<n-1;j++)
     {
       if(tmp[i]==tmp[j])
       {
          tmp[j]=0;
       }
     }
    }
    for(i=0;i<n;i++)if(tmp[i]!=0)cnt++;
    printf("%d\n",cnt);
    for(i=0;i<n;i++)
    {
        if(tmp[i]!=0)
        {
            printf("%d ",tmp[i]);
        }
    }
}
int n,i,p[100];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &p[i]);
    }
    check(p,n);
    return 0;
}
