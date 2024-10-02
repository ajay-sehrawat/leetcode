class Solution
{
public:
    int countValidWords(string sentence)
    {
        int count = 0;
        istringstream iss(sentence);
        string word;

        while (iss >> word)
        {
            int n = word.size();
            bool pun = false, hyp = false, digi = false, check = true;

            for (int i = 0; i < n; i++)
            {
                if (word[i] > 47 && word[i] < 58)
                {
                    check = false;
                    continue;
                }
                else if (hyp)
                {
                    check = false;
                    continue;
                }
                else if (pun)
                {
                    check = false;
                    continue;
                }
                else if ((word[i] == '.' || word[i] == '!' || word[i] == ',') && i != n - 1)
                {
                    check = false;
                    continue;
                }
                else if ((word[i] == '-') && (i == 0 || i == n - 1 || (i < n - 1 && (word[i + 1] < 'a' || word[i + 1] > 'z'))))
                {
                    check = false;
                    continue;
                }
                else
                {
                    if (word[i] == '-')
                        hyp = true;
                    else if (word[i] == '.' || word[i] == '!' || word[i] == ',')
                        pun = true;
                }
            }

            if (check)
                count++;
        }

        return count;
    }
};