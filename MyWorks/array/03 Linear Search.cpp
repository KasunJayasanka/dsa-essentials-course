#include <iostream>

using namespace std;

int linear_search(int arr[],int n,int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
    //Time Complexity = O(N) ; N=Number of elements in the array
}

int main()
{
    int arr[]={5,6,7,8,9};
    int sizeArr=sizeof(arr)/sizeof(int);

    int key;
    cin>>key;

    int index=linear_search(arr,sizeArr,key);

    if(index!=-1){
        cout<<key<<" is present at index "<<index<<endl;
    }
    else{
        cout<<key<<" is not found"<<endl;
    }

    return 0;
}
