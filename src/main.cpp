#include <iostream>

using std::cout;
using std::endl;


int main(int argc, char *argv[]){

    cout<<"Nombre d'arguments : "<<argc<<endl;

    for(int i{0} ; i<argc ; i++){
        cout<<"Argument "<<i<<" : "<<argv[i]<<endl;
    }

    return argc == 3 ? EXIT_SUCCESS : EXIT_FAILURE;
}