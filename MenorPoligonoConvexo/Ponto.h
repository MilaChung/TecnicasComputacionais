//===============================================================================
//                   Menor Polígono Convexo
//===============================================================================       

#ifndef PONTO_H
#define PONTO_H

//===============================================================================
//        Include c++
//===============================================================================        
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <cmath>

//===============================================================================
//        Include meus programas
//===============================================================================

class Ponto {
public:
    
    friend std::ostream &operator << (std::ostream &, const Ponto&);
    
    Ponto(const float&, const float&);
    Ponto(const Ponto&);
    
    Retangulo();
    
   // void Set (float x, float y);
    void Retangulo (const float&, const float&); 
    float CriaPonto (Ponto&); 
    float Area() const;
    float Print (const float&, const float&);

    float getX() const;
    float getY() const;
    inline bool getFlag() const {return flag;};
    void setFlag(const bool&_f){flag = _f;};
    float dist2(const Ponto&) const;
    float ang() const;
    
    bool apagar(const Ponto&_p){return (_p.getFlag());};
    bool operator <(const Ponto&) const;
    bool operator ==(const Ponto&) const;

    static float xp;
    static float yp;

    int sentido(const Ponto&, const Ponto&);
    
private:
    float x, y, Lx, Ly, X[10], Y[10];
    bool flag;

};


float Ponto::xp = 0.0;
float Ponto::yp = 0.0;

//==============================================================================
//            Função construtor padrão de um ponto
//==============================================================================

Ponto::Ponto(const float &_abscissa, const float &_ordenada):x(_abscissa), y(_ordenada), flag(false){}

//==============================================================================
//            Função construtor de cópia do ponto
//==============================================================================

Ponto::Ponto(const Ponto &_p):x(_p.getX()), y(_p.getY()), flag(false){}

//==============================================================================
//            Função get que retorna os valores de x e y
//==============================================================================

float Ponto::getX() const {return x;}
float Ponto::getY() const {return y;}

//==============================================================================
//            Função sobrecarga de operador saída dos pontos
//==============================================================================
std::ostream &operator << (std::ostream &_output, const Ponto &_p)
{
    _output << _p.getX() << ", " << _p.getY();
    return _output;
}

//==============================================================================
//             Funcao que calcula a distancia netre dois pontos
//Cateto AC = x2 – x1
//Cateto BC = y2 – y1
//Dab = sqrt (x2 - x1)^2 + (y2 - y1)^2
//==============================================================================

float Ponto::dist2(const Ponto &_p) const
{
    return sqrt((x - _p.getX())*(x - _p.getX()) + (y - _p.getY())*(y - _p.getY()));
}

//==============================================================================
//             Funcao que calcula o angulo entre dois pontos
//
//theta = arcos (x1*x2) + (y1*y2) / sqrt ((x1)^2 + (y1)^2) * sqrt ((x2)^2 + (y2)^2)
//
//==============================================================================
float Ponto::ang() const
{
    Ponto p1(x-xp, y-yp);
    Ponto p2(1.0, 0.0);

    //return (180.0/(M_PI))*acos((p1.getX()*p2.getX() + p1.getY()*p2.getY())/(sqrt(p1.getX()*p1.getX() + p1.getY()*p1.getY())*sqrt(p2.getX()*p2.getX() + p2.getY()*p2.getY())));
    return (180.0/3.14159265358979323846)*acos((p1.getX()*p2.getX() + p1.getY()*p2.getY())/(sqrt(p1.getX()*p1.getX() + p1.getY()*p1.getY())*sqrt(p2.getX()*p2.getX() + p2.getY()*p2.getY()))); 
}

bool Ponto::operator<(const Ponto &_p) const
{
    if(this->ang() < _p.ang())	return true;
    else if(abs(this->ang() - _p.ang()) < 0.1)
    {
        if(this->dist2(Ponto(xp, yp)) > _p.dist2(Ponto(xp, yp)))
        {
            return true;
        }
        else	
            return false;
    }

    return false;
}

bool Ponto::operator==(const Ponto &_p) const
{
    if(abs(this->ang() - _p.ang()) < 0.1)	return true;

    return false;
}

//==============================================================================
// Funcao que calcula sentido horario ou anti-horario de acordo com o valor do determinante
//
//determinante = x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)
//
// (se não for no sentido anti-horario descarta)
//
//==============================================================================
int Ponto::sentido(const Ponto &_p2, const Ponto &_p3)
{
    float det = 0.0;

    det = x*(_p2.getY() - _p3.getY()) + _p2.getX()*(_p3.getY() - y) + _p3.getX()*(y -_p2.getY());

    return ((det >= 0.0) - (det <= 0.0));
}


#endif /* PONTO_H */


	

