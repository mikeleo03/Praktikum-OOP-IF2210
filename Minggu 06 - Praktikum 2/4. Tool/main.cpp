#include "Pickaxe.hpp"
#include "Tool.hpp"
#include "ReinforcedAxe.hpp"

int main() {
  Pickaxe *p1 = new Pickaxe();
  p1->use();
  p1->enchant();
  Pickaxe *p2 = new Pickaxe(*p1);
  Pickaxe *p3 = new Pickaxe();
  *p3 = *p2;
  ReinforcedAxe *r1 = new ReinforcedAxe();
  r1->use();
  ReinforcedAxe *r2 = new ReinforcedAxe(*r1);
  r2->enchant();
  ReinforcedAxe *r4 = new ReinforcedAxe(*r1 + *r2);
  r4->repair();
  delete r2;
  delete r1;
  delete r4;
  delete p1;
  delete p2;
  return 0;
}