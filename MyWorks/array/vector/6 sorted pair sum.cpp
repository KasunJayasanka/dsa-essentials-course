#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int n=arr.size();
    int s=0;
    int e=n-1;
    int leftIdx,rightIdx;
    int diff=INT_MAX;
    
    while(s<e){
        int cs=arr[s]+arr[e];
        
        if(abs(cs-x)<diff){
            leftIdx=s;
            rightIdx=e;
            diff=abs(cs-x);
        }
        
        if(cs>x){
            e--;
        }else{
            s++;
        }
    }
    
    return {arr[leftIdx],arr[rightIdx]};
}
