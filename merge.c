#include<stdio.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
void main()
{
    int a[30],n,i;
    printf("Enter no of elements");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);//mergesort function in use
    printf("\nSorted array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid); //left recursion of elements
        mergesort(a,mid+1,j);//right recursion of elements
        merge(a,i,mid,mid+1,j); //merging of two sorted sub-arrays
    }
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];//used for merging
    int i,j,k;
    i=i1;//list1
    j=i2;//list2
    k=0;
    while(i<=j1 && j<=j2)//to compare the elements
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=j1)//for entering the elements into list
        temp[k++]=a[i++];
    while(j<=j2)//for entering elements into list
        temp[k++]=a[j++];
    for(i=i1,j=0;i<=j2;i++,j++)//elements back into a[] from temp[]
        a[i]=temp[j];
}
