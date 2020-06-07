#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
    public:
    int scores[5];
    void input();
    int calculateTotalScore();
};
void Student :: input()
{
    for(int i=0;i<5;i++)
    {
        cin>>scores[i];
    }
}
int Student :: calculateTotalScore()
{
    return (scores[0]+scores[1]+scores[2]+scores[3]+scores[4]);
}
// Write your Student class here

int main() {