#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main() {
	// Complete the program
    string z,a,b;
    int sa,sb;
    char c;
    getline(cin,a);
    cin>>b;
    z=a+b;
    sa=a.size();
    sb=b.size();
    cout<<sa<<" "<<sb<<endl;
    
    cout<<z<<endl;
    c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a+" "+b;
    return 0;
}
