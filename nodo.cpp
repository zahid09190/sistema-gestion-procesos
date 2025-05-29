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

    //  Si la lista está vacía (no hay primera cajita)
    Si lista.cabeza es nada:
        lista.cabeza = nuevo_nodo  //  Esta es la primera cajita
    Si no:
        //  Vamos a la última cajita de la lista
        actual = lista.cabeza
        mientras actual.siguiente no es nada:
            actual = actual.siguiente
        //  Enlazamos la nueva cajita al final
        actual.siguiente = nuevo_nodo

//  Función para eliminar un proceso de la lista
//  Le damos la lista y el ID del proceso a eliminar
Eliminar_Proceso (lista, id_proceso):
    //  Si la lista está vacía, no hay nada que eliminar
    Si lista.cabeza es nada:
        regresar  //  Terminamos la función
    
    //  Si el primer proceso es el que queremos eliminar
    Si lista.cabeza.id es igual a id_proceso:
        temp = lista.cabeza  //  Guardamos la primera cajita temporalmente
        lista.cabeza = lista.cabeza.siguiente  //  La segunda cajita ahora es la primera
        eliminar temp  //  Borramos la cajita guardada
        regresar
    
    //  Buscamos el proceso en el resto de la lista
    anterior = lista.cabeza
    actual = lista.cabeza.siguiente
    mientras actual no es nada y actual.id no es igual a id_proceso:
        anterior = actual
        actual = actual.siguiente
    
    //  Si no encontramos el proceso
    Si actual es nada:
        regresar  //  No hacemos nada
    
    //  Si lo encontramos, lo "desconectamos" y borramos
    anterior.siguiente = actual.siguiente
    eliminar actual

//  Función para buscar un proceso por su ID
Buscar_Proceso_por_ID (lista, id_proceso):
    //  Recorremos cada cajita de la lista
    actual = lista.cabeza
    mientras actual no es nada:
        Si actual.id es igual a id_proceso:
            regresar actual  //  Encontramos el proceso, devolvemos la cajita
        actual = actual.siguiente
    regresar nada  //  No encontramos el proceso

//  Función para cambiar la prioridad de un proceso
Modificar_Prioridad_Proceso (lista, id_proceso, nueva_prioridad):
    //  Buscamos el proceso por su ID
    proceso = Buscar_Proceso_por_ID(lista, id_proceso)
    //  Si encontramos el proceso, cambiamos su prioridad
    Si proceso no es nada:
        proceso.prioridad = nueva_prioridad    
