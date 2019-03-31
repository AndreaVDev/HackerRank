#include <sstream>
#include <vector>
#include <iostream>
using namespace std;
// leggi l' input
// se c'è una virgola
// salva i numeri precedenti alla virgola
// aggiungili al vettore
// continua a leggere la stringa

vector<int> parseInts(string str) {
   
   string tokenStr = ',';
   getline(cin, str);
   std::vector<char> v;
   std::std::vector<char> v1;
   for(auto i : str){
   	v.pushback(i);
   }
   for( int i = 0; i < v.size(); i++){
    v1.begin() = v.begin();
    v1.end() = v.end();
    if(v[i] == ','){
       v1.pushback(v.begin() - i)
   	}
   }
   for(int i = 0; i < str.size(); i++){
   	if( str)
   }
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
