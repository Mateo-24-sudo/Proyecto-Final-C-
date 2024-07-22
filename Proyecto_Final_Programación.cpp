#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Multa {
    string nombreInfractor;
    string descripcion;
    string fecha;
    double monto;
};
void registrarMulta(const Multa& multa) {
    ofstream archivo("C:\\RegistroDeMultas\\" + multa.fecha + "_" + multa.nombreInfractor + ".txt");
    archivo << "Nombre del Infractor: " << multa.nombreInfractor << endl;
    archivo << "Descripción: " << multa.descripcion << endl;
    archivo << "Fecha: " << multa.fecha << endl;
    archivo << "Monto: " << multa.monto << endl;
    archivo.close();
}
void mostrarMultas() {
    cout << "Funcionalidad para mostrar multas aún no implementada." << endl;
    // Aquí se podría agregar la lógica para leer archivos y mostrar multas.
}

void modificarMulta() {
    cout << "Funcionalidad para modificar multas aún no implementada." << endl;
    // Aquí se podría agregar la lógica para modificar archivos existentes.
}

void menu() {
    int opcion;
    Multa nuevaMulta;

    cout << "\nMenú de Gestión de Multas" << endl;
    cout << "1. Registrar Multa" << endl;
    cout << "2. Mostrar Multas" << endl;
    cout << "3. Modificar Multa" << endl;
    cout << "4. Salir" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    cin.ignore();  // Para limpiar el buffer de entrada

    if (opcion == 1) {
        cout << "Ingrese el nombre del infractor: ";
        getline(cin, nuevaMulta.nombreInfractor);
        cout << "Ingrese la descripción de la multa: ";
        getline(cin, nuevaMulta.descripcion);
        cout << "Ingrese la fecha (DDMMYYYY): ";
        getline(cin, nuevaMulta.fecha);
        cout << "Ingrese el monto de la multa: ";
        cin >> nuevaMulta.monto;
        cin.ignore();  // Para limpiar el buffer de entrada
        registrarMulta(nuevaMulta);
    } else if (opcion == 2) {
        mostrarMultas();
    } else if (opcion == 3) {
        modificarMulta();
    } else if (opcion == 4) {
        cout << "Saliendo del programa." << endl;
    } else {
        cout << "Opción no válida. Intente de nuevo." << endl;
    }
}
int main() {
    menu();
    Multa nuevaMulta;
    cout << "Ingrese el nombre del infractor: ";
    getline(cin, nuevaMulta.nombreInfractor);
    cout << "Ingrese la descripción de la multa: ";
    getline(cin, nuevaMulta.descripcion);
    cout << "Ingrese la fecha (DDMMYYYY): ";
    getline(cin, nuevaMulta.fecha);
    cout << "Ingrese el monto de la multa: ";
    cin >> nuevaMulta.monto;

    registrarMulta(nuevaMulta);
    cout << "Multa registrada con éxito." << endl;

    return 0;
}
