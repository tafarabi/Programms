#include<bits/stdc++.h>
using namespace std;


int Partition(int ar[],int low,int high)
{
    int pivot=ar[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(ar[j]<=pivot)
        {
            i++;
            swap(ar[i],ar[j]);
        }
    }
    swap(ar[i+1],ar[high]);
    return(i+1);
}


void qsort(int ar[],int l,int h)
{
    if(l<h)
    {
        int p=Partition(ar,l,h);
        qsort(ar,l,p-1);
        qsort(ar,p+1,h);
    }
}

void print(int ar[],int s)
{
    for(int i=0;i<s;i++){

        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}



int main()
{
    int ar[]={23,11,45,23,13,34,243,7};
    int sz=sizeof(ar)/sizeof(ar[0]);
    qsort(ar,0,sz-1);
    print(ar,sz);
    return 0;
}
