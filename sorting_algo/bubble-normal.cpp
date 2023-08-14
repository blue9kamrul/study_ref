#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {   
        int flag=0;
        for (int j = 0; j < n-i-1; j++)
        {   
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=1;
            }
        }
        if(flag==0) break;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

int main(){
    int a[]={4,2,6,2,0,5,8};
    int n= sizeof(a)/sizeof(a[0]);

    bubbleSort(a,n);

    return 0;
}