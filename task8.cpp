#include <iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
   string s1,s2;
   cout<<"Enter the correct phrase: ";
   getline(cin,s1);
   cout<<"Enter what you actually typed: ";
   getline(cin,s2);
   cout<<"Broken keys: ";
   cout<<findBrokenKeys(s1,s2);
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{
    int l1=0;
    string result="";
    while (correctPhrase[l1]!='\0')
    {
        l1++;
    }
    for (int i=0;i<l1;i++)
    {
       if (correctPhrase[i]!=actualTyped[i])
       {
        if (correctPhrase[i]==correctPhrase[i+1])
        {
            continue;
        }
        
         result=result+correctPhrase[i];
       
    }}
    return result;
    }