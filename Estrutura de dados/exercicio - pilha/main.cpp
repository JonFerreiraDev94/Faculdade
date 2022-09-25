#include <iostream>
using namespace std;
#define MAX 6
#define MAXP1 4
#define MAXP2 4
typedef float TInfo;
typedef struct TPilha {
 TInfo elem[MAX];
 // de 0 ate MAXP1
 int topo1;
 // de MAX-MAXP2+1 ate MAX+1
 int topo2;
} TPilha;
void iniciaPilha(TPilha *p) {
 p->topo1 = 0;
 p->topo2 = MAX+1;
}
int inserePilha(TPilha *p, int qual, TInfo var) {
 if (qual == 1) {
 if ((p->topo1 == (p->topo2-1)) || (p->topo1 == MAXP1)) {
 return 0;
 } else {
 p->topo1 = p->topo1 + 1;
 p->elem[p->topo1-1] = var;
 return 1;
 }
 } else {
 if ((p->topo2 == (p->topo1+1)) || (p->topo2 == (MAX-MAXP2+1))) {
 return 0;
 } else {
 p->topo2 = p->topo2 - 1;
 p->elem[p->topo2-1] = var;
 return 1;
 }
 }
}
int retiraPilha(TPilha *p, int qual, TInfo *var) {
    if (qual == 1) {
        if (p->topo1 == 0) {
            return 0;
        } else {
            *var = p->elem[p->topo1-1];
            p->topo1 = p->topo1 - 1;
            return 1;
        }
    } else {
        if (p->topo2 == MAX+1) {
            return 0;
        } else {
            *var = p->elem[p->topo2-1];
            p->topo2 = p->topo2 + 1;
            return 1;
        }
    }
}

int main() {
 TPilha pilha;
 TInfo v;
 cout << endl;
 iniciaPilha(&pilha);
 if (retiraPilha(&pilha, 1, &v)) {
 cout << "Valor retirado da pilha 1: " << v << endl;
 } else {
 cout << "Pilha 1 vazia." << endl;
 }
 if (retiraPilha(&pilha, 2, &v)) {
 cout << "Valor retirado da pilha 2: " << v << endl;
 } else {
 cout << "Pilha 2 vazia." << endl;
 }
 if (inserePilha(&pilha, 1, 10)) {
 cout << "Valor 10 inserido na pilha 1." << endl;
 } else {
 cout << "Pilha 1 cheia." << endl;
 }
  if (inserePilha(&pilha, 1, 11)) {
 cout << "Valor 11 inserido na pilha 1." << endl;
 } else {
 cout << "Pilha 1 cheia." << endl;
 }
 if (inserePilha(&pilha, 1, 12)) {
 cout << "Valor 12 inserido na pilha 1." << endl;
 } else {
 cout << "Pilha 1 cheia." << endl;
 }
 if (inserePilha(&pilha, 1, 13)) {
 cout << "Valor 13 inserido na pilha 1." << endl;
 } else {
 cout << "Pilha 1 cheia." << endl;
 }
 if (inserePilha(&pilha, 1, 14)) {
 cout << "Valor 14 inserido na pilha 1." << endl;
 } else {
 cout << "Pilha 1 cheia." << endl;
 }
 if (inserePilha(&pilha, 2, 20)) {
 cout << "Valor 20 inserido na pilha 2." << endl;
 } else {
 cout << "Pilha 2 cheia." << endl;
 }
 if (inserePilha(&pilha, 2, 21)) {
 cout << "Valor 21 inserido na pilha 2." << endl;
 } else {
 cout << "Pilha 2 cheia." << endl;
 }
 if (inserePilha(&pilha, 2, 22)) {
 cout << "Valor 22 inserido na pilha 2." << endl;
 } else {
 cout << "Pilha 2 cheia." << endl;
 }
 if (retiraPilha(&pilha, 1, &v)) {
 cout << "Valor retirado da pilha 1: " << v << endl;
 } else {
 cout << "Pilha 1 vazia." << endl;
 }
 if (inserePilha(&pilha, 2, 22)) {
 cout << "Valor 22 inserido na pilha 2." << endl;
 } else {
 cout << "Pilha 2 cheia." << endl;
 }
 if (retiraPilha(&pilha, 1, &v)) {
 cout << "Valor retirado da pilha 1: " << v << endl;
 } else {
 cout << "Pilha 1 vazia." << endl;
 }
 if (inserePilha(&pilha, 2, 23)) {
 cout << "Valor 23 inserido na pilha 2." << endl;
 } else {
 cout << "Pilha 2 cheia." << endl;
 }
 if (retiraPilha(&pilha, 1, &v)) {
 cout << "Valor retirado da pilha 1: " << v << endl;
 } else {
 cout << "Pilha 1 vazia." << endl;
 }
 if (inserePilha(&pilha, 2, 24)) {
 cout << "Valor 24 inserido na pilha 2." << endl;
 } else {
 cout << "Pilha 2 cheia." << endl;
 }
 if (retiraPilha(&pilha, 1, &v)) {
 cout << "Valor retirado da pilha 1: " << v << endl;
 } else {
 cout << "Pilha 1 vazia." << endl;
 }
 if (retiraPilha(&pilha, 1, &v)) {
 cout << "Valor retirado da pilha 1: " << v << endl;
 } else {
 cout << "Pilha 1 vazia." << endl;
 }
 if (retiraPilha(&pilha, 2, &v)) {
 cout << "Valor retirado da pilha 2: " << v << endl;
 } else {
 cout << "Pilha 2 vazia." << endl;
 }
}
