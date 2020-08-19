#include<bits/stdc++.h>
using namespace std;
int main()
	{int n,r,t,y;int i,x;
	cin>>n>>r>>x>>y;
	t=r;
	int c[n+1],scn[n+1];
	for(i=0;i<n;i++)
		{cin>>c[i];
		}
	for(i=0;i<n;i++)
		{cin>>scn[i];
		}
	for(i=0;i<n;i++)
		{if((scn[i]&&c[i]))
			{r+=x;
			}
		else if(scn[i]^c[i])
			{r-=y;
			}
		else
			{r+=0;
			}
		}
	if(t>r)
		{cout<<"demoted"<<"\n";
		}
	else if(r>t)
		{cout<<"promoted"<<"\n";
		}
	else {cout<<"no change"<<"\n";
	}
	return 0;
		}
