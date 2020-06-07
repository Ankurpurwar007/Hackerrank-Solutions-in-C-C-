#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,n,q,size,x,a,b;
   
    cin>>n>>q;
    vector<int> arr[n];
   
    for(i=0;i<n;i++)
    {
        cin>>size;
        for(j=0;j<size;j++)
        {
            cin>>x;
            arr[i].push_back(x);
        }

    }
    for(i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}
