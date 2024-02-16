#include <stdio.h>
int main()
{
    int a[20],n,i,key,pos=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    printf("enter key value");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
    if(key==a[i])
    {
        printf("key found at position=%d",i+1);
        pos++;
        break;
    }
    }
    if(pos==1)
    {
        printf("elements found");
    }
    else
    {
    printf("elements not found");
    }
}    
