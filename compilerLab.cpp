#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;

int precedence(char op)
{
    if(op == '+' || op == '-') return 1;
    if(op == '*' || op == '/') return 2;
    return 0;
}

int appOp(int a, int b, char op)
{
    if(op == '+') return a + b;
    if(op == '-') return a - b;
    if(op == '*') return a * b;
    if(op == '/') return a / b;
    return 0;
}

int main()
{
    string eq;
    cout << "Equation: ";
    getline(cin, eq);

    stack<int> values;
    stack<char> ops;

    bool lastWasOperator = true;

    for(int i = 0; i < eq.length(); i++)
    {
        char c = eq[i];

        if(c == ' ') continue;

        if(isdigit(c))
        {
            lastWasOperator = false;
            int val = 0;
            while(i < eq.length() && isdigit(eq[i]))
            {
                val = val * 10 + (eq[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        }

        else if(c == '(')
        {
            ops.push(c);
            lastWasOperator = true;
        }

        else if(c == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(appOp(a,b,op));
            }
            ops.pop();
            lastWasOperator = false;
        }

        else if(c=='+' || c=='-' || c=='*' || c=='/')
        {


            if(lastWasOperator)
            {
                cout << "Invalid";
                return 0;
            }

            while(!ops.empty() && precedence(ops.top()) >= precedence(c))
            {
                int b = values.top();
                values.pop();
                int a = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(appOp(a,b,op));
            }

            ops.push(c);
            lastWasOperator = true;
        }

        else
        {
            cout << "Invalid";
            return 0;
        }
    }

    if(lastWasOperator)
    {
        cout << "Invalid";
        return 0;
    }

    while(!ops.empty())
    {
        int b = values.top();
        values.pop();
        int a = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(appOp(a,b,op));
    }

    cout << "Result = " << values.top();
    return 0;
}
