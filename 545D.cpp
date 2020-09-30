#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i=0,c=0,s=0,p;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);i=0;
    while(i<n){
        if(s<=a[i])
            {s=s+a[i];c++;}
        i++;
    }
    cout<<c;
}

