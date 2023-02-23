#include "Asset.hpp"
#include "BaseAsset.hpp"
#include "AppreciatingAsset.hpp"

double AppreciatingAsset::getValue(int years) {
    // initial vals
    double value = 1;

    // Calculate exponential values
    for (int i = 0; i < years; i++) {
        value = value * (1 + this->rate);
    }

    // return
    return this->x->getValue(years) * value;
}