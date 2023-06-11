#include<iostream>

using namespace std;

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9};

    int x=9;

    int low=0;
    int high=9;
 int mid=(low+high)/2;
    while(low<=high){
       

        if(a[mid]==x) return mid;
        else if(a[mid]<x) low=mid+1;
        else if(a[mid]>x) high=mid-1;
        else return -1;
    }
    //cout<<a[mid];


}
