//Name:Irene He He
//GitHub Name:Irene06he

#include<iostream>

int main(){
    int i,v;
  int myData [10] = {1,1,1,1,1,1,1,1,1,1};
  do{
    for(i=0;i<10; i++){
      printf("%d ", myData[i]);}
    std::cout<<"\n\n";
  std::cout<<"Input index:";
  std::cin>>i;
  std::cout<<"Input value:";
  std::cin>>v;
    while (i>9 || i<0){
      std::cout<<"Index out of range. Exit.";
      return 1;
    }
    myData[i] = v;
    
    }  while( i>=0 && i<=9 );
     
  
    return 0;
    }