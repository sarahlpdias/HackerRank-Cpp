#include <iostream>
#include <sstream>
#include <vector>
#include <map>
using namespace std;

// Função para processar abertura de tag
void abertura(string linha, vector<string>& caminhoAtual, map<string, string>& atributos) {
    linha = linha.substr(1, linha.length() - 2); // Remove '<' e '>'

    stringstream ss(linha);
    string tagName;
    ss >> tagName; // Primeiro elemento é o nome da tag

    caminhoAtual.push_back(tagName); // Adiciona no caminho atual

    string atributo, igual, valor;
    while (ss >> atributo >> igual >> valor) { // Pega todos atributos da linha
        valor = valor.substr(1, valor.length() - 2); // Remove aspas do valor

        // Monta o caminho completo
        string caminhoCompleto;
        for (int i = 0; i < caminhoAtual.size(); i++) {
            if (i > 0) caminhoCompleto += ".";
            caminhoCompleto += caminhoAtual[i];
        }
        caminhoCompleto += "~" + atributo;

        atributos[caminhoCompleto] = valor; // Guarda no mapa
    }
}

// Função para processar fechamento de tag
void fechamento(vector<string>& caminhoAtual) {
    caminhoAtual.pop_back(); // Remove última tag do caminho
}

// Função para responder as queries
void responderQueries(int q, map<string, string>& atributos) {
    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;

        if (atributos.find(query) != atributos.end()) {
            cout << atributos[query] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }
}

// Função principal
int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore(); // Ignora o '\n' depois de ler n e q

    vector<string> caminhoAtual; // Guarda o caminho de tags abertas
    map<string, string> atributos; // Guarda caminho~atributo -> valor

    for (int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);

        if (linha.substr(1, 1) == "/") {
            // Se é fechamento de tag
            fechamento(caminhoAtual);
        } else {
            // Se é abertura de tag
            abertura(linha, caminhoAtual, atributos);
        }
    }

    responderQueries(q, atributos);

    return 0;
}
