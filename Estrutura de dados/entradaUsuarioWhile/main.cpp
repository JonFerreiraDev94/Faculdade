#include <iostream>

using namespace std;

int main()
{
    char usuario[5] = {};
    cout << "Insira o usuário" << endl;
    cin >> usuario;
    cout<< "usuario: " << usuario << endl;
    cout << "Insira outro usuário" << endl;
    cin >> usuario;
    cout<< "usuario: " << usuario.sizeof << endl;
    for(int i=0; i < usuario; i++){
        cout << usuario[i];
    }

    return 0;
}
