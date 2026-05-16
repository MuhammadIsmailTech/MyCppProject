#include <iostream>
using namespace std;

class Appliance
{
public:

    virtual void start() = 0;

    virtual void stop() = 0;
};

class WashingMachine : public Appliance
{
public:

    void start()
    {
        cout << "Washing Machine Started" << endl;
    }

    void stop()
    {
        cout << "Washing Machine Stopped" << endl;
    }
};

class Refrigerator : public Appliance
{
public:

    void start()
    {
        cout << "Refrigerator Started" << endl;
    }

    void stop()
    {
        cout << "Refrigerator Stopped" << endl;
    }
};

int main()
{
    WashingMachine wm;
    Refrigerator rf;

    wm.start();
    rf.start();

    return 0;
}