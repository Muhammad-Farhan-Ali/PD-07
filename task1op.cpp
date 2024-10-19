#include<iostream>
using namespace std;

void drawTriangle(int rows);

int main()
{
    int size;
    cout<<"Enter rows/sze for triangle:";
    cin>>size;

    drawTriangle(size);

    return 0;
}
void drawTriangle(int rows)
{
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}