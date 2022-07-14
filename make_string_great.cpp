/* Given a string s of lower and upper case English letters.
*
* A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:
*
* 0 <= i <= s.length - 2
* s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
* To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.
*
* Return the string after making it good. The answer is guaranteed to be unique under the given constraints.
*
* Notice that an empty string is also good.
*/
class Solution {
public:
    string makeGood(string s) {
        if(s.length() == 1) return s;
        
        string temp = "";
        int i = 0;
        
        while(i <= s.length()-1 && s.length() >= 1){
            if(s[i]+32 == s[i+1] || s[i] - 32 == s[i+1]){
                s = temp+=s.substr(i+2, s.length());
                temp="";
                i = 0;
            } else {
                temp += s[i];
                i++;
            }
        }

        return temp;
    }
};