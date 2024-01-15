#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b){
    return a<b;
}

int main() {
    
    int arr[]= {-3,-2,-4,-9,1,5,6,7,19,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    
    reverse(arr,arr+size); //dsecnding
    sort(arr,arr+size,compare); //ascending using comparator
    sort(arr,arr+size,greater<int>()); //dsecnding
    
    for(auto x:arr){
        cout << x << " ";
    }

    return 0;
}
