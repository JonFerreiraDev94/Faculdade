#include <iostream>
using namespace std;
#define DEBUG 0
#define MAX 100
typedef int TChave;
typedef char TInfo[255];
typedef struct
{
    TChave chave;
    TInfo info;
} TDado;
typedef TDado TVetor[MAX];
void mostra(TVetor v, int n)
{
    int i;
    if (DEBUG)
    {
        cout << endl << "----------" << endl;
        for (i=0; i<n; i++)
        {
            cout << i << ": " << v[i].chave << " " << v[i].info << endl;
        }
        cout << "----------";
    }
}
void ordena(TVetor v, int n)
{
    int i, j;
    TDado x;
    mostra(v, n);
    for (i=1; i<n; i++)
    {
        for (j=0; j < i; j++)
        {
            if (v[i].chave > v[j].chave)
            {
                x = v[i];
                v[i] = v[j];
                v[j] = x;
            }
            mostra(v, n);
        }
    }
    mostra(v, n);
}

int main()
{
    FILE *arquivo;
    TVetor v;
    int n, i;
    cout << endl << "Abrindo Arquivo...";
    arquivo = fopen("C:\\Users\\Jon\\Documents\\Documents\\ITE- Sistemas de Informação\\Estrutura de dados\\decrescente\\bin\\Debug\\ordenar.txt", "rt");
    if (!arquivo)
    {
        cout << endl << "Erro!" << endl;
        return 1;
    }
    cout << endl << "Arquivo Aberto!" << endl;
    cout << endl << "Carregando Dados...";
    i = 0;
    while (!feof(arquivo) && (i<MAX))
    {
        fscanf(arquivo, "%d,%s", &v[i].chave, v[i].info);
        i++;
    }
    n = i;
    if (!feof(arquivo))
    {
        cout << endl << "Erro!" << endl;
        return 2;
    }
    cout << endl << "Dados Carregados!" << endl;
    cout << endl << "Fechando Arquivo...";
    fclose(arquivo);
    cout << endl << "Arquivo Fechado!" << endl;
    cout << endl << "Ordenando...";
    ordena(v, n);
    cout << endl << "Ordenado!" << endl;
    cout << endl << "Abrindo Arquivo...";
    arquivo = fopen("C:\\Users\\Jon\\Documents\\Documents\\ITE- Sistemas de Informação\\Estrutura de dados\\decrescente\\bin\\Debug\\ordenado.txt", "wt");
    if (!arquivo)
    {
        cout << endl << "Erro!" << endl;
        return 3;
    }
    cout << endl << "Arquivo Aberto!" << endl;
    cout << endl << "Armazenando Dados...";
    for (i=0; i<n; i++)
    {
        fprintf(arquivo, "%d,%s\n", v[i].chave, v[i].info);
    }
    cout << endl << "Dados Armazenados!" << endl;
    cout << endl << "Fechando Arquivo...";
    fclose(arquivo);
    cout << endl << "Arquivo Fechado!" << endl;
    return 0;
}
