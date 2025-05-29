//  Idea de la estructura "Nodo"
//  Un "Nodo" es como una cajita que guarda información de un proceso
//  Tiene:
//      -   ID del proceso (un número)
//      -   Nombre del proceso (texto)
//      -   Prioridad (qué tan importante es el proceso)
//      -   Un "apuntador" a la siguiente cajita (Nodo)

//  Idea de la estructura "Lista Enlazada"
//  La "Lista Enlazada" es como una cadena de estas cajitas (Nodos)
//  Tiene:
//      -   Un "apuntador" a la primera cajita (cabeza)

//  Función para agregar un nuevo proceso a la lista
//  Le damos la lista, el ID, el nombre y la prioridad del proceso
Insertar_Proceso (lista, id_proceso, nombre_proceso, prioridad_proceso):
    //  Creamos una nueva cajita (Nodo)
    nuevo_nodo = crear_nodo()
    //  Guardamos la info del proceso en la cajita
    nuevo_nodo.id = id_proceso
    nuevo_nodo.nombre = nombre_proceso
    nuevo_nodo.prioridad = prioridad_proceso
    nuevo_nodo.siguiente = nada  //  Aún no apunta a otra cajita
  
