//Name: Irene He He
//GitHub Name : Irene06he

#include <iostream>

int main() {
  int x,y;
  std::cout<<"Please enter an integer:";
  std::cin>>x;
  while(x <= 0 || x>=100)
{
  std::cout<<"Please re-enter:";
  std::cin >>x;
}
  while(x>0 && x<100){
    y= x *x; 
  std::cout<<"\n\n"<<"Number squared is "<<y;
    return 1;
  }
  
  return 0;
}