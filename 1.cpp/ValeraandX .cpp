#include <iostream>

using namespace std; 


int main(void){
   int i, j ;
   short n ; 
   cin >> n ;
   bool is_x = true;
   bool other_units = true ;

   char square_unit[n][n];
   char first_element ;
   char second_element ;
   for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
           cin >> square_unit[i][j];
        }
   }

   first_element = square_unit[0][0];
   second_element = square_unit[0][1];

   for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            if(i == j  || i == (n-1-j)){
                if (square_unit[i][j] != first_element){
                    is_x = false ;
                }
            }
            else{
                if(square_unit[i][j] == first_element || square_unit[i][j] != second_element){
                    other_units = false;
                }
            }
        }
   }
   
   if(is_x == true && other_units == true){
        cout << "YES";
   }
   else {
        cout << "NO";
   }
   

   return 0 ;
}
