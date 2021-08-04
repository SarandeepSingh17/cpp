#include<bits/stdc++.h>
using namespace std;
vector <string> getKPC(string str)
{
    if(str.length()==0)
    {
        vector <string> arr1={" "};
        return arr1;
    }
    vector <string> codes={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    char ch=str[0];
    string ros=str.substr(1);

    vector <string> rres = getKPC(ros);
    vector <string> arr;
    string chcode = codes[ch - '0'];
    for(int i=0;i<chcode.length();i++)
    {
        char ch1 = chcode[i];
        for(string rstr : rres)
        {
            arr[0]=chcode.append(rstr);
        }
    }
    return arr;
}
int main()
{ 
    string str;
    cin>>str;
    vector<string> word = getKPC(str);
    for(int i=0;i<word.size();i++)
    {
        cout<<word[i]<<" ";
    }
    return 0;
}