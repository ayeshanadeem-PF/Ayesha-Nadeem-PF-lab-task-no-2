#include <iostream>
using namespace std;
int main(){
  float balance;
  cout<<"Enter the initial balance:";
  cin>>balance;
  float deposit;
  cout<<"Enter the deposit amount:";
  cin>>deposit;
  float withdrawal;
  cout<<"Enter the withdrawal amount:";
  cin>>withdrawal;
   balance+=deposit; //deposit=deposit+balance;
   cout<<"Balance after deposit:"<<balance<<endl;
   balance-=withdrawal;//withdrwal=withdrawal+balance;
   cout<<"Balance after withdrawal:"<<balance<<endl;
   cout<<"Final Balance: "<<balance;
   return 0;


}