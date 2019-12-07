#include <iostream>

#define verde "\x1b[32m"
#define vermelho "\x1b[31m"
#define clean "\x1b[0m"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    /*Apresentação da expressão do grupo ao usuário*/
    cout<<"Expressão regular => 1(23)*(01)* "<<endl;
    /*Variável que armazenará a cadeia digitada pelo usuário*/
    string cadeia;
    cout<<"Digite uma cadeia: ";
    cin>>cadeia;

    /*Verifica o tamanho da string*/
    int tam;
    tam = cadeia.size();
    cout<<"Tamanho: "<<tam<<"\n\n";

    /*Controle de indíces do vetor (atual e sucessor a este)*/
    int i=0;
    int j=0;

    /*Se q0 -> q1 é igual a 1*/
    if(cadeia[0] == '1'){
        cout<<verde<<cadeia[i]<<clean<<" ";
    }else{
        cout<<vermelho<<cadeia[i]<<clean<<" ";
    }

    /*Controle de parada caso haja algum erro*/
    bool teste = true;

    /*Emula o primeiro estágio final q1*/
    if(tam > 1){

        /*pula para a posição 1 do vetor*/
        i++;

        /*Se q1 -> q2, então v[i] = 2*/
        if(cadeia[i] == '2'){

            cout<<verde<<cadeia[i]<<clean<<" ";

            while(cadeia[i] == '2'){

                j = i + 1;

                if(cadeia[j] == '3'){
                    cout<<verde<<cadeia[j]<<clean<<" ";
                }else{
                    cout<<vermelho<<cadeia[j]<<clean<<" ";
                    teste = false;
                }

                i+=2;

            }

        }

        /*Se q1 -> q3, então v[i] = 0*/
        if(cadeia[i] == '0'){

            cout<<verde<<cadeia[i]<<clean<<" ";

            while(cadeia[i] == '0'){

                j = i + 1;

                if(cadeia[j] == '1'){
                    cout<<verde<<cadeia[j]<<clean<<" ";
                }else{
                    cout<<vermelho<<cadeia[j]<<clean<<" ";
                    teste=false;
                }

                i+=2;

                if(cadeia[i] == '2'){
                    cout<<vermelho<<cadeia[i]<<clean<<" ";
                    teste = false;
                    break;
                }

            }

        }

        /*Se para q1 -> q2 for diferente de 2 e q1 -> q3 for diferente de 0*/
        if(cadeia[i] != '2' && cadeia[i] != '0'){
            cout<<vermelho<<cadeia[i]<<clean<<" ";
            teste = false;
        }

    }

    if(teste){
        cout<<verde<<"\nCadeia aceita"<<endl;
    }else{
        cout<<vermelho<<"\nCadeia não aceita"<<endl;
    }

    return 0;
}
