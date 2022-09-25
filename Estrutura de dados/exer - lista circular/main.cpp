#include <iostream>
#include <malloc.h>

using namespace std;

typedef char TInfo;
typedef struct no {
no *esq;
TInfo info;
no *dir;
} TNo;
typedef TNo *PNo;

void criaListaC(PNo *l)
{
*l = NULL;
}
void insereListaC(PNo *l, TInfo dado)
{
PNo p;
p = (PNo)malloc(sizeof(TNo));
p->info = dado;
if (*l) {
p->dir = *l;
p->esq = (*l)->esq;
(*l)->esq->dir = p;
(*l)->esq = p;
} else {
p->dir = p;
p->esq = p;
}
*l = p;
}

int eliminaListaC(PNo *l, TInfo *dado)
{
PNo p;
    if (*l)
    {
        p = *l;
        if (p->dir == p)
        {
            *l = NULL;
        }
        else
        {
            (*l)->dir->esq = p->esq;
            (*l)->esq->dir = p->dir;
            *l = p->dir;

        }
    *dado = p->info;
    free(p);
    return 1;
    }
    else
    {

        return 0;
    }
}

void mostraListaCDir(PNo l)
{
PNo p;
cout << "Lista -> :";
if (l) {
p = l;
do {
cout << " " << p->info;
p = p->dir;
} while (p != l);
}
}
void mostraListaCEsq(PNo l)
{
PNo p;
cout << "Lista <- :";
if (l) {
p = l;
do {
cout << " " << p->info;
p = p->esq;
} while (p != l);
}
}
void mostraListaC(PNo l)
{
mostraListaCDir(l);
cout << endl;
mostraListaCEsq(l);
}
void terminaListaC(PNo *l)
{
TInfo v;
while (eliminaListaC(l, &v));
}

int main()
{
PNo lista;
TInfo valor;
cout << endl << "Criando Lista...";
criaListaC(&lista);
cout << endl << "Criada!" << endl;
cout << endl << "Inserindo Lista...";
insereListaC(&lista, 'D');
insereListaC(&lista, 'C');
insereListaC(&lista, 'B');
insereListaC(&lista, 'A');
cout << endl << "Inserido!" << endl;
cout << endl << "Mostrando Lista..." << endl;
mostraListaC(lista);
cout << endl << "Mostrado!" << endl;
cout << endl << "Excluindo Lista..." << endl;
if (eliminaListaC(&lista, &valor)) {
cout << "Valor: " << valor;
} else {
cout << "Lista Vazia!";
}
cout << endl << "Excluido!" << endl;
cout << endl << "Mostrando Lista..." << endl;
mostraListaC(lista);
cout << endl << "Mostrado!" << endl;
cout << endl << "Terminando Lista...";
terminaListaC(&lista);
cout << endl << "Terminado!" << endl;
cout << endl << "Mostrando Lista..." << endl;
mostraListaC(lista);
cout << endl << "Mostrado!" << endl;
cout << endl << "*****" << endl;
return 0;
}
