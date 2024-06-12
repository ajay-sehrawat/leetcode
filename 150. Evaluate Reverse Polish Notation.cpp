class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        string temp;
        int ans, a, b, cal, n = tokens.size();
        for (int i = 0; i < n; i++)
        {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                if (tokens[i] == "+")
                    cal = b + a;
                if (tokens[i] == "-")
                    cal = b - a;
                if (tokens[i] == "*")
                    cal = b * a;
                if (tokens[i] == "/")
                    cal = b / a;
                st.push(cal);
            }
            else
                st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};