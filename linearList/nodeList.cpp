//
// Created by 王睿潇 on 6/6/22.
//

#include "nodeList.h"
template <typename ElemType>
nodeList<ElemType>::nodeList(){
    count = 0;
    start.next = NULL;
}

template <typename ElemType>
int nodeList<ElemType>::Length(){
//    return count;
    int length = 0;
    Node<ElemType> *tmp = NULL;
    tmp->next = start.next;
    tmp->data = start.data;
    for(;tmp->next!=NULL;tmp=tmp->next){
        length++;
    }
    return length;
}

//template <typename ElemType>
//int nodeList<ElemType>::LocateElem(ElemType e);
//
//template <typename ElemType>
//void nodeList<ElemType>::GetElem(int i,ElemType &e);
//
//template <typename ElemType>
//void nodeList<ElemType>::ListInsert(int i ,ElemType e);
//
//template <typename ElemType>
//void nodeList<ElemType>::ListDelete(int i,ElemType &e);
//
//template <typename ElemType>
//void nodeList<ElemType>::PrintList();
//
//template <typename ElemType>
//bool nodeList<ElemType>::Empty();
////    void DestroyList();
//
//
//template <typename ElemType>
//nodeList<ElemType>::~nodeList();