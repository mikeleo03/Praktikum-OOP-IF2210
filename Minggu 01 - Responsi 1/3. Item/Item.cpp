#include <iostream>
#include "Item.hpp"
using namespace std;

int Item::totalRevenue = 0;
int Item::totalItems = 0;

Item::Item() : serialNum(Item::totalItems + 1) {
    /* Ctor default: stok adalah 0 dan harga barang adalah 0 */
    this->stock = 0;
    this->price = 0;
    this->sold = 0;
    Item::totalItems++;
}

Item::Item(int stock, int price) : serialNum(Item::totalItems + 1) {
    this->stock = stock;
    this->price = price;
    this->sold = 0;
    Item::totalItems++;
}

Item::Item(const Item& I) : serialNum(Item::totalItems + 1) {
    /* cctor item, mengkopi seluruh atribut item, termasuk atribut sold */
    this->stock = I.stock;
    this->price = I.price;
    this->sold = I.sold;
    Item::totalItems++;
}

Item::~Item() {

}

int Item::getSerialNum() const {
    return this->serialNum;
}

int Item::getSold() const {
    return this->sold;
}

int Item::getPrice() const {
    return this->price;
}

void Item::addStock(int addedStock) {
    /* Menambahkan stok item. Tidak akan bernilai negatif. */
    this->stock += addedStock;
}

void Item::sell(int soldStock) {
    // Handling kalo misal soldStocknya lebih besar
    /* Menjual item. Jika item tidak cukup, maka item terjual hanya sampai stok item habis */
    if (soldStock > this->stock) {
        Item::totalRevenue += this->price * this->stock;
        this->sold += this->stock;
        this->stock = 0;
    } else {
        Item::totalRevenue += this->price * soldStock;
        this->sold += soldStock;
        this->stock -= soldStock;
    }
}

void Item::setPrice(int newPrice) {
    this->price = newPrice;
}