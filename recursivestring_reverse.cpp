#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string sub=s.substr(1);
    reverse(sub);
    cout<<s[0];
}
int main()
{
   reverse("binod");
    return 0;
}