class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int t=s.length();
        int max_length=0;
        unordered_set<char>array;
        int right=0;
        for(int left=0; left<t; left++){
            char t=s[left];
            while(array.find(t)!=array.end()){
                array.erase(s[right]);
                right++;
            }
            array.insert(t);
            int l=left-right+1;
            if(l>max_length){
                max_length=l;
            }
        }
        return max_length;
        // int freq[256]={0};
        // int max_len=0;
        // int l=s.length();

    }
};