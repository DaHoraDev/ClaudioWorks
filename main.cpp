#include <iostream>

#define verde "\x1b[32m"
#define vermelho "\x1b[31m"
#define clean "\x1b[0m"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    bool teste=true;
    int tam;
    int i=0;
    int j=0;
    string cadeia;

    cout<<"Digite uma cadeia: "; cin>>cadeia;

    tam = cadeia.size(); /*Verifica o tamanho da string*/

    /*Testa se a primeira posição da string é igual a 1 (equivalente a q0 -> q1)*/
    if(cadeia[0] == '1'){
        cout<<verde<<cadeia[i]<<clean<<" ";
    }else{
        cout<<vermelho<<cadeia[i]<<clean<<" ";
    }
    i++;
    if(tam > 2){
        while(cadeia[i] !=  || teste){
            j = i + 1;

            if(cadeia[i] == '2'){
                cout<<verde<<cadeia[i]<<clean<<" ";

                if(cadeia[j] == '3'){
                    cout<<verde<<cadeia[j]<<clean<<" ";
                }else{
                    cout<<vermelho<<cadeia[j]<<clean<<" ";
                    teste = false;
                }

            }else if(cadeia[i] == '0'){
                cout<<verde<<cadeia[i]<<clean<<" ";

                if(cadeia[j] == '1'){
                    cout<<verde<<cadeia[j]<<clean<<" ";
                }else{
                    cout<<vermelho<<cadeia[j]<<clean<<" ";
                    teste=false;
                }

            }else{
                cout<<vermelho<<cadeia[i]<<clean<<" ";
                teste = false;
            }

            i+=2;

        }
    }

    if(teste){
        cout<<verde<<"\nCadeia aceita"<<endl;
    }else{
        cout<<vermelho<<"\nCadeia não aceita"<<endl;
    }

    return 0;
}

