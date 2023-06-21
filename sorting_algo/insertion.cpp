#include<iostream>
#include<utility>

using namespace std;

void insertionSort(int a[], int n){
    int i,j,item;
    for ( i = 1; i < n; i++)
    {
        item=a[i];
        j=i-1;
        while (j>=0 && a[j]>item)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=item;
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

	insertionSort(a,n);

	cout<<"sorter arrays is: "<<endl;

	display(a,n);
}