#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
#if !defined(ONLINE_JUDGE) && defined(LOCAL)
#endif

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int length;
        ll sum;
        int multiplier;
        cin>>length>>multiplier>>sum;
        int array[length];

        for (int i=0;i<length;i++)
        array[i]=0;

        for (int i=0;i<length;i++)
        {
            if (sum==-1 || sum==1 || sum==0)
            {
                array[i]=sum;
                sum=0;
                break;
            }
            if (sum%multiplier==0)
            {
                array[i]=0;
                sum=sum/multiplier;
            }
            else if ((sum-1)%multiplier==0)
            {
                array[i]=1;
                sum=(sum-1)/multiplier;
            }
            else if((sum+1)%multiplier==0)
            {
                array[i]=-1;
                sum=(sum+1)/multiplier;
            }
            else 
            {   
                break;
            }
        }
        if(sum!=0)
        cout<<-2<<endl;
        else 
        {
            for (int i=0;i<length;i++)
                cout<<array[i]<<" ";
            cout<<endl; 
        }

    }
    return 0;
}
