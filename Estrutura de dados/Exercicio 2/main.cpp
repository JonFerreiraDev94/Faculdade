#include <iostream>
#include <locale.h>

using namespace std;

int somar_numero(int num){
    int resp;
    if(num == 1){
        return(1);

    }else{
        resp = num + somar_numero(num -1);
    }
    return resp;
}

int main()
{
    int n, somatoria;
    setlocale(LC_ALL, "");
    cout << "Digite um número:" << endl;
    cin >> n;
    somatoria = somar_numero(n);
    cout << "somatório de 1 até " << n << " = " <<somatoria;
    return 0;
}
