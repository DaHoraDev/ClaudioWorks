#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    char v[100];
    int i = 0;
    int j = 0;

    cout<<"Expressão regular => 1(23)*(01)* "<<endl;
    cout<<"Digite uma cadeia: "; cin>>v;

    for(int c = 0; c < 100; c++){
        if(v[c] != ' '){
            v[c] = '#';
        }
    }

    //q0 -> q1
    if(v[i] == '1'){
        cout<<v[i]<<" ->aceito"<<endl;
    }else{
        cout<<v[i]<<" ->recusado"<<endl;
    }

    while(v[i] != '#'){

        i++;
        j = i+1;

        //caso q1 -> q2
        do{

            if (v[i] == '2'){
                cout << v[i] << " ->aceito" << endl;

                if (v[j] == '3') {
                    cout << v[j] << " ->aceito" << endl;
                } else {
                    cout << v[j] << " ->recusado" << endl;
                }
            }

        }while(v[i] == '2' || v[j] == '3');

        //Caso q1 -> q3
        do {

            if (v[i] == '0') {
                cout << v[i] << " ->aceito" << endl;
                if (v[j] == '1') {
                    cout << v[j] << " ->aceito" << endl;
                } else {
                    cout << v[j] << " ->recusado" << endl;
                }
            }

        }while(v[i] == '0' || v[j] == '1');
    }

    return 0;
}

