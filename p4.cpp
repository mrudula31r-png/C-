#include <iostream>
using namespace std;
int main() {
    int a =10;
    int b = 20;
    a++;  //11
    b+=a;   //31
    a+=3;    //14
        cout<<b-- << endl; //printed 31 then decremented to 30
        cout<<a-- << endl; //14 , 13
    b+=4;
        cout<<b-- << endl; //34 , 33
};