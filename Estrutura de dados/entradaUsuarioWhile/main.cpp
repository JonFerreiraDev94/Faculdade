#include <iostream>

using namespace std;

int main()
{
    char usuario[5] = {};
    cout << "Insira o usu�rio" << endl;
    cin >> usuario;
    cout<< "usuario: " << usuario << endl;
    cout << "Insira outro usu�rio" << endl;
    cin >> usuario;
    cout<< "usuario: " << usuario.sizeof << endl;
    for(int i=0; i < usuario; i++){
        cout << usuario[i];
    }

    return 0;
}
