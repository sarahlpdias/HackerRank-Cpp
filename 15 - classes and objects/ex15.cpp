#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {

    private:
        vector<int> scores; //um vetor para armazenar as notas

    public:
        void input(){   //função pra ler as notas
            int nota;
            for ( int i = 0; i<5; i++){
                cin >> nota;
                scores.push_back(nota); //armazena a nota no vetor
            }

        }

        int calcularnotas(){
            int soma =0;
            for(int i =0;i < scores.size(); i++){
                soma += scores[i];

            }

            return soma;
        }

};

int main() {
    int n;
    cin >> n;

    vector<Student> estudantes(n);

    for ( int i=0; i < n; i++){
        estudantes[i].input();
    }


    int nota_aluna = estudantes[0].calcularnotas();

    int contador = 0;

    for (int i =1; i < n; i++){
        int nota_estudante = estudantes[i].calcularnotas();
        if (nota_estudante > nota_aluna){
            contador ++;
        }
    }

    cout << contador << endl;
    return 0;A
}