#include <bits/stdc++.h>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int maxSubArraySum = 0;  // Initialize with a very small value

    for (int i = 0; i < A.size(); i++) {
        for (int j = i; j < A.size(); j++) {
            int subArraySum = 0;
            for (int k = i; k <= j; k++) {  // Corrected to include the subarray from i to j
                subArraySum += A[k];
            }
            maxSubArraySum = max(maxSubArraySum, subArraySum);
        }
    }
    return maxSubArraySum;
}
