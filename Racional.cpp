#include "Racional.h"
#include <iostream>

using namespace std;

Racional::Racional(){

}

Racional::Racional(int numerador, int denominador){
  this->numerador=numerador;
  this->denominador=denominador;
  for (int i = this->denominador * this->numerador; i > 1; i--) {
    if ((this->denominador % i == 0) && (this->numerador % i == 0)) {
      this->denominador /= i;
      this->numerador /= i;
    }
  }
}

int Racional::getNumerador()const{
  return numerador;
}

int Racional::getDenominador()const{
  return denominador;
}

const Racional Racional::operator+(const Racional& rightValue)const{
  int num;
  int den;
  num=(this->getNumerador()*rightValue.getDenominador())+(rightValue.getNumerador()*this->getDenominador());
  if(this->getDenominador()==rightValue.getDenominador()){
    den=this->getDenominador();
  }else{
    den=(this->getDenominador() * rightValue.getDenominador());
  }
  Racional* racional=new Racional(num, den);

  return *racional;
}

const Racional Racional::operator-(const Racional& rightValue)const{
  int num;
  int den;
  num=(this->getNumerador()*rightValue.getDenominador())-(rightValue.getNumerador()*this->getDenominador());
  if(this->getDenominador()==rightValue.getDenominador()){
    den=this->getDenominador();
  }else{
    den=(this->getDenominador() * rightValue.getDenominador());
  }
  Racional* racional=new Racional(num, den);

  return *racional;
}

const Racional Racional::operator*(const Racional& rightValue)const{
  int num;
  int den;
  num=(this->getNumerador())*(rightValue.getNumerador());
  den=(this->getDenominador())*(rightValue.getDenominador());
  Racional* racional=new Racional(num, den);

  return *racional;
}

const Racional Racional::operator/(const Racional& rightValue)const{
  int num;
  int den;
  num=(this->getNumerador())*(rightValue.getDenominador());
  den=(rightValue.getNumerador())*(this->getDenominador());
  Racional* racional=new Racional(num, den);

  return *racional;
}

const void Racional::operator+=(const Racional& rightValue){
  int num;
  int den;
  num=(this->getNumerador()*rightValue.getDenominador())+(rightValue.getNumerador()*this->getDenominador());
  if(this->getDenominador()==rightValue.getDenominador()){
    den=this->getDenominador();
  }else{
    den=(this->getDenominador() * rightValue.getDenominador());
  }
  std::cout << num << '\n';
  std::cout << den << '\n';
  this->numerador=num;
  this->denominador=den;
  for (int i = this->denominador * this->numerador; i > 1; i--) {
    if ((this->denominador % i == 0) && (this->numerador % i == 0)) {
      this->denominador /= i;
      this->numerador /= i;
    }
  }

}

const void Racional::operator-=(const Racional& rightValue){
  int num;
  int den;
  num=(this->getNumerador()*rightValue.getDenominador())-(rightValue.getNumerador()*this->getDenominador());
  if(this->getDenominador()==rightValue.getDenominador()){
    den=this->getDenominador();
  }else{
    den=(this->getDenominador() * rightValue.getDenominador());
  }
  this->numerador=num;
  this->denominador=den;
  for (int i = this->denominador * this->numerador; i > 1; i--) {
    if ((this->denominador % i == 0) && (this->numerador % i == 0)) {
      this->denominador /= i;
      this->numerador /= i;
    }
  }

}

const void Racional::operator*=(const Racional& rightValue){
  int num;
  int den;
  num=(this->getNumerador())*(rightValue.getNumerador());
  den=(this->getDenominador())*(rightValue.getDenominador());
  this->numerador=num;
  this->denominador=den;
  for (int i = this->denominador * this->numerador; i > 1; i--) {
    if ((this->denominador % i == 0) && (this->numerador % i == 0)) {
      this->denominador /= i;
      this->numerador /= i;
    }
  }

}

const void Racional::operator/=(const Racional& rightValue){
  int num;
  int den;
  num=(this->getNumerador())*(rightValue.getDenominador());
  den=(rightValue.getNumerador())*(this->getDenominador());
  this->numerador=num;
  this->denominador=den;
  for (int i = this->denominador * this->numerador; i > 1; i--) {
    if ((this->denominador % i == 0) && (this->numerador % i == 0)) {
      this->denominador /= i;
      this->numerador /= i;
    }
  }

}
