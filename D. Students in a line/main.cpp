#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--){
        string s;
        cin>>s;

        vector <ll> a;
        for (ll i = 0 ; i < s.length(); i++)
        {
            ll x = s[i]-'0';
            a.push_back(x);
        }
        for( ll i=0;i<s.length()-2;i++)
        {
          if()
        }


    }
//11223321
//0100//لو اني ابحث عن اللحظة الي بتزيد 3 اماكن مختلفة في الارييه ورا بعض
    return 0;
}
/*ll t;
cin>>t;
string s;
while(t--)
{
    cin>>s;
    int n=4;
    vector<ll>v(n);
    ll j=0,mi=N;
    loop1
    {
        v[s[i]]-'0']++;
        while(v[1]&&v[2]&&v[3])
        {
            mi=min(mi,1+i-j);
            v[s[j]-'0']--;
            j++
        }
    }
    cout<<((mi==N)?0:mi)<<"/n";
}*/
