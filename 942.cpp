// https://leetcode.com/problems/di-string-match/
// 942. DI String Match

class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> output;
        int n = s.length();
        output.resize(n+1);
        int i = 0, d = n;
        for(int in = 0; in < n; in++){
            if(s[in] == 'I'){
                output[in] = i++;
            }
            else if(s[in] == 'D'){
                output[in] = d--;
            }
        }
        output[n] = d;
        return output;
    }
};
