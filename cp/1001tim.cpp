#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    double a [3270000];//a[128*1024] ?????????
    int i=0;
    unsigned long long n;
    while((scanf("%llu",&n)) != EOF){
        a[i]=(double)sqrt(n*1.0);
        i++;
    }
    for (; --i >=0 ; )
    {
        cout<<setprecision(4)<<fixed<<a[i]<<endl;
    }
    
}