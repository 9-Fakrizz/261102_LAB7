#include<iostream>

using namespace std;
void adiff(int a, int b){
   int a1;
   int b1;
   int c;
  
  if(a < 0){
    a = 360 +a;
  }
  if(b < 0){
    b = 360 +b;
  }
  
  
  if(a>=360){
    a1 = a % 360;
  }else{
    a1 = a;
  }
  
  if(b>=360){
    b1 = b % 360;
  }else{
    b1 = b;
  }

  if(a1 > b1){
    c = a1 - b1;
  }else{
    c = b1 - a1;
  }

  if(c>180){
    c =c -180;
  }
 
  cout << c ;

}

int main(){
  
  adiff(20,160);

}
