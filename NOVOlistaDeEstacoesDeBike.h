#ifndef _lista_de_estacoes_de_bike_h_
#define _lista_de_estacoes_de_bike_h_
#include <iostream>
#include <string>
#include "EstacaoDeBike.h"
using namespace std;
class listaDeEstacoesDeBike{
private:
EstacaoDeBike* prim, aux; //Entende EstacadoDeBike como um nodo
public:
void AdicionarEstacao(int _ID, string _nome, int _latitude, int _longitude);{
if( prim != NULL){	
	aux = prim; 
	while(aux->prox != NULL){ //Percorre normalmente até o fim
		aux = aux->prox;
	} //Achou o fim porque prox = NULL
	EstacaoDeBike *temp; //Cria um nodo temporario
	temp = (EstacaoDeBike*)malloc(sizeof(EstacaoDeBike)); //Inicializa o nodo
	temp.set_ID(_ID);
	temp.set_nome(_nome);		//Seta os dados
	temp.set_latitude(_latitude);
	temp.set_longitude(_longitude);
	temp->prox = NULL; //Prox = NULL por ser no fim da lista
	aux->prox = temp;	
	cout << "Estacão adicionada." << endl;
}else{
	prim = (EstacaoDeBike*)malloc(sizeof(EstacaoDeBike)); 
	prim.set_ID(_ID);
	prim.set_nome(_nome);		
	prim.set_latitude(_latitude);
	prim.set_longitude(_longitude);
	prim->prox = NULL; 
	cout << "Estacão adicionada." << endl;
}
#endif	

