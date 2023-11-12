#include <iostream>
#include <string>
using namespace std;
void convertPINToDance(string pin);
int main()
{
   string pin;
   cout<<"Enter your PIN (4 digits): ";
   cin>>pin;
   convertPINToDance(pin);
}
void convertPINToDance(string pin)
{
    string moves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};
 string digits="0123456789";
 string digit;
 string dance[4];
 int idx=0;
 int count =0;
 bool found =true;
 if (pin.length()!=4)
 {
    cout<<"Invalid!";
 }
 else{
    for (int i=0;i<4;i++)
    {
        digit=pin[i];
        count=0;
        for (int j=0;j<10;j++)
        {
         count++;
         if (digits[j]==pin[i])
         {
            idx=i+stoi(digit);
            if (idx>9)
            {
                dance[i]=moves[(idx%9)];
            }
            else{
                dance[i]=moves[idx];
            }
            break;
         }
         if (count ==10)
         {
            found =false;
            cout<<"Invalid";
            exit(0);
         }
        }
    }
    for (int i=0;i<4;i++)
    {
        cout<<dance[i]<<" ";
    }
 }
}