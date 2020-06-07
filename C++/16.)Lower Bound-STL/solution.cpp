#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,m,x,j,z,l,r,mid,ans;
    vector<int> a,b;
    vector<int>::iterator it;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    for(i=0;i<m;i++)
    {
        z=binary_search(a.begin(),a.end(),b[i]);
        
        if(z)
        {
            l=0;
            r=a.size()-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                
                if(a[mid]<b[i])
                {
                    l=mid+1;
                }
                else if(a[mid]>b[i])
                {
                    r=mid-1;
                }
                else if(a[mid]==b[i])
                {
                    ans=mid;
                    r=mid-1;
                }
             
            }
          cout<<"Yes "<<ans+1<<endl;
        }
        else
        {
            l=0;
            r=a.size()-1;
            while(l<=r)
            {
                mid=(l+r)/2;
                if(a[mid]<b[i])
                {
                    l=mid+1;
                }
                else if(a[mid]>b[i])
                {
                    ans=mid;
                    r=mid-1;
                }
                else if(a[mid]==b[i])
                {
                    l=mid+1;
                }
            }
            cout<<"No "<<ans+1<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
