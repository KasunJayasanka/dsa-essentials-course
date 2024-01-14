#include <iostream>
using namespace std;

void selection_sort(int arr[],int size){
    for(int pos=0;pos<size-1;pos++){
        
       // int current=arr[pos];
        int min_position=pos;
        
        for(int j=pos;j<size;j++){
            
            if(arr[j]<arr[min_position]){
                min_position=j;
            }
        }
        
        swap(arr[min_position],arr[pos]);
        
    }
}

int main() {
    
    int arr[]= {-3,-2,-4,-9,1,5,6,7,19,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,size);
    
    for(auto x:arr){
        cout << x << ",";
    }

    return 0;
}
