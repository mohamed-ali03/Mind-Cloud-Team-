#include <iostream>


using namespace std ; 


int main (void){
    short n , m ;
    char President ;
    short counter_1 , counter_2,counter_3,counter_4;
    bool flag = false ;

    cin >> n >> m >> President;
    char deputy [n][m];
    bool Is_President[n][m];
    int num_deputy = 0 ;


    for (counter_1 = 0 ; counter_1 < n ; counter_1++){
        for (counter_2 = 0 ; counter_2 < m ; counter_2++){
            cin >> deputy[counter_1][counter_2];
        }
    }


    for (counter_1 = 0 ; counter_1 < n ; counter_1++){
        for (counter_2 = 0 ; counter_2 < m ; counter_2++){
            if(deputy[counter_1][counter_2] == President){
                Is_President[counter_1][counter_2] = true ;
            }
            else {
                Is_President[counter_1][counter_2] = false ;
            }
        }
    }

    for (counter_1 = 0 ; counter_1 < n ; counter_1++){
        for (counter_2 = 0 ; counter_2 < m ; counter_2++){
            if(Is_President[counter_1][counter_2]){
                for(counter_3 = 0 ; counter_3 < n ; counter_3++){
                    if(deputy[counter_3][counter_2] != deputy[counter_1][counter_2]){
                        for(counter_4 = 0 ; counter_4 < n ; counter_4++){
                            if(!Is_President[counter_4][counter_2]){
                                if(deputy[counter_3][counter_2] != deputy[counter_4][counter_2]
                                && counter_3 != counter_4 
                                && deputy[counter_3][counter_2] != '.'){
                                    num_deputy++;
                                    if(num_deputy >= n-1){
                                        flag = true;
                                    }
                                }
                            }
                            if (flag){
                                break;
                            }
                        }
                    }
                    if (flag){
                        break;
                    }
                }
            }
            if (flag){
                break;
            }
        }
        if (flag){
            break;
        }
    }

    cout << num_deputy;

    


    
    return 0 ;
}

