#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int arr[]= {-3,-2,-4,-9,1,5,6,7,19,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    
    for(auto x:arr){
        cout << x << " ";
    }

    return 0;
}
