#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
#if !defined(ONLINE_JUDGE) && defined(LOCAL)
#endif
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
	    cin>>a>>b>>c;
	    if ((a+b)==c)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
    }
    return 0;
}