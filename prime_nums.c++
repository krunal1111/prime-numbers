#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number: ";
    int num;
    cin>>num;
    cout<<"prime numbers are: ";
    int counter=1;
    bool flag;

    for(int i=2;;i++)
    {
        flag=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==false)
        {
            continue;
        }
        cout<<i<<" ";
        
        if(counter==num)
        {
            break;
        }
        counter++;
    }

    return 0;
}