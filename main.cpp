#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int ChangeMaking(std::vector<int>& D, int n){

    int ii, jj;

    int Temp;

    int F[n+1];

    F[0] = 0;

    for(ii=1; ii<=n; ii++){
        Temp = INT_MAX;

        jj = 0;

            while((jj<D.size()) && (ii>=D[jj])){
                Temp = min(F[ii-D[jj]], Temp);

                jj ++;

            }

        F[ii] = Temp + 1;

    }

    return F[n];
}

int main(){

    cout << "Lista 06 - Questao 01 - Letra d" << endl;

    std::vector <int> VetorMoedas = {1, 3, 4};
    int Troco = 2;

    cout << "Resultado:" << ChangeMaking(VetorMoedas, Troco) << endl;
}
