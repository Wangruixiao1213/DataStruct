//
// Created by 王睿潇 on 6/6/22.
//

#include "seqList.h"

template <typename ElemType>
seqList<ElemType>::seqList() {

    count = 0;
    data = new ElemType[MaxSize];
}

////todo initial
//template <typename ElemType>
//void seqList<ElemType>::InitList() {
//    return;
//}

template <typename ElemType>
int seqList<ElemType>::Length() {
    return count;
}

template <typename ElemType>
int seqList<ElemType>::LocateElem(ElemType e) {
    int i;
    for(i = 0; i < Length();i++){
        if(data[i] == e){
            return (i+1);
        }
    }
    return NOTFOUND;
}

//todo 越界的错误处理
template <typename ElemType>
void seqList<ElemType>::GetElem(int i,ElemType &e) {
//    if(Length() <= i)
    if (i > Length()){
        std::cout << "out of range" << std::endl;
        return;
    }
    e = data[i-1];
    return;
//    else{
//        std::cout << "out of range" << std::endl;
//
//    }
}

//todo 越界的错误处理
template <typename ElemType>
void seqList<ElemType>::ListInsert(int i, ElemType e) {
    if(i > Length()+1 || i < 0 ){
        std::cout << "invalid i" << std::endl;
        return;
    }
    if(Length() == MaxSize){
        std::cout << "no more size" << std::endl;
    }
    for(int pos = Length() - 1;pos >=i-1;pos--){
        data[pos+1] = data[pos];
    }
    data[i-1] = e;
    count++;
}

template <typename ElemType>
void seqList<ElemType>::ListDelete(int i,ElemType &e) {
    if(i > Length() || i < 0 ){
        std::cout << "invalid i" << std::endl;
        return;
    }
    e = data[i-1];
    for(int pos = i-1;pos <=Length()-2;pos++){
        data[pos] = data[pos+1];
    }
    count--;
}

template <typename ElemType>
void seqList<ElemType>::PrintList() {
    for(int i =0;i<Length();i++){
    std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

template <typename ElemType>
bool seqList<ElemType>::Empty() {
    if(Length()>0) return false;
    else return true;
}

////todo delete
//template <typename ElemType>
//void seqList<ElemType>::DestroyList() {
//    return;
//}

template <typename ElemType>
seqList<ElemType>::~seqList() {
    delete[] data;

}