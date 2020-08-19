#include<bits/stdc++.h>
using namespace std;
int c=0;
int mid=0;
void symmetry(int n,string a)
{
     mid=(n)/2;
    string ch1 = a.substr(0, mid);
    string ch2 = a.substr(mid, n-1);
    if((mid!=0)&&(ch1==ch2))
    {c++;
    symmetry(mid, ch1);
    } 
}
int main()
{
    int n;
    string a;
    cout<<"enter the length and string "<<"\n";
    cin>>n;
    cin>>a;
symmetry(n,a);
    cout<<c<<"\n";
    return 0;
}
