//
// Created by 王睿潇 on 6/6/22.
//

#ifndef LINEARLIST_SEQLIST_H
#define LINEARLIST_SEQLIST_H

#include "utlib.h"


template <typename ElemType>
class seqList{
private:
    int count;
    ElemType *data;
public:
    seqList();
//    void InitList();
    int Length();
    int LocateElem(ElemType e);
    void GetElem(int i,ElemType &e);
    void ListInsert(int i ,ElemType e);
    void ListDelete(int i,ElemType &e);
    void PrintList();
    bool Empty();
//    void DestroyList();
    ~seqList();
};


#endif //LINEARLIST_SEQLIST_H
