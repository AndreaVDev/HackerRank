#include <iostream>
#include <vector>

int main(){

    // numero di vettori di interi
    int size = 0;
 
    // numero di interrogazioni sui vettori di interi
    int query = 0;
    
    // contatore per inserire i dati nei vettori di interi
    int cnt = 0;

    // numero di array e numero di query
    std::cin>>size;
    std::cin>>query;


    // creo il vettore di vettori con l'input utente
    std::vector<std::vector<int> > a(size);


    while(cnt < size){
        
        // dimensione dei vettori di interi
        int dimension = 0;
        std::cin>>dimension;
        
         // riservo lo spazio per i vettori
         a[cnt].reserve(dimension);

        // riempio i vettori con input utente
        for(int i = 0; i < dimension; i++){
            int data = 0;
            std::cin>>data;
            // aggiundo a vettore in posizione cnt il dato inserito dall' utente
            a[cnt].push_back(data);
        }
//        for(auto i: a[cnt]){
//            std::cout<<i;
//        }

        cnt++;


    }
    int cnt1 = 0;
    // ciclo interrogazioni
    while(cnt1 < query)
    {
     // numero del vettore da interrogare
     int numVec = 0;
     // elemento del vettore da cercare
     int elmVec = 0;
     std::cin>>numVec;
     std::cin>>elmVec;
     std::cout<<a[numVec][elmVec]<<std::endl;
     ++cnt1;
    }

    return 0;
}
