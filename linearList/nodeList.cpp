//
// Created by 王睿潇 on 6/6/22.
//

#include "nodeList.h"
template <typename ElemType>
nodeList<ElemType>::nodeList(){
    start = new Node<ElemType>;
    count = 0;
    start->next = nullptr;
}

template <typename ElemType>
int nodeList<ElemType>::Length(){
    return count;
//    int length = 0;
//    auto* tmp = new Node<ElemType>;
//    tmp->next = start->next;
//    tmp->data = start->data;
//    for(;tmp->next!= nullptr;tmp=tmp->next){
//        length++;
//    }
//    delete tmp;
//    return length;
}

template <typename ElemType>
int nodeList<ElemType>::LocateElem(ElemType e){
    int pos = 1;
    Node<ElemType>* ptr = start->next;
    for(;ptr!=nullptr;ptr=ptr->next){
        if (ptr->data == e){
            return pos;
        }
        else pos++;
    }
    delete ptr;
    return -1;
}

template <typename ElemType>
void nodeList<ElemType>::GetElem(int i,ElemType &e){
    int pos = 1;
    Node<ElemType>*ptr = start;
    if(i>Length()){
        std::cout << "can't find" << std::endl;
        return;
    }
    for(;pos<=i;pos++){
        ptr = ptr->next;
    }
    e = ptr->data;
    delete ptr;
}

template <typename ElemType>
void nodeList<ElemType>::ListInsert(int i ,ElemType e){
    int pos = 0;
    Node<ElemType>* ptr = start;
    auto* tmp = new Node<ElemType>;
    if(i > (Length()+1)){
        std::cout << "can't find" << std::endl;
        return;
    }
    else {
        for(;pos<i-1;pos++){
            ptr = ptr->next;
        }
        tmp->next = ptr->next;
        tmp->data = e;
        ptr->next = tmp;
    }
    count ++;
}


template <typename ElemType>
void nodeList<ElemType>::ListDelete(int i,ElemType &e){
    int pos = 0;
    Node<ElemType>* ptr = start;
    auto* tmp = new Node<ElemType>;
    if(i > (Length()+1)){
        std::cout << "can't find" << std::endl;
        return;
    }
    else {
        for(;pos<i-1;pos++){
            ptr = ptr->next;
        }
        tmp = ptr->next;
        ptr->next = tmp->next;
    }
    e = tmp->data;
    delete tmp;
    count --;
}

template <typename ElemType>
void nodeList<ElemType>::PrintList(){
    Node<ElemType>* ptr = start->next;
    if (Empty()) std::cout << "empty" << std::endl;
    else {
        for(;ptr!=nullptr;ptr=ptr->next){
            if(ptr->next== nullptr) std::cout << ptr->data;
            else std::cout << ptr->data << " -> ";
        }
    std::cout << std::endl;
    }
}


template <typename ElemType>
bool nodeList<ElemType>::Empty(){
    return Length() == 0;
}
////    void DestroyList();
//
//
template <typename ElemType>
nodeList<ElemType>::~nodeList(){
    delete start;
}