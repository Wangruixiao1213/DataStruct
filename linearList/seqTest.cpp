#include "seqList.h"
#include "seqList.cpp"
int main() {
    seqList<int> a;
    int e;
    std::cout << a.Length() << std::endl;
    std::cout << a.Empty() << std::endl;
    a.ListInsert(1,10);
    a.ListInsert(2,13);
    a.ListInsert(3,14);
    a.PrintList();
    std::cout << a.Length() << std::endl;
    std::cout << a.Empty() << std::endl;
    a.GetElem(2,e);
    std::cout << e << std::endl;
    std::cout << a.LocateElem(13) << std::endl;
    a.ListDelete(2,e);
    std::cout << e << std::endl;
    a.PrintList();
//    a.DestroyList();
}