#include <iostream>
using namespace std;
int commonChar(string s1,string s2);
main()
{
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    cout<<"Number of common characters: "<<commonChar(s1,s2);
}
int commonChar(string s1,string s2)
{
    int l1=0,l2=0,count=0;
    while (s1[l1]!='\0')
    {
        l1++;
    }
    while (s2[l2]!='\0')
    {
        l2++;
    }
    for (int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
          if (s1[i]==s2[j])
          {
          count++;
          break;
    }

}
    }
    return count;
    }