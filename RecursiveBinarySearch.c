#include <stdio.h>
int binarysearch(int a[],int s, int e, int d);
int main()
{
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int f=binarysearch(a,0,9,5);
    printf("%d",f);
    return 0;
}
int binarysearch(int a[],int s, int e,int d)
{
    int mid;
    if (s<=e)
    {
        mid = (s+e)/2;
        if(d == a[mid])
            return mid;
        else if (d<a[mid]){
            return binarysearch(a, s, mid-1, d);}
        else if (d>a[mid]){
            return binarysearch(a, mid+1, e, d);
        }
    }
    return -1;
}