#include <iostream>
using namespace std;
string containsSeven(int number[],int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
        for (int i=1;i<=size;i++)
        {
            cout<<"Enter Element "<<i<<": ";
            cin>>arr[i];
        }
    cout<<containsSeven(arr,size);
}
string containsSeven(int number[],int size)
{
    int x;
    for (int i=1;i<=size;i++)
    {
      x=number[i]%10;
      if (x==7)
      {
        return "Boom!";
      }
    }
    return "there is no 7 in the array";
}
