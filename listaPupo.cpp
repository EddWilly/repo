#include <iostream>
#include <list>
#include <iterator>
#include <locale.h>

using namespace std;

void adicionarFuncionarios(list<string> *lista, int tam){
	string nome;
	
	for(int i=1;i<=tam;i++){
	   	cout<<"Nome do "<<i<<"º funcionario: ";
	   	cin>>nome;
		lista->push_back(nome);
	}	
}

void imprimirFuncionarios(list<string> lista){
	if(lista.empty()){
		cout << "A lista está vazia.\n";
		return;
	}
	
	std::list<string>::iterator it;
	
	it = lista.begin();
	
	do{
		cout<<*it<<"\n";
		it++;
	}while(it!=lista.end());
	
	
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
    cout << "Quantos funcionarios serao cadastrados? ";
    int tam;
    
    cin >> tam;
    
    list <string> lista;
    
    cout<<"\nLista antes de adicionar os funcionários...\n\n";
    imprimirFuncionarios(lista);
    cout<<"\n\n";
    
    adicionarFuncionarios(&lista,tam);
    
    cout<<"\nLista na ordem de cadastro:\n";
    imprimirFuncionarios(lista);
    cout<<"\n\n";
    
    cout<<"Ordenando a lista...\n\n";
    lista.sort();    
    
    imprimirFuncionarios(lista);
    
    cout<<"\n\nLista reversa...\n\n";
    lista.reverse();
    
    imprimirFuncionarios(lista);
    
    cout<<"\n\nNúmero de funcionários da lista: "<< lista.size();
    
    
    
    return 0;       
}