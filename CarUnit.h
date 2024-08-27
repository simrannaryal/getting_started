#include <iostream>
#include "CarType.h"
#include "GearType.h"

class CarUnit
{
private:
    std::string _carBrand;
    float _carPrice;
    CarType _carType;
    int _carSpeed;
    int _carRpm;
    GearType _gearType;

public:
    CarUnit() = default;                          // Default constructor
    CarUnit(const CarUnit &) = default;           // Copy constructor
    CarUnit &operator=(const CarUnit &) = delete; // Copy assignment operator
    CarUnit(CarUnit &&) = delete;                 // Move constructor
    CarUnit &operator=(CarUnit &&) = delete;      // Move assignment operator
    ~CarUnit() = default;                         // Destructor

    CarUnit(std::string carBrand,
            float carPrice,
            CarType carType,
            int carSpeed,
            int carRpm,
            GearType gearType);

    std::string carBrand() const { return _carBrand; }
    void setCarBrand(const std::string &carBrand) { _carBrand = carBrand; }

    float carPrice() const { return _carPrice; }
    void setCarPrice(float carPrice) { _carPrice = carPrice; }

    CarType carType() const { return _carType; }
    void setCarType(const CarType &carType) { _carType = carType; }

    int carSpeed() const { return _carSpeed; }
    void setCarSpeed(int carSpeed) { _carSpeed = carSpeed; }

    int carRpm() const { return _carRpm; }
    void setCarRpm(int carRpm) { _carRpm = carRpm; }

    GearType gearType() const { return _gearType; }
    void setGearType(const GearType &gearType) { _gearType = gearType; }

    friend std::ostream &operator<<(std::ostream &os, const CarUnit &rhs);
};