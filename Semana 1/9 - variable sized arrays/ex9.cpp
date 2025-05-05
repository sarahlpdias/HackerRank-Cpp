#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n, q;
    scanf ("%d %d", &n, &q);
    vector<vector<int>> dados(n);

    for (int i = 0; i < n; i++){
        int k; // é o tamanho do meu array
        scanf("%d", &k);

        vector<int> linha(k); //aqui to criando um vetor com o espaço k para armazenar os elementos

        for (int j = 0; j < k; j++){ //aqui eu to pegando os elementos
            scanf("%d", &linha[j]);
        }

        dados[i] = linha;
    }


    for (int i = 0; i < q; i++){ //aqui é um for pra ler os q, ou seja, ele acessar determinado elemento dentro do meu array
        int x, y ;
        scanf("%d %d", &x, &y);
        printf("%d\n", dados[x][y]);
    }
   
    return 0;
}