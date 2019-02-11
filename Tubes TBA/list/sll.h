#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED
#include <stdio.h>
#define Nil NULL
#define info(P) P->info
#define next(P) P->next
#define first(L) ((L).first)

using namespace std;

struct mahasiswa{
    char name[30];
};
typedef mahasiswa infotype;
typedef struct elmlist *address;
typedef struct elmlist{
    infotype info;
    address next;
};
struct list{
    address first;
};

address alokasi(mahasiswa m);
#endif // SLL_H_INCLUDED
