#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    typedef long long ll;
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        if (x%10 == 0)
            return false;
       
        ll reverse = 0;
        ll clone = x;
        while(x) {
            int digit = x%10;
            reverse = reverse*10+digit;
            x = x/10;
        }
        if (reverse == clone)
            return true;
        
        return false;
    }

public:
    int findMaxConsecutiveNums(vector<int>& nums) {
        int maxNum = -2000;
        int cnt = 0;
        int maxCnt = -1;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxNum) {
                maxNum = nums[i];
            }
            if (nums[i] == maxNum)
                cnt++;
            else
                cnt = 0;
            
            if (cnt > maxCnt)
                maxCnt = cnt;
        }
        return maxCnt;
        // return maxNum;
    }
};