#include<iostream>
using namespace std;


int main()
{
    string dt[] = {"int","float","double","char","bool","string"};
    string key[] = {"if","else","for","while","return","true"};

    string ConsoleInput;
    bool found = false;

    cout<<"Enter a datatype, keyword or variable:";
    cin>>ConsoleInput;

    for(int i=0; i<=4; i++)
    {
        if(ConsoleInput==dt[i])
        {
            cout<<"A datatype!"<<endl;
            found = true;
            break;
        }

    }

    if(found == false)
    {
        for(int i=0; i<=4; i++)
        {
            if(ConsoleInput==key[i])
            {
                cout<<"A keyword!"<<endl;
                found = true;
                break;
            }
        }
    }

    if(found==false)
    {
        cout<<"Null!"<<endl;
    }
    return 0;
}
