#include<iostream>
using namespace std;

void addition(int a, int b)
{
   int result = a+b;
  
   cout<<"Result(+) is: "<<result<<endl;
}

void subtraction(int a, int b)
{
   int result = a-b;
   cout<<"Result(-) is: "<<result<<endl;
}

void multiplication(int a, int b)
{
   int result = a*b;
   cout<<"Result(*) is: "<<result<<endl;
}

void division(int a, int b)
{
   int result = a/b;
   cout<<"Result(/) is: "<<result<<endl;
}

void reminder(int a, int b)
{
   int result = a%b;
   cout<<"Result(%) is: "<<result<<endl;
}

int main()
{
  addition(5,3);
  subtraction(5,3);
  multiplication(5,3);
  division(5,3);
  reminder(5,3);

  
}