#include <iostream>
using namespace std;

// Abstract Base Class
class SmartDevice
{
public:

    virtual void turnOn() = 0;

    virtual void turnOff() = 0;

    virtual ~SmartDevice()
    {
    }
};

// Fan Class
class Fan : public SmartDevice
{
public:

    void turnOn()
    {
        cout << "Fan is ON" << endl;
    }

    void turnOff()
    {
        cout << "Fan is OFF" << endl;
    }
};

// Light Class
class Light : public SmartDevice
{
public:

    void turnOn()
    {
        cout << "Light is ON" << endl;
    }

    void turnOff()
    {
        cout << "Light is OFF" << endl;
    }
};

// AC Class
class AC : public SmartDevice
{
public:

    void turnOn()
    {
        cout << "AC is ON" << endl;
    }

    void turnOff()
    {
        cout << "AC is OFF" << endl;
    }
};

int main()
{
    SmartDevice* device;

    Fan fan;
    Light light;
    AC ac;

    device = &fan;
    device->turnOn();

    device = &light;
    device->turnOn();

    device = &ac;
    device->turnOn();

    return 0;
}
//Advanced Example— Smart Home Device System