#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,a[1000];
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
        
    }
    for(int i=size-1;i>=0;i--)
    {cout<<a[i]<<" ";}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}