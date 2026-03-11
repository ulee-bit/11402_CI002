#include <iostream>
using namespace std;
int main(){
    int a,b,m,max;//a,b為輸入的兩個數，m為計算每個數的cycle length，max為紀錄最大cycle length
    while(cin >> a >> b){
    max = 0;
    cout << a << " " << b;
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }//確保a為較小的數，b為較大的數
    for(int i=a ; i<=b ; i++){
        int c = i;
        m = 0;
        while(c >= 1){
            if(c==1){
                m++; 
                if(m > max) max = m;
                break;
            }
            else if(c%2 == 1){
                m++;
                c = c*3 + 1;
            }
            else{
                m++;
                c/=2;
            }

        }
    }

    cout << " " << max << endl;

}

    return 0;
}