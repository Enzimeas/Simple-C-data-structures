#include <iostream>
#include "linked_list.h"


int main(){
  List<int> lista;

  lista.insert(10);
  lista.insert(12);
  lista.insert(21);
  lista.insert(14);
  lista.insert(18);
  lista.print();
  lista.remove(12);
  lista.print();
}



