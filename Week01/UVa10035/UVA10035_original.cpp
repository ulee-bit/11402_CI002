#include <iostream>
using namespace std;
int main()
{
  int a,b,count=0,sum,final=0,orin=0;
  while(cin >> a >> b){
    if(a == 0 && b == 0) break;
    sum = a+b;
      while(sum>0){
        final++;
        sum/=10;
      }
      if(a>b){
        orin=0;
        int A=a;
        while(A>0){
          orin++;
          A/=10;
        }
      }
      else{
        orin=0;
        int B=b;
        while(B>0){
          orin++;
          B/=10;
        }
        
      }
      
    while(a>0 && b>0){
    if((a%10 + b%10) > 10){
        count++;
        a/=10;
        b/=10;
      }
    
    if(final > orin) count+= final - orin;
    
    }
    
    if(count==0) cout << "No carry operation.\n";
    else cout << count << " carry operation.\n";
    final = 0;
    orin = 0;
    count = 0;
  
  }
  return 0;
}