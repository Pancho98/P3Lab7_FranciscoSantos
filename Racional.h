#ifndef RACIONAL_H
#define RACIONAL_H
#include <string>

using namespace std;

class Racional{
  private:
    int numerador;
    int denominador;

  public:
    Racional();
    Racional(int, int);
    int getNumerador()const;
    int getDenominador()const;
    void setNumerador()const;
    void setDenominador()const;

    const Racional operator+(const Racional&)const;
    const void operator+=(const Racional&);
    const Racional operator-(const Racional&)const;
    const void operator-=(const Racional&);
    const Racional operator*(const Racional&)const;
    const void operator*=(const Racional&);
    const Racional operator/(const Racional&)const;
    const void operator/=(const Racional&);



};

#endif
