#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int largestElement=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largestElement){
            largestElement=arr[i];
        }
    }
    return largestElement;
}
