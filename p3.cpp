// Reversing a number
#include <iostream>
using namespace std;
int main() {
    int n = 2013;
    int reversed = 0;
    
    while (n != 0) {
        int last = n % 10;
        reversed = reversed * 10 + last;
        n = n / 10;
    }
    cout << reversed;
};