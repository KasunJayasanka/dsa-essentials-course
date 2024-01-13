#include <iostream>
using namespace std;

void insertion_sort(int arr[],int size){

    for(int i=1;i<=size-1;i++){

        int current = arr[i];

        int prev = i - 1;
        
        while(prev>=0 and arr[prev]>current){
            arr[prev + 1]=arr[prev];
            prev--;
        }
        
        arr[prev+1]=current;
    }
}

int main() {
    
    int arr[]= {-3,-2,-4,-9,1,5,6,7,19,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    
    for(auto x:arr){
        cout << x << ",";
    }

    return 0;
}
