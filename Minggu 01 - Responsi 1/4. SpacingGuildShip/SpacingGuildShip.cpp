#include <iostream>
#include "SpacingGuildShip.hpp"

float SpacingGuildShip::totalGuildTravel = 0.00;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip() : guildNavigatorCount(3), maxPassengerCap(50), serialNum(SpacingGuildShip::producedShips + 1)
/* Ctor default: jumlah penumpang adalah 0, jumlah Guild Navigator adalah 3,
* Kapasitas pesawat adalah 50 orang, dan stok spice 50*/
{
    this->passengerCount = 0;
    this->operatingGuildNavigator = 3;
    this->spiceStock = 50;
    SpacingGuildShip::producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock) : guildNavigatorCount(guildNavigatorCount), maxPassengerCap(maxPassengerCap), serialNum(SpacingGuildShip::producedShips + 1)
/* Ctor jika diketahui jumlah Guild Navigator, kapasitas maksimal pesawat, 
* dan stok spice. Jumlah penumpang 0 */
{
    this->passengerCount = 0;
    this->operatingGuildNavigator = guildNavigatorCount;
    this->spiceStock = spiceStock;
    SpacingGuildShip::producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& ships) : guildNavigatorCount(ships.guildNavigatorCount), maxPassengerCap(ships.maxPassengerCap), serialNum(SpacingGuildShip::producedShips + 1)
/* Cctor SpacingGuildShip */
{
    this->passengerCount = ships.passengerCount;
    this->operatingGuildNavigator = ships.operatingGuildNavigator;
    this->spiceStock = ships.spiceStock;
    SpacingGuildShip::producedShips++;
}

SpacingGuildShip::~SpacingGuildShip()
/* Dtor SpacingGuildShip */
{

}

int SpacingGuildShip::getShipSerialNum() const
/* Mengembalikan serial number dari pesawat */
{
    return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const
/* Mengembalikan jumlah penumpang pesawat */
{
    return this->passengerCount;
}

void SpacingGuildShip::travel(float distance)
/* Pesawat bergerak sebesar distance, sehingga 
* totalGuildTravel bertambah sebesar:
*
* distance / (E^2 * operatingGuildNavigator).
* 
* Catatan: 
* 1. Apabila tidak ada Guild Navigator yang operasional, 
*    maka totalGuildTravel tidak bertambah;
* 2. Apabila ada Guild Navigator yang operasional, 
*    maka jumlah Guild Navigator operasional berkurang 1 */
{
    float count = distance / (E * E * this->operatingGuildNavigator);
    if (this->operatingGuildNavigator != 0) {
        SpacingGuildShip::totalGuildTravel += count;
        this->operatingGuildNavigator--;
    }
}

void SpacingGuildShip::boarding(int addedPassengers)
/* Penumpang naik ke pesawat sebesar addedPassenger. 
* Jika pesawat tidak muat, penumpang pesawat menjadi penuh */
{
    if (this->passengerCount + addedPassengers < this->maxPassengerCap) {
        this->passengerCount += addedPassengers;
    } else {
        this->passengerCount = this->maxPassengerCap;
    }
}

void SpacingGuildShip::dropOff(int droppedPassengers)
/* Penumpang turun dari pesawat sebesar droppedPassenger. 
* Jika jumlah penumpang kurang, kosongkan pesawat */
{
    if (this->passengerCount - droppedPassengers > 0) {
        this->passengerCount -= droppedPassengers;
    } else {
        this->passengerCount = 0;
    }
}

void SpacingGuildShip::refreshNavigator(int n)
/* Menambah n Guild Navigator operasional yang menghabiskan
* n * GUILD_NAVIGATOR_SPICE_DOSE spice dari stok.
* 
* Catatan:
* 1. Maksimum merefresh seluruh Guild Navigator yang ada di pesawat 
* 2. Apabila stok kurang, maka merefresh n maksimum yang dapat di refresh
*    dari stok spice yang ada */
{
    if (this->spiceStock > n * GUILD_NAVIGATOR_SPICE_DOSE) {
        this->spiceStock -= n * GUILD_NAVIGATOR_SPICE_DOSE;
        this->operatingGuildNavigator += n;
    } else {
        float nums = this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE;
        int jumlah = (int) nums;
        this->spiceStock -= jumlah * GUILD_NAVIGATOR_SPICE_DOSE;
        this->operatingGuildNavigator += jumlah;
    }
}

void SpacingGuildShip::transitToArrakis(int addedSpice)
/* Menambah stok spice sebesar addedSpice */
{
    this->spiceStock += addedSpice;
}