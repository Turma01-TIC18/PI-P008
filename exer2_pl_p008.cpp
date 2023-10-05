#include <iostream>
#include <cstdlib>  
#include <ctime> 
#include <map>   

using namespace std;

int main(){

    /*Array de tamanho n*/
    const int n = 100;
    int array[n];

    int maiorRepeticao = 0;
    int num1MaiorRepeticao = 0;

    srand(static_cast<unsigned int>(time(0)));
    map<int, int> contador;

    for (int i = 0; i < n; i++){
        array[i] = 1 + rand() % 20;
        contador[array[i]]++;

    }
   
    cout << "Valores do array:" << endl;
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";

    }

    cout << "Contagem de repeticoes:" << endl;

    for (const auto& par : contador){
        cout << "Valor " << par.first << ": " << par.second << " vezes" << endl;
    }
    
    for (const auto& par : contador){

        if (par.second > maiorRepeticao){
            maiorRepeticao = par.second;
            num1MaiorRepeticao = par.first;
        }
    }

    cout << "Numero com maior repeticao foi o: " << 
    num1MaiorRepeticao << " com " << maiorRepeticao << " aparicoes" << endl;

    cout << endl;

return 0;
}
