#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int part1,part2,part3,part4;
    cout<<"enter part1 of ip address"<<endl;
    cin>>part1;
     cout<<"enter part2 of ip address"<<endl;
    cin>>part2;
     cout<<"enter part3 of ip address"<<endl;
    cin>>part3;
     cout<<"enter part4 of ip address"<<endl;
    cin>>part4;
    
    cout<<"entered ip address is"<<part1<<"."<<part2<<"."<<part3<<"."<<part4<<endl;
    
    //string bp1,bp2,bp3,bp4;
    string bp1 = bitset<8>(part1).to_string();
    string bp2 = bitset<8>(part2).to_string();
    string bp3 = bitset<8>(part3).to_string();
    string bp4 = bitset<8>(part4).to_string();
    
    cout<<"binary form of ip address : ";
    cout<<bp1<<"."<<bp2<<"."<<bp3<<"."<<bp4<<endl;
    
    string ip_class;
    if (part1>=0 && part1<=127);
    {
        ip_class="A";
    }
    if (part1>=128 && part1<=191);
    {
        ip_class="B";
    }
    if (part1>=192 && part1<=223);
    {
        ip_class="C";
    }
    if (part1>=224 && part1<=239);
    {
        ip_class="D";
    }
    if (part1>=240 && part1<=255);
    {
        ip_class="E";
    }
    
    int sn1,sn2,sn3,sn4;
    
    if (ip_class=="A");
    {
        sn1=11111111;
        sn2=00000000;
        sn3=00000000;
        sn4=00000000;
    }
    if (ip_class=="B");
    {
        sn1=11111111;
        sn2=11111111;
        sn3=00000000;
        sn4=00000000;
    }
    if (ip_class=="C");
    {
        sn1=11111111;
        sn2=11111111;
        sn3=11111111;
        sn4=00000000;
    }
    if (ip_class=="D");
    {
        sn1=11111111;
        sn2=11111111;
        sn3=11111111;
        sn4=11111111;
    }
    cout<<"subnet : "<<sn1<<"."<<sn2<<"."<<sn3<<"."<<sn4<<endl;
    cout<<"ip_class : "<<ip_class<<endl;
    cout<<bp1 && sn1;
    cout<<".";
    cout<<bp2 && sn2;
    cout<<".";
    cout<<bp3 && sn3;
    cout<<".";
    cout<<bp4 && sn4;
    
    
    return 0;
}
