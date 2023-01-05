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
        ll n;
        cin>>n;
        int a=-1;
        for(int i=2;i<sqrt(n);i++)
        {
            if (n%i==0)
            {
                if (n/i!=i)
                a=i;
                break;
            }
        }
        if(a==-1)
        cout<<-1<<endl;
        else
        {
            cout<<1<<" "<<a<<" "<<n/a<<endl;
        }
    }
    return 0;
}