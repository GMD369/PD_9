#include <iostream>
using namespace std;
bool isLengthEven(string name);
main()
{
  string name;
  cout<<"Enter a String: ";
  cin>>name;
  cout<<isLengthEven(name);
}
bool isLengthEven(string name)
{
    int length=0;
    while(name[length]!='\0')
    {
      length++;
    }
    if (length%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}