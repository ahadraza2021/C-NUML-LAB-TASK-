#include<iostream>
using namespace std;

int TVCount;
int Pet_TurtleCount;
int ByeType;
int BuyStuff;
int PreviewShop;
int Money=10000;
int UmbrellaCount;
int main()
{
    while (1 != 0)
	{
    cout<<"Would you like to preview the MOBILE in the shop?"<<endl;
    cin>>PreviewShop;
    if(PreviewShop == 1)
	{
    cout<<"INFINIX HOT 9 PLAY"<<endl;
    cout<<"INFINIX NOTE 11"<<endl;
    cout<<"TECNO SPARK 4"<<endl;
    cout<<"IPHONE 13"<<endl;
    cin>>BuyStuff;
    if(BuyStuff == 1)
	{
    cout<<"\nWhat would you like to buy?";
    cin>>ByeType;
    if(ByeType == 1)
	{
    if(Money >= 100)
	{
    cout<<"You have bought an INFINIX HOT 9 PLAY:"<<endl;
    Money -= 1000;
    //UmbrellaCount += 1;
    }
	else
	{
    cout<<"\nYou do not have enough money to buy this item."<<endl;
    }
    }
    if(ByeType == 2)
	{
    if(Money >= 200)
	{
    cout<<"\n INFINIX NOTE 11."<<endl;
    Money -= 200;
   // Pet_TurtleCount += 1;
    }
    else
	{
	cout<<"\nYou do not have enough money to buy this item."<<endl;
	}
    }
    if(ByeType == 3)
	{
    if(Money >= 1000)
	{
    cout<<"\nYou have bought an TV."<<endl;
    Money -= 1000;
   // TVCount += 1;
    }
	else
	{
    cout<<"\nYou do not have enough money to buy this item."<<endl;
    }
    }
	}
    }
    if(PreviewShop == 2)
	{	
    cout<<"\nGood Bye.";
    return 0;
    }
    if(PreviewShop == 3)
	{
    cout<<"\nYou have $"<<Money<<'.'<<endl;
    }
   // if(PreviewShop == 4)
//	{
//            cout<<"\nYou have "<<UmbrellaCount<<" umbrella(s), "<<Pet_TurtleCount<<" pet turtle(s), and "<<TVCount<<" TV(s)."<<endl;
//    }   
	}
}
