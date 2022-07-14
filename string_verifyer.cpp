/*
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

Constraints:

1 <= words.length <= 104
1 <= allowed.length <= 26
1 <= words[i].length <= 10
The characters in allowed are distinct.
words[i] and allowed contain only lowercase English letters.
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     
        int consistent = 0;
        bool notConsistent = true;
        for(string current : words){
            for(char i : current){
                notConsistent = true;
                for(char j : allowed){
                    if(i == j){
                        notConsistent = false;
                        break;
                    }
                }
                if(notConsistent)
                    break;
            }
            if(!notConsistent){
                consistent++;
                notConsistent = true;
            }
        }
        return consistent;
    }    
};