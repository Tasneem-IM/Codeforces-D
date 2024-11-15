#include <iostream>
#define ll long long
using namespace std;
const ll N = 4e5+1,M=1e5+1;

ll n,k,a[N],b[N];
bool valid(ll x) {

    ll co=0;
    for (ll i=0;i<n;i++)
    {
        ll s=a[i]*x;
                if (b[i]<s)
                {
                    co+=s-b[i];
                            if(co>k)
                            {
                                return 0;
                            }
                }
    }

    return co <= k;
}

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
//111111000000
cin>>n>>k;
for(ll i=0;i<n;i++)
{
    cin>>a[i];
}
for(ll i=0;i<n;i++)
{
    cin>>b[i];
}

ll l=1,r=1;

if(!valid(1))
{
    cout<<"0";
}
else
{
    while(valid(r))
    {
      r*=2;
    }
    while(l+1<r)
    {
        ll m=(l+r)/2;
        if(valid(m))
        {
            l=m;
        }
        else
        {
            r=m;
        }
    }
    cout<<l;
}
    return 0;
}
/*bool valid(ll x)
{
  ll c[n];
  ll min=c[0];
  for(ll i=0;i<n;i++)
  {
      c[i]=b[i]/a[i];
          if(c[i]<=min)
          {
              min=c[i];
          }
  }
  if(x<=min)
    {
      return 1;
    }
  else
    {
          ll co=0;
          for (ll i=0;i<n;i++)
          {
              if(c[i]==min)
              {
                  co+=(a[i]-(b[i]-(c[i]*a[i])));
              }
          }
          if(k-co>=0)
          {
              for (ll i=0;i<n;i++)
              {
              if(c[i]==min)
              {
                 b[i]+=(a[i]-(b[i]-(c[i]*a[i])));
              }
              }
              k-=co;
              return 1;
          }
          else
          {
              return 0;
          }
    }
}*/
