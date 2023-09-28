#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    bool isFound=false;
    int x;
    for(x=0;x<A.size();x++){
        if(A[x]==Val){
            isFound=true;
            break;
        }
    }
    
    if(isFound){
        return A[x];
    }else if(A[x]<A[0]){
        return -1;
    }else{
        return (Val-1);
    }
}
