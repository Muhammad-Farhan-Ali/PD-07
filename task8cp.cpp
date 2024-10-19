#include<iostream>
#include<iomanip>
using namespace std;

void cargo(int count);

int main()
{
    int count;
    cout<<"Enter count for cargo transportation:";
    cin>>count;

    cargo(count);

    return 0;
}
void cargo(int count)
{
    int ton;
    float miniton=0.0,truckton=0.0,trainton=0.0,totaltons=0.0;

    for(int i=1;i<=count;i++)
    {
        cout<<"Enter tonnage of cargo "<<i<<":";
        cin>>ton;

        if(ton<=3)
        {
            miniton=miniton+ton;
        }
        else if(ton>3 && ton<=11)
        {
            truckton=truckton+ton;
        }
        else if(ton>11)
        {
            trainton=trainton+ton;
        }
        totaltons=totaltons+ton;
    }
    cout<<fixed<<setprecision(2)<<(((miniton*200.0)+(truckton*175.0)+(trainton*120.0))/totaltons)<<endl;
    cout<<fixed<<setprecision(2)<<((miniton/totaltons)*100.0)<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<((truckton/totaltons)*100.0)<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<((trainton/totaltons)*100.0)<<"%"<<endl;
}