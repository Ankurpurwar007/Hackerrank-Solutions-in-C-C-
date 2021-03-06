#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q,x,y;
    cin>>q;
    set<int> s;
    set<int>::iterator itr;
    for(int i=0;i<q;i++)
    {
        cin>>y>>x;
        switch(y)
        {
            case 1:     s.insert(x);
                        break;
            case 2:     itr=s.find(x);
                        if(itr!=s.end())
                        {
                            s.erase(x);
                        }
                        break;
            case 3:     itr=s.find(x);
                        if(itr!=s.end())
                        {
                            cout<<"Yes"<<endl;
                        }
                        else
                        {
                            cout<<"No\n";
                        }
                        break;
        }
    }
    
    return 0;
}
