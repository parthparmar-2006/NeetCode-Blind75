#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN;
        int left=0, right=heights.size()-1;
        while (left<=right) {
            maxi = max((right-left)*min(heights[left], heights[right]), maxi);
            if (heights[left]<heights[right]) left++;
            else right--;
        } return maxi;
    }
};
