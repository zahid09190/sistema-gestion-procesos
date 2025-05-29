#include <iostream>
#include <string>

using namespace std;

// Estructura para representar un proceso
struct Proceso {
    int id;
    string nombre;
    int prioridad;
    Proceso* siguiente;
};


// Clase para gestionar la lista enlazada de procesos
class GestorProcesos {
private:
    Proceso* cabeza;

public:
    GestorProcesos() {
        cabeza = nullptr;
    }

    // Agregar proceso al final de la lista
    void agregarProceso(int id, string nombre, int prioridad) {
        Proceso* nuevo = new Proceso{id, nombre, prioridad, nullptr};

        if (cabeza == nullptr) {
            cabeza = nuevo;
        } else {
            Proceso* temp = cabeza;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevo;
        }

        cout << "Proceso agregado: " << nombre << endl;
    }

    // Mostrar todos los procesos
    void mostrarProcesos() {
        Proceso* temp = cabeza;
        cout << "Lista de Procesos:\n";
        while (temp != nullptr) {
            cout << "ID: " << temp->id << ", Nombre: " << temp->nombre
                 << ", Prioridad: " << temp->prioridad << endl;
            temp = temp->siguiente;
        }
    }
};

// Función principal
int main() {
    GestorProcesos gestor;
    gestor.agregarProceso(1, "Compilar código", 2);
    gestor.agregarProceso(2, "Cargar archivos", 3);
    gestor.agregarProceso(3, "Guardar resultados", 1);

    gestor.mostrarProcesos();

    return 0;
}
