#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,n,k;
       cin>>n>>a>>b>>k;
       long long int count=0;
       count=(n/a)+(n/b);
       long long int lcm=boost::math::lcm(a,b);
        long long int co=n/lcm;
        long long int final=count-co-co;
        if(final>=k)
            cout<<"Win"<<endl;
        else
            cout<<"Lose"<<endl;
    }
    return 0;
}
