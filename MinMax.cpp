//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

#include <bits/stdc++.h>

using namespace std;
int main(){
    long int arr[5];
    for(int i=0;i<5;i++) cin>>arr[i];
    sort(arr, arr+5);
    long int min=0,max=0;
    for(int i=0;i<4;i++){
        min=arr[i]+min;
        max=arr[i+1]+max;
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
