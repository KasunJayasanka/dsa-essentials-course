#include <iostream>

using namespace std;


void printingSubArrays(int *a,int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=i;k<=j;k++){
                    cout<<a[k]<<",";
            }
            //cout << "(" << i << "," << j << ")";
            cout <<endl;
        }

        //cout <<endl;
    }
// Time Complexity - O(N^3)
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int sizeArr=sizeof(arr)/sizeof(int);

    printingSubArrays(arr,sizeArr);

    cout << "Hello world!" << endl;
    return 0;
}
