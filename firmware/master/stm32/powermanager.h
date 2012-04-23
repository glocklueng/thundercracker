#ifndef POWERMANAGER_H
#define POWERMANAGER_H

#include "gpio.h"

class PowerManager
{
public:
    enum State {
        Uninitialized   = -1,
        BatteryPwr      = 0,
        UsbPwr          = 1
    };

    static void earlyInit();
    static void init();

    static State state() {
        return _state;
    }

    static void vbusIsr();

    static GPIOPin vbus;

private:
    static State _state;
};

#endif // POWERMANAGER_H
