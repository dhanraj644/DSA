class Solution {
private :

    bool checkPalindrome(string s){

        int left=0;
        int right=s.size()-1;

        while(right>left)
        {
            if(s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
      }    
public:
    string firstPalindrome(vector<string>& words) {
        
        for( auto ch : words)
        {
           if(checkPalindrome(ch))
           {
            return ch;
           }
        }

        return "";
    }
};