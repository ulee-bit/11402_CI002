#include <iostream>
using namespace std;
int main(){
    int a=1,b=1,A,B,count;
    while(cin >> a >> b){
        count = 0;
        if(a==0 && b==0) break;
        if(a>b){
            int temp = b;
            b = a;
            a = temp;
        }
        while(b>0){
            A = a%10;
            B = b%10;
            a/=10;
            b/=10;
            if(A+B >= 10){
                count++;
                if(a==0) a+=1; 
                else if((a%10) + (b%10) < 10){
                    if(a%10 < b%10) a+=1;
                    else b+=1;
                }
            }
        }
        if(count == 0) cout << "No carry operation.\n";
        else if(count == 1) cout << "1 carry operation.\n";
        else cout << count << " carry operations.\n";
    }
    return 0;
}