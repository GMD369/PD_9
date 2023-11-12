#include <iostream>
using namespace std;
bool areAllElementsIdentical(string name[],int size);
main()
{
  int size;
  cout<<"Enter the size of Array: ";
  cin>>size;
  string arr[size];
  for (int i=0;i<size;i++)
  {
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr[i];
  }
  cout<<areAllElementsIdentical(arr,size);
}
bool areAllElementsIdentical(string name[],int size)
{
    for (int i=0;i<size;i++)
    {
        if(name[i]!=name[0])
        {
            return 0;
        }
    }
    return 1;
}