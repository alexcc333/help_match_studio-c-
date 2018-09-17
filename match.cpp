#include <cmatch.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void root::root_resultat()
{

    cout<<"in enter the number 1=";
    cin>>a;
    cout<<"root="<<a*a<<endl;

}

void sqare::sqare_resultat()
{
    cout<<"in enter the number 1=";
    cin>>a;
    for(int i=0;i<9999;i++)
    {
        double z=i*i;
        if(z==a)
        {
           cout<<i;
         break;
        }
    }
}

