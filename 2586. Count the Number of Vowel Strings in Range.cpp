class Solution
{
public:
    int isVowel(char w)
    {
        return (w == 'a' || w == 'e' || w == 'i' || w == 'o' || w == 'u');
    }
    int vowelStrings(vector<string> &words, int left, int right)
    {
        int count = 0;
        for (int i = left; i <= right; ++i)
        {
            string word = words[i];
            if (isVowel(word[0]) && isVowel(word.back()))
                count++;
        }
        return count;
    }
};