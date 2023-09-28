#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int n=a.size();
    k=k%n;
    
    vector<int> output;
    
    for(int i=n-k;i<n;i++){
        output.push_back(a[i]);
    }
    
    for(int i=0;i<n-k;i++){
        output.push_back(a[i]);
    }
    return output;
}
