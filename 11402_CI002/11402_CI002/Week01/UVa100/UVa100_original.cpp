#include <iostream>
using namespace std;
int main()
{
    int a,b,MAX=0,num=0;//此處應用long long，以免輸入的數字過大，導致num溢位
    cin >> a >> b;
    //此處有a,b的順序問題，先將a,b做比較，確保a為較小的數
    //應用while(cin >> a >> b)來處理多組輸入的情況
    for(int i=b ; i>=a ; i--){
      int max = 0;
      num = i;
        while(num >= 1){
        
          if(num == 1) {
              max++;
              num--;
          }
          else if(num%2 == 1){ 
              max++;
              num = num*3 + 1;
          }
          else{ 
              max++;
              num = num / 2;
          }
        
        }
        if(max > MAX) MAX = max;
    }
    
    cout << a << " " << b << " " << MAX << endl;

    return 0;
}