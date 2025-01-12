#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s: strs) {
            vector<int> temp(26, 0);
            for (char ch: s) temp[ch-'a']++;
            string key;
            for (int i : temp) 
                key += to_string(i) + "#";
            mp[key].push_back(s);
        }
        vector<vector<string>> res;
        for (auto i: mp) {
            res.push_back(i.second);
        } return res;
    }
};
