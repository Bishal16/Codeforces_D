/*#include<bits/stdc++.h>
using namespace std;

int main()
{//cout<<sqrt(1000000000);



long long int n,i,t,K,P;
cin>>t;
while(t--)
{
    P=0;
    cin>>n>>K;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if (i <= K)    //8 1
                P = max(P, i);

            if (n / i <= K)
                P = max(P, n / i);
        }
    }
    cout << n / P << endl;
}
}
//21197987
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int n,i,t,k,c,p;
cin>>t;
while(t--)
{
    c=0;
    cin>>n>>k;
    if(k>=n)
        {cout<<1<<endl;continue;}
    for(i=1;i*i<=n;i++)
        if(n%i==0 )
            {c++;break;}
    if(c==0)
        {cout<<n<<endl;continue;}
    c=0;p=0;
    for(i=1;i*i<=n;i++)
        if(n%i==0)
        {
            if(n/i<=k)
                p=max(i,n/i);
            if(i<=k)
                p=max(p,i);
        }

    if(c==0)
        cout<<p<<endl;
}//1 440404979 21197987

}
