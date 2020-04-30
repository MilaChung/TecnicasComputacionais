//===============================================================================
//                       Trabalho de tapetes
//===============================================================================       

#ifndef TAPETES_H
#define TAPETES_H

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


class Tapetes {
    friend std::ostream & operator << (std::ostream &, const Tapetes&);
public:
    Sala();
    Tapetes();
    Tapetes(const Tapetes& orig);
    
    virtual ~Tapetes();
    
    Tapetes DefineTapetes (const float&, const float&, const float&, const float&);   //o que entra, sai e o que faz
                           
    float x1(Tapetes&);
    float y1(Tapetes&);
    float x2(Tapetes&);
    float y2(Tapetes&);
    float x3(Tapetes&);
    float y3(Tapetes&);
    float x4(Tapetes&);
    float y4(Tapetes&);
    
    int Itersecao (const float&, const float&, const float&, const float&, const float&);
    int IntersecaoTapetes (const float&, const float&, const float&, const float&, const float&);

   
float Area() const {return largura * altura;};
float Porcentagem (const float, const float); 
    
private:

    float x0, y0,largura, altura;  
};

#endif /* TAPETES_H */