#include "Tapetes.h"

Tapetes::Tapetes() {
}

Tapetes::Tapetes(const Tapetes& orig) {
}

Tapetes::~Tapetes() {
}
//==============================================================================
//      Função geral dos dados necessários para o cálculo de tapetes 
//                    (x, y, largura e altura)
//==============================================================================
Tapetes Tapetes::DefineTapetes (const float& _x0, const float& _y0, const float& _largura, const float& _altura)    //DefineTapetes é chamado pelo Tapetes
{
    x0 = _x0;
    y0 = _y0;
    largura = _largura;
    altura = _altura;        
}

//==============================================================================
//             Funções das coordenadas dos pontos dos tapetes
//==============================================================================
float Tapetes::x1(Tapetes&)
{
    float px1;
    px1 = x0;
    
    return px1;
}

float Tapetes::y1(Tapetes&)
{
    float py1;
    py1 = y0;
    
    return py1;
}

float Tapetes::x2(Tapetes&)
{
    float px2;
    px2 = x0;
    
    return px2;
}

float Tapetes::y2(Tapetes&)
{
    float py2;
    py2 = y0 + altura;
    
    return py2;
}

float Tapetes::x3(Tapetes&)
{
    float px3;
    px3 = x0 + largura;
    
    return px3;
}

float Tapetes::y3(Tapetes&)
{
    float py3;
    py3 = y0 + altura;
    
    return py3;
}

float Tapetes::x4(Tapetes&)
{
    float px4;
    px4 = x0 + largura;
    
    return px4;
}

float Tapetes::y4(Tapetes&)
{
    float py4;
    py4 = y0;
    
    return py4;
}

//==============================================================================
//          Cálculo da porcentagem da área ocupada da sala pelo tapete
//==============================================================================
float Tapetes::Porcentagem(Tapetes&, Tapetes&)
{
    Tapetes t;
    t.DefineTapetes(x0, y0, largura, altura);
    
    Tapetes Sala;
    Sala.DefineTapetes(x0, y0, largura, altura);
    
    float Porcentagem;
    Porcentagem = (100 *(t.Area()/Sala.Area()));
    
    return Porcentagem;
}

float x1padrao, y1padrao, x3padrao, y3padrao, x, y;

//==============================================================================
//            Função para saber se o tapete cabe na sala
//==============================================================================
int Tapetes::Intersecao (x1padrao, y1padrao, x3padrao, y3padrao, x, y)
{
    int Resultado; 
    
    if (x >= x1padrao && y >= y1padrao && x <= x3padrao && y <= y3padrao)
    {
        Resultado = 1;
    }else {
        Resultado = 0;
    }
}

//==============================================================================
//     Função para saber se um tapete possui interseção com outro tapete
//==============================================================================
int Tapetes::IntersecaoTapetes (x1padrao, y1padrao, x3padrao, y3padrao, x, y)
{
    int Resultado; 
    
    if (x > x1padrao && y > y1padrao && x < x3padrao && y < y3padrao)
    {
        Resultado = 1;
    }else {
        Resultado = 0;
    }
}

