bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    int n = expression.size();
    for(int i = 0; i<n; i++){
        char c = expression[i];
        if (c == '(' || c == '{' || c == '['){
            s.push(c);
        }
        else{
            if(s.empty() || abs(c-s.top()) > 2) return false;
            else s.pop();
        }
    }
    return s.empty();
}
