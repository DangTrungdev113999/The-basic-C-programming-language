#include<stdio.h>

main( ) {
int List[10];
int *Head, *Tail;
Head = List;
Tail = (List+10);
printf("%d", Head-Tail);
}



