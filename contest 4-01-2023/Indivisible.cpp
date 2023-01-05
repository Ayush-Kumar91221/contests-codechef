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
        for (int i=1;i<101;i++)
        {
            if (a%i!=0 && b%i!=0 && c%i!=0 )
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}