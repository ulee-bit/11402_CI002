#include <iostream>
using namespace std;

int main(){

    int a[11]={0},b[11]={0},n,m;
    while(cin>>n>>m && (n!=0 || m!=0)){
        int len_a=0,len_b=0;
        while(n>0){a[len_a++] = n%10; n/=10;}
        while(m>0){b[len_b++] = m%10; m/=10;}
        
        int carry=0,count=0;
        for(int i=0;i<12;i++){
            int sum = a[i] + b[i] + carry;
            if(sum>=10){
                carry = 1;
                count++;
            }
            else carry = 0;
        }

        if(count == 0) cout << "No carry operation.\n";
        else if(count == 1) cout << "1 carry operation.\n";
        else cout << count << " carry operations.\n";
    }

    return 0;
}