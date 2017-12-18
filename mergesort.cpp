 #include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int l,int m,int h){
    int i,j,k;
    int n1=m-l+1;
    int n2=h-m;
    int L[n1], R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];

        i=0;
        j=0;
        k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){

            arr[k]=L[i];
            i++;
        }
        else{

            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;

    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;

    }

}

 void mergesort(int arr[], int l,int h){
    if(l<h){
        int m=(l+h)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,h);
        Merge(arr,l,m,h);


    }
}


void print(int arr[],int s)
{
    for(int i=0;i<s;i++)
        printf("%d ",arr[i]);
        printf("\n");



}
int main()
{
    int i,n;
    cout<<"Enter the size of array:";
    cin>>n;
    int ar[n];
    int s= sizeof(ar)/sizeof(ar[0]);
cout<<"Enter the data: \n";
    for(i=0;i<n;i++)
        cin>>ar[i];
    print(ar,s);
    mergesort(ar,0,s-1);
    print(ar,s);
}
