#include<stdio.h>
int main ()
{
    int a[100],t[100],dim,k=0,i;
    printf ("\n enter any dimention:");
    scanf ("%d",&dim);
    for (i=0;i<=dim-1;i++)
    {
        printf ("\n enter any element for a[%d]",i);
        scanf ("%d",&a[i]);
    }
   
    for (i=0;i<=dim-1;i++)
    {
        if (a[i] !=0)
        {
             t[k]=a[i];
             k++;
             
        }
       
    }
    for (i=0;i<=k-1;i++)
    {
printf ("\n non zero element t[i]=%d",i,t[i]);
    }
        
}