#ifndef CONTACT_TABLA_HPP
#define CONTACT_TABLA_HPP

#include "iostream"

using namespace std;

template<typename K, typename V>
class Item {
private:
    K llave;
    V valor;
public:
    Item(K _llave, V _valor) {
        this->llave = _llave;
        this->valor = _valor;
    }

    K getLlave() { return llave; }

    void setLlave(K *_llave) { llave = _llave; }

    V getValor() { return valor; }

    void setValor(V *_valor) { valor = _valor; }
};

template<typename K, typename V>
class Tabla {
private:
    int capacidad, size;
    Item<K, V> **arr;
public:
    explicit Tabla(int _capacidad) {
        this->capacidad = _capacidad;
        this->size = 0;
        arr = new Item<K, V> *[capacidad];
    }

    virtual ~Tabla() = default;

    void insertar(K _llave, V _valor) {
        auto *temp = new Item<K, V>(_llave, _valor);
        int hashIndex = hash(_llave);
        arr[hashIndex] = temp;
        size++;
        cout << hashIndex << endl;
    }

    void reHash() {
        //hace algo
    }

    int hash(K _clave) {

        int tam = 0;
        string a = _clave;
        for (int i = 0; i < a.length(); ++i) {
            tam += (i * a[i]);
        }
        return tam % capacidad;

//
    }

    V get(K _key) {
        // Apply hash function to find index for given key
        int hashIndex = hash(_key);
        int counter = 0;
        //finding the node with given key
        while (arr[hashIndex] != NULL) {
            if (counter++ > capacidad)  //to avoid infinite loop
                return NULL;
            //if node found return its value
            if (arr[hashIndex]->getLlave() == _key)
                return arr[hashIndex]->getValor();
            hashIndex++;
            hashIndex %= capacidad;
        }

        //If not found return null
        return NULL;
    }
};

#endif //CONTACT_TABLA_HPP
