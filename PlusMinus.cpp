//Print the ratios of positive, negative and zero values in the array. 
//Each value should be printed on a separate line with  digits after the decimal. 
//The function should not return a value.


#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin>>size;  
    int arr[size];
    for(int i=0;i<size;i++) cin>>arr[i];
    int p=0,n=0,z=0;
    double dp,dn,dz;
    for(int i=0;i<size;i++){
        if(arr[i]>0) p++;
        else if(arr[i]==0) z++;
        else n++;
    }
    dp= (double)p/size;
    dn= (double)n/size;
    dz= (double)z/size;
    
    cout<<dp<<endl<<dn<<endl<<dz<<endl;
    return 0;
}
