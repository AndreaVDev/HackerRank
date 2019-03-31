#include <iostream>
#include <array>

using namespace std;

int main()
{
    int dim = 0;
    cin>>dim;
    int intarr[dim];
    int data;

    for(int i = 0; i < dim; i++){
       cin>>data;
       intarr[i] = data;
    }
    for(int i = dim - 1; i >= 0; --i ){
        cout<<intarr[i]<< " ";
    }
    return 0;
}
