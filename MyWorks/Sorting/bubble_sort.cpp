using namespace std;

void bubble_sort(int arr[],int size){
    for(int times=1;times<size-1;times++){
        for(int j=0;j<=size-1-times;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    
    int arr[]= {-3,-2,-4,-9,1,5,6,7,19,-5};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    
    for(auto x:arr){
        cout << x << ",";
    }

    return 0;
}
