#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i=0, j=n-1;
        while (i<j) {
            while (i<j && !isalnum(s[i])) i++;
            while (i<j && !isalnum(s[j])) j--;
            if (i<j && tolower(s[i])!=tolower(s[j])) return false;
            i++; j--;
        } return true;
    }
};
