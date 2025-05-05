#include <iostream>
#include <string>
using namespace std;

int main() {

    string a, b;
    cin >> a >> b ; 

    int tamanho1 = a.size(); //tamanho da string
    int tamanho2 = b.size();

    string resultado = a + b ; //concatenação

    char resultado3 = a[0]; // acessa e troca o primeiro caractere
    char resultado4 = b[0];

    a[0]=resultado4;
    b[0]=resultado3;

    cout << tamanho1 << " " << tamanho2 << endl;
    cout << resultado << endl;
    cout << a << " " << b << endl;

  
    return 0;
}