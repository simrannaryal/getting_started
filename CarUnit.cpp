#include "CarUnit.h"

CarUnit::CarUnit(std::string carBrand, float carPrice, CarType carType, int carSpeed, int carRpm, GearType gearType)
: _carBrand{carBrand}, _carPrice{carPrice}, _carType{carType}, _carSpeed{carSpeed}, _carRpm{carRpm}, _gearType{gearType}
{
}

std::ostream &operator<<(std::ostream &os, const CarUnit &rhs) {
    os << "_carBrand: " << rhs._carBrand
       << " _carPrice: " << rhs._carPrice
       << " _carType: " <<static_cast<int> (rhs._carType)
       << " _carSpeed: " << rhs._carSpeed
       << " _carRpm: " << rhs._carRpm
       << " _gearType: " <<static_cast<int> (rhs._gearType);
    return os;
}
