#include<iostream>
using namespace std;
 
int main()
{

    int n;
    std::cout<<"Enter a number";
    cin>>n;

  if  (n<0||n>100){
    std::cout<<"invalid";
    return 0;
  }
  if  (n>33&&n<74) {
    std::cout<<"you are pass";
  }
    else if(n>=75&&n<=100){
        std::cout<<"you are in merit list";
    }
    else {
        std::cout<<"you are fail";
  }



  
  std::cout<<"\n";
}