#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prefixevaluation(string s)
{
    stack<int> st;
    for(int i=s.length();i>=0;i--)
    {
        if (isspace(s[i])) {
            continue;
        }

        // If the component of the string is an integer.
        else if (isdigit(s[i])) {
            int num = 0;
            
            while (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
    switch (s[i])
    {
    case '+':
        /* code */
        st.push(op1+op2);
        break;
    case '-':
        st.push(op1-op2);
        break;
    case '*':
        /* code */
        st.push(op1*op2);
        break;
    case '/':
        /* code */
        st.push(op1/op2);
        break;
    case '^':
        /* code */
        st.push(pow(op1,op2));
        break;
    default:
        break;
    }
        }
    }
    return st.top();
}
int postfixevaluation(string s)
{
    stack<int> st;
    
    for(int i=0;i<s.length();i++)
    {
        if (isspace(s[i])) {
            continue;
        }

        // If the component of the string is an integer.
        else if (isdigit(s[i])) {
            int num = 0;
            
            while (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }
        else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
    switch (s[i])
    {
    case '+':
        /* code */
        st.push(op1+op2);
        break;
    case '-':
        st.push(op1-op2);
        break;
    case '*':
        /* code */
        st.push(op1*op2);
        break;
    case '/':
        /* code */
        st.push(op1/op2);
        break;
    case '^':
        /* code */
        st.push(pow(op1,op2));
        break;
    }
    }
    }
    return st.top();
}
int main()
{
    cout<<postfixevaluation("100 200 + 2 / 5 * 7 +");
    return 0;
}