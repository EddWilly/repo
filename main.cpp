#include <iostream>
#include <cstdlib>
#include <string>
#include <list> 
#include <iterator> 
using namespace std;

/*
 * 
 */

/*void print_list(const list<string>& funcionarios){
    list<string>::const_iterator elemento;
    if(funcionarios.empty())
    {
        
    }
    
}*/

int main() {
    
    cout << "Quantos funcionários serão cadastrados? " << endl << "R: ";
    int qtdFuncionarios;
    
    cin >> qtdFuncionarios;
    list <string> funcionarios;
    string nome;
    for(int i = 0; i < qtdFuncionarios; i++)
    {
        cout << "Insira o funcionario " << i+1 << ": ";
        cin >> nome;
        funcionarios.push_back(nome);       
    }
    
    int i = 0;
    if(funcionarios.empty())
        cout << "Lista vazia";
    
    for(string x : funcionarios){
        cout << x << ", ";
        i++;
    }
    
    funcionarios.sort();
    
    for(string x : funcionarios){
        cout << x << ", ";
    }
    
    funcionarios.reverse();
    
    for(string x : funcionarios){
        cout << x << ", ";
    }
    
    cout << "Total de funcionários cadastrados: " << i;
    return 0;
}

