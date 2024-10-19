#include<iostream>
using namespace std;

int primorial(int num);

int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;

    cout<<primorial(num)<<endl;

    return 0;
}
int primorial(int num)
{
    int x=2;
    int test=0,pro=1;

    while(test<num)
    {
        int check=0;
        for(int i=2;i<x;i++)
        {
            if(x%i==0)
            {
                check++;
                break;
            }
        }
        if((x==2) || (check==0))
        {
            test++;
            pro=pro*x;
        }
        x++;
    }

    return pro;
    
}