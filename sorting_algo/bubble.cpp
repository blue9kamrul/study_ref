#include<iostream>
#include<utility>

using namespace std;

void bubbleSort(int a[],int n){
    int i,j;
    bool isSwap = false;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                isSwap = true;
            }
        } 
        if(isSwap==false){
            break;
        } 
    }   
}

void display(int a[],int n){
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}	
}

int main(){
    int a[]={45,78,12,90,76,42,35};
	int n = sizeof(a)/sizeof(a[0]);

    bubbleSort(a,n);
    cout<<"sorted array is: "<<endl;

    display(a,n);
}