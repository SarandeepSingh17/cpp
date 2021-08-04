#include<bits/stdc++.h>
using namespace std;
int password(string str,int n)
{
    bool isNum=false,islen=false,isstart=false,iscapital=false,ispecial=false;
    islen= n>=4;
    isstart = (str[0]>='0' && str[0]<='9');
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        iscapital=true;
        if(str[i]>='0' && str[i]<='9')
        isNum=true;
        if(str[i]!='/' || str[i]!=' ')
        ispecial=true;
    }
    if(!isstart && isNum && islen && iscapital && !ispecial)
    return 1;
    else
    return 0;
}
int main()
{
    string str;
    cin>>str;
    int l=str.length();
    cout<<password(str,l)<<endl;
    return 0;
}