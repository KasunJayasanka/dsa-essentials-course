#include <iostream>

using namespace std;

void printingPairs(int *a,int n){

    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            cout << i << " " << j << endl;

        }

        cout << endl ;
    }
}

void printingAllPairs(int *a,int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            cout << i << " " << j << endl;

        }

        cout << endl ;
    }
}

int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(a)/sizeof(int);

    printingPairs(a,n);

    cout << " -------------------------- "<<endl<<endl;

    printingAllPairs(a,n);

    return 0;
}
