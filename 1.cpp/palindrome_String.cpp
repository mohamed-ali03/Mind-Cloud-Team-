// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main() {
    int n ;
    cin >> n ;
    vector<char> word(n)  ;
    vector<char> word_temp(n)  ;
    vector<char> word_rev(n)  ;

    for (int i = 0 ; i < n ; i++ ){
        cin >> word.at(i) ;
    }

    word_temp = word ;
    reverse(word.begin() , word.end()) ;
    word_rev = word ;

    if (word_temp == word_rev){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0 ;
}