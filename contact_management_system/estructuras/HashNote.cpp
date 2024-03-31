//
// Created by giovanic on 22/03/24.
//
//template for generic type
template<typename K, typename V>

//Hashnode class
class HashNode {
private:
    V valor;
    K llave;

public:
    //Constructor of hashnode
    HashNode(K key, V value);

    V getValor() const {
        return valor;
    }

    void setValor(V val) {
        HashNode::valor = val;
    }

    K getLlave() const {
        return llave;
    }

    void setLlave(K k) {
        HashNode::llave = k;
    }
};

template<typename K, typename V>
HashNode<K, V>::HashNode(K key, V value) {
    this->valor = value;
    this->llave = key;
}