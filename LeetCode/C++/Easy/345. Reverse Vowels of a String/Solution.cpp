class Solution {
public:
    string reverseVowels(string s)
    {
        int left=0;
        int right=s.size()-1;
        string Vowels="aeiouAEIOU";
        while(left<right)
        {
            if(Vowels.find(s[left])==string::npos)
            {
                left++;
            }
            else if(Vowels.find(s[right])==string::npos)
            {
                right--;
            }
            else
            {
            swap(s[left],s[right]);
            left++;
            right--;
            }
        }
        return s;
    }
};