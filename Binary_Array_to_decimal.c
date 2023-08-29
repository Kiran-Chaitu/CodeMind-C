#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,s=0;
    cin>>n;
    vector <int> v;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(i=0;i<n;i++){
        if(v[i]==1){
        s+=pow(2,(n-i-1)*v[i]);}
    }
    cout<<s;
}