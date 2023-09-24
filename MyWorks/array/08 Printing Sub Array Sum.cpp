// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int subArraySum(int *a,int n){
    int maxSubArraySum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int subArraySum=0;
            for(int k=j;k<n;k++){
                subArraySum+=a[k];
            }
            maxSubArraySum=max(maxSubArraySum,subArraySum);
        }
    }
    return maxSubArraySum;
}
int main() {
    int arr[]={10,20,30,40,50,60,-1,-2,-3};
    int sizeArr=sizeof(arr)/sizeof(int);

    cout << "Largest Sub Array Sum : " << subArraySum(arr,sizeArr);

    return 0;
}
