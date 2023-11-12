#include <iostream>
using namespace std;
int coloringTime(string cols[], int size);
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
    cout<<"Time to color: "<<coloringTime(arr,size)<<" seconds";
}
int coloringTime(string cols[], int size)
{
    int time=0;
    for (int i=1;i<size;i++)
    {
        if (cols[i]!=cols[i-1])
        {
         time+=1;
        }
    }
    time+=(size*2);
    return time;
}