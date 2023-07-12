#include <iostream>

using namespace std;

int binarySearch(int *a,int arraySize,int key){
    int startIndex=0;
    int endIndex=arraySize-1;

    while(startIndex<=endIndex){
        int mid=(startIndex+endIndex)/2;

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>=key){
            endIndex=mid-1;
        }
        else{
            startIndex=mid+1;
        }
    }

    return -1;

}

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};

    int arraySize=sizeof(arr)/sizeof(int);

    int key;

    cout << "Binary Search" << endl;

    cout << endl << "Enter Key ";

    cin >> key;

    cout << endl;

    int index=binarySearch(arr,arraySize,key);

    if(index!=-1){
        cout << "Key " << key << " found at index " << index <<endl;
    }
    else{
        cout << "Index not found!"<<endl;
    }

    return 0;
}
