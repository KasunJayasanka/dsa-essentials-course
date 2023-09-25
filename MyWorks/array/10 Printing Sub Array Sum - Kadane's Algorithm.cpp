#include <iostream>
using namespace std;

int subArraySum(int* a,int n){
    int largesum=0;
    int currsum=0;
    for(int x=0;x<n;x++){
        currsum+=a[x];
        if(currsum<0){
            currsum=0;
        }
        largesum=max(largesum,currsum);
    }
    return largesum;
}

int main() {
    int a[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    std::cout << "Largest Sum = " << subArraySum(a,n);

    return 0;
}
