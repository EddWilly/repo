#include <iostream>
#include <cstdlib>
#include <string>
#include <list> 
#include <iterator> 
using namespace std;

/*
 * 
 */

//FUNÇÃO PARA IMPRIMIR ITENS DA LIST
void print_list(const list<string>& funcionarios){
    for(string x : funcionarios){
        cout << x << ", ";
        i++;
    }
    
}

int main() {
    //RECEBE A QUANTIDADE DE FUNCIONÁRIOS A SEREM ADICIONADOS
    cout << "Quantos funcionários serão cadastrados? " << endl << "R: ";
    int qtdFuncionarios;
    cin >> qtdFuncionarios;
    //INICIALIZA A LIST
    list <string> funcionarios;
    //A VARIÁVEL 'NOME' VAI SERVIR DE RECIPIENTE PROS NOMES DOS FUNCIONÁRIOS
    string nome;
    //LAÇO PARA INSERIR FUNCIONÁRIOS À LISTA
    for(int i = 0; i < qtdFuncionarios; i++)
    {
        cout << "Insira o funcionario " << i+1 << ": ";
        cin >> nome;
        funcionarios.push_back(nome);       
    }
    
    //A VARIÁVEL I SERVE PARA CONTAR QUANTOS FUNCIONÁRIOS FORAM CADASTRADOS
    int i = 0;
    
    //VERIFICA SE A LISTA ESTÁ VAZIA E AVISA SE ESTIVER
    if(funcionarios.empty())
        cout << "Lista vazia";
    
   //IMPRIME LISTA
   print_list();
   funcionarios.sort();
   print_list();
   funcionarios.reverse();
   print_list();
  
    cout << "Total de funcionários cadastrados: " << i;
    return 0;
}

