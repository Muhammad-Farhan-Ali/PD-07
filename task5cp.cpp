#include<iostream>
using namespace std;

bool isPrime(int num);

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    cout<<isPrime(num)<<endl;

    return 0;
}
bool isPrime(int num)
{
    int test=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            test++;
            break;
        }
    }
    if(test==0 || num==2)
    {
        return true;
    }
    else 
    {
        return false;
    }
}