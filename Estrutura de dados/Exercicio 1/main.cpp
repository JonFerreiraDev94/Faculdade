#include <iostream>
using namespace std;
#define QTDNC 2
typedef struct {
 float real, imaginaria;
} numcomplex;
void leNumComplex(numcomplex *nc) {
 cout << endl << "Parte Real: ";
 cin >> nc->real;
 cout << endl << "Parte Imaginaria: ";
 cin >> nc->imaginaria;
}

void escreveNumComplex(numcomplex nc) {
 cout << endl << "Numero Complexo: ";
 if ((nc.real != 0) || (nc.imaginaria == 0)) {
 cout << nc.real;
 }
 if (nc.imaginaria != 0) {
 if ((nc.imaginaria > 0) && (nc.real != 0)) {
 cout << "+" << nc.imaginaria;
 } else {
 cout << nc.imaginaria;
 }
 cout << "i";
 }
 cout << endl;
}
//somando os numeros complexos
numcomplex somaNumComplex(numcomplex a, numcomplex b) {
    numcomplex aux_soma;

    aux_soma.real = a.real + b.real;
    aux_soma.imaginaria = a.imaginaria+ b.imaginaria;

    return aux_soma;
}
//produto dos numeros
numcomplex produtoNumComplex(numcomplex a, numcomplex b) {
    numcomplex aux_mult;

    aux_mult.real = a.real * b.real - a.imaginaria * b.imaginaria;
    aux_mult.imaginaria = a.real * b.imaginaria + a.imaginaria * b.real;

    return aux_mult;
}
//verificando a igualdade dos dois numeros
bool igualdadecomplex (numcomplex a, numcomplex b){
    if((a.real == b.real)&& (a.imaginaria == b.imaginaria)){
        return true;
    }else{
        return false;
    }

}
//Oposto de apenas um número
numcomplex opostoNumComplex(numcomplex a){
    numcomplex aux_op;
    aux_op. real = a.real * -1;
    aux_op.imaginaria = a.imaginaria * -1;
    return aux_op;
}
//Conjugado
numcomplex conjugadoNumComplex(numcomplex a){
    numcomplex aux_conj;
    aux_conj.real = a.real;
    aux_conj.imaginaria = a.imaginaria * -1;
    return aux_conj;
}
int main()
{
 int i;
 numcomplex vetorNC[QTDNC];
 numcomplex sNC, pNC, oPC, cNC;
 for (i=0; i<QTDNC; i++) {
 cout << endl << "====================";
 cout << endl << i+1 << "o Numero Complexo";
 cout << endl << "====================" << endl;
 leNumComplex(&vetorNC[i]);
 escreveNumComplex(vetorNC[i]);
 }
 cout << endl << "====================" << endl;
 cout << endl << "====================";
 cout << endl << "Soma";
 cout << endl << "====================" << endl;
 sNC = somaNumComplex(vetorNC[0], vetorNC[1]);
 escreveNumComplex(sNC);
 cout << endl << "====================" << endl;
 cout << endl << "====================";
 cout << endl << "Produto";
 cout << endl << "====================" << endl;
 pNC = produtoNumComplex(vetorNC[0], vetorNC[1]);
 escreveNumComplex(pNC);

 cout << endl << "====================" << endl;
 cout << endl << "====================" << endl;
 cout << endl << "Igualdade";
 cout << endl << "====================" << endl;
 if(igualdadecomplex (vetorNC[0], vetorNC[1])){
    cout << "OS numeros complexos são iguais!";
 }else{
    cout <<"Sem igualdade";
 }
 cout << endl << "====================" << endl;
 cout << endl << "====================";
 cout << endl << "Oposto";
 cout << endl << "====================" << endl;
 oPC = opostoNumComplex (vetorNC[0]);
 escreveNumComplex(oPC);

 cout << endl << "====================" << endl;
 cout << endl << "====================";
 cout << endl << "Conjugado";
 cout << endl << "====================" << endl;
 cNC = conjugadoNumComplex (vetorNC[0]);
 escreveNumComplex(cNC);

 return 0;
}
