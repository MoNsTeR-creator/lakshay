#include<iostream>
using namespace std;
int main()
{
    int fact,n;
    fact=1;
    cout<<"enter the number for factorial";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial is:"<<fact;
}
