#include<bits/stdc++.h>
using namespace std;
int c=0;
int mid=0;
void sym(int n,string a)
{
     mid=(n)/2;
    string ch1 = a.substr(0, mid);
    string ch2 = a.substr(mid, n-1);
    if((mid!=0)&&(ch1==ch2))
    {c++;
    sym(mid, ch1);
    } 
}
int main()
{
    int n;
    string a;
    cin>>n;
    cin>>a;
sym(n,a);
    cout<<c<<"\n";
    return 0;
}
