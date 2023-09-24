#include <iostream>

using namespace std;

void reverseArray(int * a,int n){

    int s=0;
    int e=n-1;

    while(s<e){
        swap(a[s],a[e]);
        s+=1;
        e-=1;
    }
// Time Complexity = O(N) , N=Number of elements in the array
}


int main()
{
    int a[]={1,2,3,4,5,6,7,8};
    int n =sizeof(a)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout << endl;

    reverseArray(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout << endl;
    return 0;
}
