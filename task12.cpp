# include<iostream>
using namespace std;
main()
{
  int  roseNumber;
  int  whiteRoseNumber;
  int  tulipFlower;
  float priceOfRoses;
  float priceOfWhiteRose;
  float priceOfTulip;
  float priceOfRose;
  float roses;
  float whiteRoses;
  float tulips;
  float totalPrice;
  float price;
  cout<<"entre number of red roses...";
  cin>>roseNumber;
  cout<<"entre number of white roses...";
  cin>>whiteRoseNumber;
  cout<<"entre number of tulip...";
  cin>>tulipFlower;
  priceOfRoses = 2.00;
  priceOfWhiteRose = 4.10;
  priceOfTulip = 2.50;
  roses=roseNumber *priceOfRoses;
  whiteRoses= whiteRoseNumber*priceOfWhiteRose;
  tulips =tulipFlower *  priceOfTulip;
  totalPrice = roses+ whiteRoses + tulips ;
  cout<<"total price is..."<<totalPrice<<endl;
  if(totalPrice > 200)
   {
    price=totalPrice-(totalPrice*0.20);
    cout<<" price is...."<<price ;
  }
}  