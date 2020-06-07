#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,n,i,u,v,w;
    vector<int> a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
        cin>>u;
        cin>>v>>w;
        a.erase(a.begin()+(u-1));
        a.erase(a.begin()+(v-1),a.begin()+(w-1));
        cout<<a.size()<<endl;
    for(i=0;i<a.size();i++)
    {
        cout<<a.at(i)<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
