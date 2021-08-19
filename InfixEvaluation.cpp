#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' ||c=='/')
    {
        return 2;
    }
    else if(c=='+' ||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int infixevaluation(string s)
{
    stack<char> ops;
    stack<int> values;
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            values.push(s[i]-'0');
        }
        else if(s[i]=='(')
        {
            ops.push(s[i]);
        }
        else if (s[i]==')')
        {
            /* code */
            while(!ops.empty() && ops.top()!='(')
            {
                int op2=values.top();
                values.pop();
                int op1=values.top();
                values.pop();
                switch (ops.top())
                {
            case '+':
        /* code */
            values.push(op1+op2);
            ops.pop();
        break;
    case '-':
        values.push(op1-op2);
        ops.pop();
        break;
    case '*':
        /* code */
        values.push(op1*op2);
        ops.pop();
        break;
    case '/':
        /* code */
        values.push(op1/op2);
        ops.pop();
        break;
    case '^':
        /* code */
        values.push(pow(op1,op2));
        ops.pop();
        break;
    default:
        break;
    }
            }
            if(!ops.empty())
            {
                ops.pop();
            }

        }
        
        else
        {
            if(!ops.empty() && prec(ops.top())>=prec(s[i]))
            {
                int op2=values.top();
                values.pop();
                int op1=values.top();
                values.pop();
                switch (ops.top())
                {
            case '+':
        /* code */
            values.push(op1+op2);
            ops.pop();
        break;
    case '-':
        values.push(op1-op2);
        ops.pop();
        break;
    case '*':
        /* code */
        values.push(op1*op2);
        ops.pop();
        break;
    case '/':
        /* code */
        values.push(op1/op2);
        ops.pop();
        break;
    case '^':
        /* code */
        values.push(pow(op1,op2));
        ops.pop();
        break;
    default:
        break;
    }
            }
            ops.push(s[i]);
        }
    }
    return values.top();
}
int main()
{
    string s;
    cin>>s;
    cout<<infixevaluation(s);
    return 0;
}