LED::LED(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}
