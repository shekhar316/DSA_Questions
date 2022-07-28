class Solution {
public:
    char shift(char x, int i){
        return (char)(x + i);
    }
    string replaceDigits(string s) {
        int len = s.length();
        for(int i = 1; i < len; i = i+2){
            s[i] = shift(s[i-1], (int)(s[i] - '0'));
        }
        return s;
    }
};
