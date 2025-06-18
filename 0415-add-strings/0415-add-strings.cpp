class Solution {
public:
string add(string num1, int p1, string num2, int p2, int carry){
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                string temp = string(1, carry+'0');
                return temp;
            }
            return "";
        }
        
        int n1 = (p1 >= 0 ? num1[p1] - '0' : 0);
        int n2 = (p2 >= 0 ? num2[p2] - '0' : 0);
        int csum = n1 + n2 + carry;
        int d = csum % 10;
        carry = csum / 10;
        
        string temp = string(1, d+'0');
        temp += add(num1, p1-1, num2, p2-1, carry);
        return temp;
    }
    string addStrings(string num1, string num2) {
        string ans = add(num1, num1.size()-1, num2, num2.size()-1, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    
};