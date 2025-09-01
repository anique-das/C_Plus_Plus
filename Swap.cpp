#include<iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout<<"Enter First value: ";
    cin>>a;

    cout<<"Enter Second value: ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;
    cout<<endl;
    cout<<"After swapping first value of a: "<<a<<endl;
    cout<<"After swapping second value of b: "<<b;

    return 0;
}

