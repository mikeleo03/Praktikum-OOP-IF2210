#include<map>
#include<iostream>
using namespace std;

// Membuat sebuah pair dengan nilai (1,2)
int main() {
    // Test 1
    pair<int,int> sample(1,2);

    cout << "Hasil:" << sample.first << endl; // Hasil:1
    cout << "Hasil:" << sample.second << endl; // Hasil:2

    // Test 2
    map<int,int> test_map;

    test_map.insert(pair<int,int>(1,5)); // Memasukkan pasangan nilai key 1 dan value 5
    test_map.insert(pair<int,int>(2,6)); // Memasukkan pasangan nilai key 2 dan value 6
    test_map.insert(pair<int,int>(3,7)); // Memasukkan pasangan nilai key 3 dan value 7

    cout << test_map[1] << endl; // Mengambil nilai dengan key 1 (nilai key 1 = 5)
    test_map[2] = 3; // Mengubah nilai dengan key 2 menjadi 3
    test_map.erase(3); // Menghapus entry map dengan key 3

    cout << test_map.size() << endl;
    cout << test_map[2] << endl; // Mengambil nilai dengan key 2 (nilai key 2 = 3)

    // Test 3
    map<int,int> test_map1;

    test_map1.insert(pair<int,int>(1,5));
    test_map1.insert(pair<int,int>(2,6));
    test_map1.insert(pair<int,int>(3,7));

    auto itr = test_map1.begin(); // Mengambil iterator untuk elemen pertama pada map
    cout << itr->first << "," << itr->second << endl; // Mencetak 1,5

    itr = test_map1.find(2); // Mencari data dengan key 2
    if(itr != test_map1.end()){ // Jika tidak ditemukan .find() akan mengembalikan iterator pada .end()
        cout << itr->first << "," << itr->second << endl; // Mencetak 2,6  
    } else {
        cout << "Tidak ketemu" << endl;
    }
}
