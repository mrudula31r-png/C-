// Shifting zeros to right
#include <iostream>
using namespace std;
int main(){
    int arr[]={0,8,0,7,13};
    int j = 0;
    for(int i=0; i<=4; i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<=4){
        arr[j]=0;
        j++;
     }
    for (int i=0;i<=4;i++){
        cout << arr[i] << " ";
    }
};
