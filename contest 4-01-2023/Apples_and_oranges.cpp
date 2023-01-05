#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
#if !defined(ONLINE_JUDGE) && defined(LOCAL)
#endif
int HCF(int a,int b)
{   
    //b<a
    if(a%b==1)
    return 1;
    else if(a%b==0)
    return b;
    else 
    return HCF(b,a%b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a>b)
        cout<<HCF(a,b)<<endl;
        else 
        cout<<HCF(b,a)<<endl; 
    }
    return 0;
}