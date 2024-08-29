#include <iostream>

using namespace std ;

int main (void){
    int k2,k3,k5,k6;
    int num_265 =0;
    int num_32 = 0; 
    int result ;

    cin >> k2 >>k3 >>k5 >>k6 ;
    while(1){
        if(k2 != 0 && k5 != 0 && k6 != 0){
            num_265++;
            k2--;k5--;k6--;
        }
        else if (k2 != 0 && k3 != 0 ){
            num_32++;
            k2--;k3--;
        }
        else{
            break;
        }
    }

    result = num_265 * 256 + num_32 * 32;
    cout << result ;
    return 0 ;
}