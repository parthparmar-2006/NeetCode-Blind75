#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), maxC=0, c=0, prev=0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            if (mp.find(s[i]) != mp.end() && mp[s[i]] >= prev) {
                prev = mp[s[i]] + 1; 
            }
            mp[s[i]] = i; 
            c = i - prev + 1; 
            maxC = max(maxC, c); 
        }
        return max(c, maxC);
    }
};
