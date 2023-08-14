#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    //insertion operator
    cout<<"he"<<endl;
    //integer data type
    int x,y;
    //extraction operator
    // cin>> x >> y;
    // cout<< x << " " << y << "\n";
    //There is difference between "\n" & "endl"
    //using std::endl in C++ will flush the output buffer and write the data to the output device immediately, while using \n will not flush the output buffer until it is necessary or manually triggered.
    //To flush, means to empty the buffer. Now, buffer is temporary storage area for storing data. Both endl and \n can be used to print newline character but there is minor difference between these two : In case of endl, buffer is cleared by usage of internal call to flush the buffer.

    //float type
    float f;
    f=1.34345645654565; //maximum 5 decimal point?
    float f2=1.5;
    //The precision of float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
    cout<<" a float type "<<f<<" "<<f2<<endl;

    double d=1.345345346456756756645645;
    cout<<"double data : "<<d<<endl;
    //why it sticks on 5 decimal values?

    char c='t';
    cout<<"character type: "<<c<<endl; //prints onle the first character

    string s= "then "; //s is small in letter
    string s2="do";
    s+=s2; //concat of strings
    cout<<"string type : "<<s<<endl;

    //file writing reading operation
    //this is done for in single file reading and writing
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);//after this line written console wont show. but rather ir will be written in out.txt
    string fs;
    // cin>>fs;
    // cout<<fs<<"\n"; //it inputs only first strings set until a whitespace
    getline(cin, fs);
    cout<<fs<<"\n";

    //to write in several file ofstream is used
    ofstream of;
    of.open("1.txt");
    of<<"ofstream11111111\n";
    of<<"eeeeeeeee\n";

    ofstream of2;
    of2.open("2.txt");
    of2<<"ofstream222222222\n"<<"ddddddddd\n";

    ////to read in several file ifstream is used
    ifstream ifs;
    ifs.open("3.txt");
    int x;
    double y;
    ifs>>x>>y;
    //printing in console
    cout<<x <<" "<<y<<endl;
} 