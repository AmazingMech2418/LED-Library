#ifndef LEDultra_h
#define LEDultra_h

#include "Arduino.h"

Class LED
{
  public:
    LED(int pin);
    void on();
    void off();
  private:
    int _pin;
}

/*Class LEDultra
{
  public:
    LEDultra(int a, int b, int c, int d, int e, int f, int g, int h, int i);
    void array(int j, int k, int l, int m, int n, int o, int p, int q, int r);
  private:
    int _a;
    int _b;
    int _c;
    int _d;
    int _e;
    int _f;
    int _g;
    int _h;
    int _i;
}*/

#endif
