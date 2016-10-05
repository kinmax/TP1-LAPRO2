#ifndef _estacao_de_bike_h_
#define _estacao_de_bike_h_
#include <iostream>
#include <string>
using namespace std;
class EstacaoDeBike{
private:
int ID;
string nome;
float latitude;
float longitude;
EstacaoDeBike* prox;

public:
EstacaoDeBike();
int get_ID();
string get_nome();
float get_latitude();
float get_longitude();
void set_ID(int _ID);
void set_nome(string _nome);
void set_latitude(float _latitude);
void set_longitude(float _longitude);
void set_prox(EstacaoDeBike obj);
EstacaoDeBike get_prox();
};
#endif
