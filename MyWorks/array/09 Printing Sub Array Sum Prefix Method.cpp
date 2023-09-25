// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int subArraySumPreFix(int *a,int n){
    
    int prefix[100];
    prefix[0]=a[0];
    
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    
    int maxSubArraySum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subArraySum=i>0?prefix[j]-prefix[i-1]:prefix[j];
            maxSubArraySum=max(maxSubArraySum,subArraySum);
        }
    }
    return maxSubArraySum;
}
int main() {
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int sizeArr=sizeof(arr)/sizeof(int);

    cout << "Largest Sub Array Sum : " << subArraySumPreFix(arr,sizeArr);

    return 0;
}
