#include <bits/stdc++.h>
using namespace std;

string removeVowels(string inputString)
 {
    // Write your code here.
    int l=inputString.length();
    string st="";
    for(int i=0;i<l;i++)
    {
        if(inputString[i]!='a'&&inputString[i]!='e'&&inputString[i]!='i'&&inputString[i]!='o'&&inputString[i]!='u'&&inputString[i]!='A'&&inputString[i]!='O'&&inputString[i]!='E'&&inputString[i]!='I'&&inputString[i]!='U')
        {
            st+=inputString[i];
        }
    }
    return st;
}

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
  string str;
  cin>>str;
  cout<<removeVowels(str)<<endl;
  }
  return 0;
}