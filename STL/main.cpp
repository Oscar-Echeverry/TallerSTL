#include <iostream>
#include <array>
#include <vector>
#include <list>

using namespace std;

int main() {

    array<int, 4> puestos = {2, 4, 6, 8};

    puestos[2] = 7;

    int suma = 0;

    cout << "Puestos: ";

    for (array<int, 4>::iterator it = puestos.begin(); it != puestos.end(); ++it) {
        cout << *it << " ";
        suma = suma + *it;
    }

    cout << "| suma = " << suma << endl;


    vector<int> mediciones = {10, 20, 30};

    mediciones.push_back(40);
    mediciones.insert(mediciones.begin() + 1, 15);
    mediciones.erase(mediciones.begin() + 2);

    cout << "Mediciones: ";

    for (int i = 0; i < mediciones.size(); i++) {
        cout << mediciones[i] << " ";
    }

    cout << "| size = " << mediciones.size() << endl;
    cout << "capacity = " << mediciones.capacity() << endl;


    list<int> turnos = {101, 103, 105};

    list<int>::iterator it = turnos.begin();
    ++it;

    turnos.insert(it, 102);
    turnos.remove(105);

    cout << "Turnos: ";

    for (list<int>::iterator i = turnos.begin(); i != turnos.end(); ++i) {
        cout << *i << " ";
    }

    cout << endl;

    return 0;
}
