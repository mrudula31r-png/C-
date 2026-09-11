// Find the second largest number
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "Array needs to have at least two elements." << endl;
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element (all elements might be equal)." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    return 0;
}
