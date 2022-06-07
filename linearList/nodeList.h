//
// Created by 王睿潇 on 6/6/22.
//

#ifndef LINEARLIST_NODELIST_H
#define LINEARLIST_NODELIST_H

#include "utlib.h"
#include "node.h"
template <typename ElemType>
class nodeList{
private:
    int count;
    Node<ElemType> *start;

//    ElemType *data;
public:
    nodeList();
//    void InitList();
    int Length();
    int LocateElem(ElemType e);
    void GetElem(int i,ElemType &e);
    void ListInsert(int i ,ElemType e);
    void ListDelete(int i,ElemType &e);
    void PrintList();
    bool Empty();
//    void DestroyList();
//    ~nodeList();
};
#endif //LINEARLIST_NODELIST_H
