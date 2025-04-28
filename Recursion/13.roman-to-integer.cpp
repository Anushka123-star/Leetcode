/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int sum=0, p=s.size()-1;
        while(p!=-1) {
            switch (s[p])
            {
            case 'I':
                sum+=1;
                p--;
                break;
            case 'V':
                sum+=5;
                p--;
                break;
            case 'X':
                sum+=10;
                p--;
                break;
            case 'L':
                sum+=50;
                p--;
                break;
            case 'C':
                sum+=100;
                p--;
                break;
            case 'D':
                sum+=500;
                p--;
                break;
            case 'M':
                sum+=1000;
                p--;
                break;
            
            }
        }
        return sum;
    }
};
// @lc code=end

