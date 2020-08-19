 #include<bits/stdc++.h>
using namespace std;
int main()
    {int a[]={10,9,8,43,7,16};
    sort(a,a+6);
    int t=4;int b[7];
    memset(b,0,sizeof(b));
   int x,y,m,s,k,w1,w2,w3,w4,x1,x2,y1,y2,i;
   cout<<"four queries are as follows: "<<"\n";
        cout<<"the product of first  and last element (a[0] and a[5]) from the order u have thought: ";
        cin>>w1;x1=x2=y1=y2=0;
        for(i=0;i<6;i++)
            {if(w1%a[i]==0)
                {x1=a[i];
                y1=w1/x1;
                bool present=binary_search(a,a+6,y1);
                if(present)
                    {
                break;}
                else {continue;
                }
            }} 
       cout<<"the product of first and second elemnt (a[0] and a[1]) from the order u have thought: ";
        cin>>w2;
        for(i=0;i<6;i++)
            {if(w2%a[i]==0)
                {x2=a[i];
                y2=w2/x2;
                bool present=binary_search(a,a+6,y2);
                if(present)
                    {
                break;}
                else {continue;
                }
            }}
                
        if(x1==x2)
            {b[0]=x1;
            b[1]=y2;
            b[5]=y1;
            }
        else  if(x1==y2)
            {b[0]=x1;
            b[1]=x2;
            b[5]=y1;
            }
       else  if(y1==x2)
        {b[0]=y1;
            b[1]=y2;
            b[5]=x1;
        }
        else
            {b[0]=y1;
            b[1]=x2;
            b[5]=x1;
            }
        cout<<"the product of second last and last elemnt (a[4] and a[5]) from the order u have thought: ";
            cin>>w3;
            b[4]=w3/b[5];
        cout<<"the product of second and third elemnt (a[1] and a[2]) from the order u have thought: ";
            cin>>w4;
            b[2]=w4/b[1];
        int sum1=93;
        int sum2=b[0]+b[1]+b[2]+b[4]+b[5];
        b[3]=sum1-sum2;
        cout<<"the order u have thought is : ";
        for(i=0;i<6;i++)
            {cout<<b[i]<<" ";
            }
            return 0;}
