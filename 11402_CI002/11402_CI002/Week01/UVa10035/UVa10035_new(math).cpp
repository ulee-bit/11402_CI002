#include <iostream>
using namespace std;
int main(){
    int a=1,b=1,A,B,count;//a,b為輸入的兩個數字，A,B為將兩個數字逐漸拆成個位數的形式，count為紀錄進位次數
    while(cin >> a >> b){
        count = 0;
        if(a==0 && b==0) break;
        if(a>b){
            int temp = b;
            b = a;
            a = temp;
        }//確保a為較小的數字(方便運算)
        while(b>0){
            A = a%10;
            B = b%10;
            a/=10;
            b/=10;
            if(A+B >= 10){
                count++;
                if(a==0) a+=1; //如果a已經沒有位數了，則在下一輪運算時，a的個位數會是0，所以要先將a加1，讓下一輪運算的個位數為1
                else if((a%10) + (b%10) < 10){
                    if(a%10 < b%10) a+=1;
                    else b+=1;
                }//如果a和b的下一位數的和小於10，把進位加在最小的數
            }
        }
        if(count == 0) cout << "No carry operation.\n";
        else if(count == 1) cout << "1 carry operation.\n";
        else cout << count << " carry operations.\n";
    }
    return 0;
}