#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std ;

int main (void){
    int n , k ;
    int counter ,counter1; 
    int max ; 
    bool faild = true ;

    cin >> n >> k ;

    int num_in [n] = {0};
    

    for (counter = 0 ; counter < n ; counter++){
        cin >> num_in[counter];
    }
    sort(num_in,num_in+n);
    max = num_in[n-1];
    int num_res[max] = {0};
    for (counter = 0 ; counter < n ; counter++){
        cout << num_in[counter] << '\t';
    }
    cout << '\n';
    if (k == 0)
    {
        if(num_in[0] != 1)
        {
            cout << -1;
        }
        else{
            cout << 1;
        }
    }else{
        for(counter = 1 ; counter <= max ;counter++){
            for (counter1 = 0 ; counter1 < n ;counter1++){
                if(counter >= num_in[counter1]){
                    num_res[counter-1]++ ;
                }
            }
        }

        for (counter = 1 ; counter <= max ;counter++){
            if(num_res[counter-1] == k){
                cout << counter;
                faild = false;
                break;
            }
        }

        if(faild){
            cout << -1;
        }
    }
    return 0 ;
}
    