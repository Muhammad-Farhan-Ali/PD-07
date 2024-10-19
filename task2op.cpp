#include<iostream>
using namespace std;

void printDiagram(int rows);

int main()
{
    int size,rows;
    cout<<"Enter the number of rows:";
    cin>>size;

    printDiagram(size);

    return 0;
}
void printDiagram(int rows)
{
    for(int i=rows;i>=1;i--)
    {
        for(int j=1;j<=rows;j++)
        {
            if(i<=j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}