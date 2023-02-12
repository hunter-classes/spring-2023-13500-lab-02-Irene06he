//Name:Irene He He
//GitHub Name:Irene06he

# include<iostream>

int main(){
  int i;
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  
  for(i=2;i<60;i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  for(i=0;i<60;i++){
    printf("\n%d",fib[i]);
  }
    std::cout<<"\n\n";
  
  return 0;
}