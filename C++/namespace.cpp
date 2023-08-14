#include<iostream>

//using namespace std;
//namespace std{
    //here cout, cin, endl etc. are declared.
//}
//meaning there is a namespace which is a separate scope creator and in that cout cin all are declared.
//if we dont use this then we have write std::cout or std::cin for using the i/p o/p stream.

//we can write our own namespace like this
namespace kmrl{
    int x=10;
    //normally x var is already declared globally which amkes error but namespace create separate scope so this isnt a problem anymore.
    // we can also declare function 
    int func(int a,int b){
        return a+b;
    }//local scope function
}

//global var
int x=5,y;
int func(int a,int b){
        return a+b;
    }//global function

int main(){
    std::cout<<"this is global x: "<<x<<std::endl;//accesses the global x
    //but if using namespace std was written we did not have to write std every time
    std::cout<<"this is a x from kmrl: "<<kmrl::x<<std::endl;
    //to access funtion globally we have to write like this
    int g=func(3,3);
    int l=kmrl::func(5,5);
    cout<<

}