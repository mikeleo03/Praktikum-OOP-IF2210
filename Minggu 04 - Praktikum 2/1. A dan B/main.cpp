// main.cpp
#include "A.hpp"
#include "B.hpp"

void func(A* a) {
  a->setValue(888);
}

int main() {
  B b; /** ANDA HARUS MENGGUNAKAN DEFAULT CONSTRUCTOR */

  b.setValue(10888);
  func(&b);
  
  b.print(); // OUTPUT: (888, 10888)
  return 0;
}