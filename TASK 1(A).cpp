#include<bits/stdc++.h>
using namespace std;
int main()
    {int n;
    string s;
    cin>>n;
    cin>>s;
    int i;int k=0;
    for(i=0;i<n;i++)
        {if(s[i]=='1')
            {k++;
            }
        }
      if(k==n)
        {cout<<"-1"<<endl;
        }
    else
        {string y=s;
        string z=s;
        for(i=0;i<n-1;i++)
            {if(y[i]=='0'&&y[i+1]=='1')
                {swap(y[i],y[i+1]);
                break;
                }
            }
        for(i=0;i<n-1;i++)
            {if(z[i]=='0'&&z[i+1]=='1')
                {z[i+1]='0';
                break;
                }
            }
            cout<<z<<" "<<y<<endl;
    }
        return 0;}
