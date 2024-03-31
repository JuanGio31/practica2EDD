//
// Created by giovanic on 22/03/24.
//
#include "iostream"
#include "HashNote.cpp"

using namespace std;

template<typename K, typename V>

class HashMap {
    //hash -> elementos de arr
    HashNode<K, V> **arr;
    int capacidad;
    //tamanio actual
    int longitud;
    //dummy node
    HashNode<K, V> *dummy;

public:
    HashMap() {
        //Capacidad inicial hash array
        capacidad = 5;
        longitud = 0;
        arr = new HashNode<K, V> *[capacidad];

        //Iniciar los elementos en nulo
        for (int i = 0; i < capacidad; i++)
            arr[i] = NULL;

        //dummy node with value and key -1
        dummy = new HashNode<K, V>(-1, -1);
    }

    // This implements hash function to find index
    // for a key
    int hashCode(K key) {
        return key % capacidad;
    }

    //Function to add key value pair
    void insertNode(K key, V value) {
        auto *temp = new HashNode<K, V>(key, value);

        // Apply hash function to find index for given key
        int hashIndex = hashCode(key);

        //find next free space
        while (arr[hashIndex] != NULL && arr[hashIndex]->key != key
               && arr[hashIndex]->key != -1) {
            hashIndex++;
            hashIndex %= capacidad;
        }

        //if new node to be inserted increase the current longitud
        if (arr[hashIndex] == NULL || arr[hashIndex]->key == -1)
            longitud++;
        arr[hashIndex] = temp;
    }

    //Function to delete a key value pair
    V deleteNode(int key) {
        // Apply hash function to find index for given key
        int hashIndex = hashCode(key);

        //finding the node with given key
        while (arr[hashIndex] != NULL) {
            //if node found
            if (arr[hashIndex]->key == key) {
                HashNode<K, V> *temp = arr[hashIndex];

                //Insert dummy node here for further use
                arr[hashIndex] = dummy;

                // Reduce longitud
                longitud--;
                return temp->value;
            }
            hashIndex++;
            hashIndex %= capacidad;

        }

        //If not found return null
        return NULL;
    }

    //Function to search the value for a given key
    V get(int key) {
        // Apply hash function to find index for given key
        int hashIndex = hashCode(key);
        //finding the node with given key
        while (arr[hashIndex] != NULL) {
            int counter = 0;
            if (counter++ > capacidad)  //to avoid infinite loop
                return NULL;
            //if node found return its value
            if (arr[hashIndex]->key == key)
                return arr[hashIndex]->value;
            hashIndex++;
            hashIndex %= capacidad;
        }

        //If not found return null
        return NULL;
    }

    //Return current longitud
    int sizeofMap() {
        return longitud;
    }

    //Return true if longitud is 0
    bool isEmpty() {
        return longitud == 0;
    }

    //Function to display the stored key value pairs
    void display() {
        for (int i = 0; i < capacidad; i++) {
            if (arr[i] != NULL && arr[i]->key != -1)
                cout << "key = " << arr[i]->key
                     << "  value = " << arr[i]->value << endl;
        }
    }
};