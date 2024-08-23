#ifndef LED_H
#define LED_H

class LED {
    public:
        LED(int pin);
        void blink(int delayTime);
    private:
        int pin;
};




#endif