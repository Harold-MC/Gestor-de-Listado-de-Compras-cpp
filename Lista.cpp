#include "Lista.h"

Lista::Lista() : _primer(NULL), _ultimo(NULL) {

}

void Lista::Agregar(Elemento* elemento) {
    /*IMPLEMENTE ESTE METODO
            Dado un objeto de tipo puntero a Elemento agréguelo a la lista.

            Tenga pendiente que el atributo _primer guarda un puntero al primer elemento de la lista y que _ultimo es un puntero al al último elemento de la lista
     */
    if (_primer == NULL) {
      
        _primer = elemento;
        _ultimo = elemento;
    } else {
        _ultimo->SetSiguiente(elemento);
        _ultimo = elemento;
    }

}

bool Lista::Eliminar(int indice) {
    /*
    IMPLEMENTE ESTE METODO
    Dado un indice entero elimine el objeto en esa posición.  Ejemplo si el parámetro indice es igual a 0 se eliminará el primer elemento.

    Esta función retorna un booleano,  retorno verdadero si el índice está contenido en la lista.

    Ejemplo, si la lista tiene 4 elementos y se pide eliminar el índice 9 este método retornará falso porque ese índice no está contenido en la lista.
     */

    if (_primer != NULL) {
        if (indice == 0) {
            Elemento* temporal = _primer;
            _primer = temporal->GetSiguiente();
            temporal->SetSiguiente(NULL);
            delete temporal;

        }else{
            
            Elemento *temp = _primer;
            
            Elemento* aux1;
            Elemento* aux2;
            for(int i=0; i<indice-1; i++){
                temp = temp->GetSiguiente();

            }
            
            aux1= temp;
            aux2 = temp->GetSiguiente()->GetSiguiente();

            temp = temp->GetSiguiente();
            temp->SetSiguiente(NULL);
            delete temp;
            aux1->SetSiguiente(aux2);
            
            
        }
    }
    
    return false;


}
