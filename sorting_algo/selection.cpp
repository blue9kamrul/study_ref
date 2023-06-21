#include<iostream>
#include<utility>

using namespace std;

void selectionSort(int a[], int n){
	int i,j,min;
	for ( i = 0; i < n-1; i++)
	{ 
		min=i;
	for ( j = i+1; j < n; j++)
		{
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(min!=i){
			swap(a[min],a[i]);
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

	selectionSort(a,n);

	cout<<"sorter arrays is: "<<endl;

	display(a,n);
}