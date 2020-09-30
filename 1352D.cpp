#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,t,x,i,a,b;
cin>>t;
while(t--)
{
    cin>>n;
    int as=0,bs=0,c=0,k,a=0,b=0;
    deque<int>dq;
    deque<int>::iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        dq.push_back(x);
    }
    while(dq.size()>0){
        a=0;k=0;
        while(a<=b && dq.size()>0){
            it=dq.begin();
            a=a+*it;
            dq.erase(dq.begin());
            if(k==0)
                {c++;k++;}
        }
        as=as+a;
        b=0;k=0;
        while(b<=a && dq.size()>0){
            it=dq.begin()+dq.size()-1;
            b=b+*it;
            dq.erase(dq.begin()+dq.size()-1);
            if(k==0)
                {c++;k++;}
        }
        bs=bs+b;
    }
    cout<<c<<" "<<as<<" "<<bs<<" "<<endl;
}
}
