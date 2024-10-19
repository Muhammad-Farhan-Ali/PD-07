#include<iostream>
using namespace std;

int triangle(int tri);

int main()
{
    int tri;
    cout<<"Enter number of triangle:";
    cin>>tri;

    cout<<"Number of dotsin triangle:"<<triangle(tri)<<endl;

    return 0;
}
int triangle(int tri)
{
    int dots=0;
    for(int i=1;i<=tri;i++)
    {
        dots=dots+i;
    }
    return dots;
}