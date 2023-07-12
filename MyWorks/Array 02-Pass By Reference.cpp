#include <iostream>

using namespace std;

void printArr(int *a,int sizeArr){

    a[0]=15;

    for(int i=0;i<sizeArr;i++){
        cout<<a[i]<<endl;
    }

    cout << "Inside printArr" << endl;

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int sizeArr=sizeof(arr)/sizeof(int);

    printArr(arr,sizeArr);

    for(int i=0;i<sizeArr;i++){
        cout<<arr[i]<<endl;
    }

    cout << "Inside Main" << endl;

    return 0;
}
