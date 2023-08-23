#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector <int> k;
    for (i=0;i<n;i++)
    {
        cin>>j;
        k.push_back(j);
    }
    int c=0;
    for(i=0;i<n-2;i++){
        if(k[i]%2==0 and k[i+1]%2!=0 and k[i+2]%2==0) c++;
    }
    cout<<c;
}