//
// Created by 84757 on 2022/6/7.
//

#ifndef LINEARLIST_NODE_H
#define LINEARLIST_NODE_H
template <typename Elemtype>
class Node{
public:
    Elemtype data;
    Node<Elemtype> *next;

    bool operator==(const Node &rhs) const {
        return data == rhs.data &&
               next == rhs.next;
    }

    bool operator!=(const Node &rhs) const {
        return !(rhs == *this);
    }

    Node<Elemtype> &operator=(const Node<Elemtype>& rhs){
        if(this == &rhs) return *this;
        this->data = rhs.data;
        this->next = rhs.next;
        return *this;
    }

};


#endif //LINEARLIST_NODE_H
