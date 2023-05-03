#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s) {
    int n=s.length();
    string ans(n-2 ,' ');
    if(s[n-2]=='A'){
        if(s[0]=='1' && s[1]=='2'){
            ans[0]='0';
            ans[1]='0';
            for(int i=2;i<n-2;i++)  ans[i]=s[i];   
        }
        else{
            for(int i=0;i<n-2;i++) ans[i]=s[i];
        }
    }
    else{
        if(s[0]=='1' && s[1]=='2'){
            for(int i=0;i<n-2;i++)  ans[i]=s[i];
        }
        else{
            string num;
            num[0]=s[0];
            num[1]=s[1];
            int b;
            b=stoi(num);
            b=b+12;
            num= to_string(b);
            ans[0]=num[0];
            ans[1]=num[1];
            for(int i=2;i<n-2;i++) ans[i]=s[i];
        }
    }
    return ans;
}

int main()  {
    string s1;
    cin>>s1;
     string result= timeConversion(s1);
    cout<<result<<endl;
    return 0;
}