#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> a;
    int i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        cout<<a.at(i)<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
