#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
   
    vector<int> v;
    
 
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        v.push_back(el);
    }
    
  
    int remover;
    cin >> remover;
    
  
    v.erase(v.begin() + remover - 1);
    
 
    int inicio, fim;
    cin >> inicio >> fim;
    
 
    v.erase(v.begin() + inicio - 1, v.begin() + fim - 1);
    
 
    cout << v.size() << endl;
    
 
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}