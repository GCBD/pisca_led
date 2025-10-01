#include <PiscaLed.h>

// variáveis globais
int _pino;
int _time;

PiscaLed::PiscaLed(int pino, long time)
{
    // pino e time só podem serem acessados de dentro dessa função
    pinMode(pino, OUTPUT);
    _pino = pino;
    _time = time; 
}

void PiscaLed::acende_led()
{
    digitalWrite(_pino, HIGH);
    delay(_time);
    digitalWrite(_pino, LOW);
    delay(_time);
}