#include<bits/stdc++.h>
using namespace std;

vector<int> optimized_bubble_sort(vector<int> v){
    // your code  goes here
    int n = v.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                std::swap(v[j], v[j + 1]);
                swapped = true;
            }
        }

        // If no swaps were made, the vay is already sorted
        if (!swapped) {
            break;
        }
    }

    return v;
}
