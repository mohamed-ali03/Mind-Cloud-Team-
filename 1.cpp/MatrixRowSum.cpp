#include <iostream> 

using namespace std ;
int main (void){
    int N ,M ;
    cin >> N ;
    cin >> M ;
    int arr[M];
    int Matrix[N][M];
    int sum ;

    for (int i = 0 ; i < N ; i++ )
    {
        for (int j = 0 ; j < M ; j++ ){
            cin >> Matrix[i][j];
        }
    }

    for (int i = 0 ; i < N ; i++ )
    {
        sum = 0 ;
        for (int j = 0 ; j < M ; j++ ){
            sum +=Matrix[i][j];
        }
        cout << sum <<endl ;
    }
    
    return 0 ;
}