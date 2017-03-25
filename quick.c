#include <stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);

void main()
{
    int a[50],n,i;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);//sorting the elements as supposed in quicksort function
    printf("\narray after sorting:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);//display after sorting
     }
}

void quicksort(int a[],int l,int u)
{
    int j;
    if(l<u)//if low is less than up
    {
        j=partition(a,l,u);
        quicksort(a,l,j-1);
        quicksort(a,j+1,u);
    }
}

int partition(int a[],int l,int u)
{
    int p,i,j,temp;
    p=a[l];// taking the first element as pivot by default
    i=l;
    j=u+1;

    do
    {
        do{
            i++;

        }while(a[i]<p&&i<=u);//comparing i and j with pivot

        do{
            j--;
        }while(p<a[j]);

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);//then finally to interchange the elements by required order

    a[l]=a[j];
    a[j]=p;

    return(j);
}
