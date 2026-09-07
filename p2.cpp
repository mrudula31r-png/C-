// Counting the zeros in the given number
#include<iostream>
using namespace std;
int main(){
    int n = 2010;
    int count = 0;
    while(n!=0){
        int last=n%10;
        if(last==0){
            count++;
        }
        n=n/10;
    }
    cout << count;
};