#include<iostream>
#include<algorithm>
using namespace std;




int main() {
    int arr[] = {10,4,9,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++ ) {
        for(int j=0; j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            
            }
        }
    }
     for(int i = 0; i < n; i++ ) {
         cout << arr[i] << " " ;
     }
}
