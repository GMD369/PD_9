#include <iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
    int size,n;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int value[size];
    for (int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>value[i];
    }
    cout<<"Enter the number of times even-odd transformation need to be done: ";
    cin>>n;
    evenOddTransform(value,size,n);
    for(int i=0;i<size;i++)
    {
        if (i==0)
        {
            cout<<"[";
        }
        cout<<value[i];
        if(i<size-1)
        {
            cout<<", ";
        }
        else{
            cout<<"]";
        }
    }
}
void evenOddTransform(int arr[], int size, int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<size;j++)
        {
            if (arr[j]%2==0)
            {
                arr[j]-=2;
            }
            else{
                arr[j]+=2;
            }
        }
    }
}