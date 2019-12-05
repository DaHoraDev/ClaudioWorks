#include <iostream>

using namespace std;

int main() {

    char v[100] = {'0','1','2','3','3','2','3','2','3','#'};

    int i = 0;
    int j = 0;

    //Bloco para testar somente a posição 0 se é igual 1.
    if(v[i] == '1'){
        cout<<v[i]<<" ->aceito"<<endl;
    }else{
        cout<<v[i]<<" ->recusado"<<endl;
    }

    //Bloco para testar o restante.
    while(v[i] != '#') {
        i++; // i = 1
        j = i + 1; // j = 2

        //caso 0 ou 2.
        if (v[i] == '2' || v[i] == '0') {

            //caso 2.
            if (v[i] == '2') {
                cout << v[i] << " ->aceito"<<endl;

                if(v[j] == '3'){
                    cout << v[j] << " ->aceito"<<endl;
                }else{
                    cout << v[j] << " ->recusado"<<endl;
                }

            }

            //caso 0.
            if (v[i] == '0') {
                cout << v[i] << " ->aceito"<<endl;

                if(v[j] == '1'){
                    cout << v[j] << " ->aceito"<<endl;
                }else{
                    cout << v[j] << " ->recusado"<<endl;
                }

            }
        }
    }

    return 0;
}
