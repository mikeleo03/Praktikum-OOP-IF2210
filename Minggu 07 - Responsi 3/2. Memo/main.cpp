#include "sekretaris.h"
#include "Memo.h"
#include <iostream>
using namespace std;

int main() {
    Sekretaris a;
    a.buatMemo("Halo", "MLPW");
    a.printStatus();
    a.buatMemo("aaaa", "hmm");
    a.buatMemo("aaaa", "hmm");
    a.buatMemo("aaaa", "hmm");
    a.buatMemo("aaaa", "hmm");
    a.buatMemo("aaaa", "hmm");
    a.isiKertas(10);
    a.printStatus();
    a.buatMemo("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "hmm");
    a.buatMemo("aaaaaaa", "hmm");
    a.buatMemo("aaaaaaaaaaaaaaaaaaaaaaaaa", "hmm");
    a.buatMemo("a", "hmm");
    a.printStatus();
    a.buatMemo("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "hmm");
    a.printStatus();
}