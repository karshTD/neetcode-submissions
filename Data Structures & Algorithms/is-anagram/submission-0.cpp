class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> counts;
        unordered_map<char, int> countt;

        for ( char c: s){
            counts[c]++;
        }

        for (char c: t){
            countt[c]++;
        }

        if ( counts == countt){
            return true;
        }

        else{
            return false;
        }


    }
};
