#include<iostream>
using namespace std;

void hospital(int days);

int main()
{
    int days;
    cout<<"Enter number of days you visited hospital:";
    cin>>days;

    hospital(days);
    return 0;
}
void hospital(int days)
{
    int people;
    int treatedPeople=0,untreatedPeople=0;
    int doctors=7;
    int totalTreated=0,totalUntreated=0;

    for(int i=1;i<=days;i++)
    {
        cout<<"Enter number of people who visted hospital on day "<<i<<":";
        cin>>people;
        if((i%3==0)&&(totalUntreated>totalTreated))
        {
            doctors++;
        }

        if(people>doctors)
        {
            treatedPeople=doctors;
            untreatedPeople=people-treatedPeople;
        }
        else
        {
            treatedPeople=people;
            untreatedPeople=0;
        }

        totalTreated+=treatedPeople;
        totalUntreated+=untreatedPeople;
    }
    cout<<"Treated Patients:"<<totalTreated<<endl;
    cout<<"Untreated Patients:"<<totalUntreated<<endl;
}