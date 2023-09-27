#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
   bool isNeg = true;
   int intLargest = INT_MIN;
   
   for(int x:A){
       
        if(x>0){
            isNeg=false;
        }
        
        intLargest=max(x,intLargest);
    }
    
    if(isNeg){
        return intLargest;
    }
    
    int cs=0;
    int ans=0;
    
    for(int x:A){
        cs+=x;
        if(cs<0){
           cs=0; 
        }
        ans=max(cs,ans);
    }
    
    return ans;
   
}
