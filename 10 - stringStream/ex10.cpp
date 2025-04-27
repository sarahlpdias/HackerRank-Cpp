#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {   //vector <int> cria um vetor vazio para armazenar os valores, o parseInts recebe uma string de inteiros separados por vírgulas
	
    vector<int> result;
    stringstream ss(str); // a stringstream é tipo o cin, ele trata a string como um fluxo de dado e trata de forma mais estruturada

    int num; 
    char ch;

    

    //agora é criar um loop para pegar os valores sa stringstream

    while (ss >> num){

        result.push_back(num); //o push_back ele pega o número coloca no vetor que foi criado
        ss >> ch; // pra ler a vírgula
    }

    return result ;

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