#include <bits/stdc++.h>
using namespace std;
int lonelyinteger(int n, int a[]) {  
    int temp;
    sort(a,a+n); 
    for(int i=0;i<n;i=i+2){
        if(a[i]!=a[i+1]) {
            temp= a[i];
            break;
        }
    }
    return temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans= lonelyinteger(n, arr);
    cout<<ans<<endl;
    return 0;
}