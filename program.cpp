// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int a[]={93,11,2,3,21,31,9,93};
    int maxi=0;
    
    auto n = sizeof(a)/sizeof(int);
    
    sort(a,a+n);
    maxi = a[n-1];
    int secl =0;
    for(int i = n-1;i>0;i--){
        if(a[i]==maxi){}
        else{
            secl = a[i];
            break;
        }
    }
    cout<<"is the largest number "<<maxi<<endl;
    cout<<"is the second largest number "<<secl;

    return 0; 
}
