#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    scanf("%d", &n);

    int arr[10];

    for (int i = 0; i< n ; i++) { //po aqui to fazendo um loop tranquilo até chegar no limite de n que coloquei e ele só vai incrementando até ele.
        scanf("%d", &arr[i]); //aqui ele só vai lendo os dados que fui colocando
    }

    for (int i = n - 1; i >= 0 ; i--){ // aqui ele faz o inverso do outro for, enquanto o outro vai incrementando, esse ele vai pegando os valores do último até o primeiro e aí printa na tela.
        printf("%d ", arr[i]);
    }

    return 0;
}
