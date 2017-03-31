// Source: https://leetcode.com/problems/reverse-vowels-of-a-string/
// Time:  O(n)
// Space: O()

/********************************************************************************* 
* 
* Write a function that takes a string as input and reverse only the vowels of a string.
* 
* Example 1:
* Given s = "hello", return "holle".
* 
* Example 2:
* Given s = "leetcode", return "leotcede".
* 
* Note:
* The vowels does not include the letter "y". 
* 
*********************************************************************************/

//15ms From: https://discuss.leetcode.com/topic/43418/c-easy-understanding-solution/4
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int i= 0, j = s.size()-1;
        while(i<j){
            while(vowels.find(s[i])==vowels.end()) i++;
            while(vowels.find(s[j])==vowels.end()) j--;
            if(i >= j) break;
            swap(s[i++],s[j--]);
        }
        return s;
    }
};

//12ms From: https://discuss.leetcode.com/topic/43452/super-clean-c-solution-using-find_first_of-and-find_last_of
class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};

//26ms My solution
class Solution {
public:
    string reverseVowels(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low < high)
        {
            if(isVowel(s[low]) && isVowel(s[high]) )
                swap(s[low++], s[high--]);
            else if(!isVowel(s[low]))
                low++;
            else if(!isVowel(s[high]))
                high--;
        }
        return s;
    }
    bool isVowel(char c)
    {
        string v = "aeiou";
        for(int i=0; i<5; i++)
        {
            if(c == v[i] || c == v[i]-32)
                return true;
        }
        return false;
    }
};
