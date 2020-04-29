#include <cstdlib>
#include <iostream>
#include <ctime>
#include <list>
#include <algorithm>
#include <iterator>


#include "Ponto.h"

std::list < std::pair <float, float> >          ListaPonto;
std::list <Ponto>                               Pontos;
std::list <Ponto>                               ::iterator ponto;
std::list <Ponto>                               ::iterator it, it1, it2, it3;

//float Lx(100), Ly(50);
float x, y, xp, yp, X[10], Y[10], x0, y0, aux;
int Lx, Ly, _Lx, _Ly;
int i;
bool flag(false);


int main(int argc, char** argv) 
{   
//==============================================================================    
//               Função para gerar um retângulo de lados Lx e Ly
//==============================================================================    

    std::cout << "Digite a largura" << std::endl;
    std::cin >> Lx;
    std::cout << "Digite a altura" << std::endl;
    std::cin >> Ly;    
    
    if(_Lx > 0 && _Ly > 0)
    {
    Lx   = _Lx;
    Ly = _Ly;

    }else
    {
        std::cout << "Base ou altura com valor inválido\n";
        std::cout << "Execução cancelada.\n";
        abort();                                              
    }
    
//    Lx = 100;
//    Ly = 50;
    std::cout << "Área do retângulo = " << Lx * Ly << std::endl;

//==============================================================================    
//     Função para gerar N pontos aleatórios num retângulo de lado (Lx, Ly)
//==============================================================================      
    srand(time(0));     //muda os numeros 

    for (i=0; i<10; i++)
    {    
        x = (rand()%(Lx));
        y = (rand()%(Ly));
                       
        X[i] = x;
        Y[i] = y;
        
        std::cout << "Pontos[" << i << "] " << X[i] << ", " << Y[i] << std::endl;

        //Adicionando os pontos gerados na lista de pontos gerais
        ListaPonto.emplace_back (x, y);
        Pontos.push_back (Ponto(x,y));
    }  

//bool apagar(const Ponto &_p)
//{     
//    return _p.getFlag();    
//}
    
//==============================================================================    
//           Funcao para descobrir o menor y (e mais à esquerda)
//==============================================================================    
    //Encontrar o ponto mais baixo e mais à esquerda
    x0 = X[0];
    y0 = Y[0];
    
    //Imprimi os pontos da lista na tela   
    std::cout << "Os pontos são: " << std::endl;
    for (auto& x: ListaPonto)
    {    
    std::cout << " (" << x.first << "," << x.second << ")"; 
    std::cout << std::endl;
    
    if (x.second < y0)
    {
        aux = x.second;
        x.second = y0;
        
        y0 = aux;
        x0 = x.first;
    }
    
    }std::cout << "O menor y é = " << y0 << std::endl;

    //menor y, ponto base, adicionando no topo da lista
    yp = y0;
    xp = x0; 
  
    ListaPonto.emplace_front (xp, yp);  
    Pontos.push_front (Ponto(xp,yp));
    
    std::cout << "Os pontos são (agora com o ponto base): " << std::endl;
    
    for (auto& x: ListaPonto)
    {    
    std::cout << " (" << x.first << "," << x.second << ")"; 
    std::cout << std::endl;
    }

    Ponto::xp = xp;
    Ponto::yp = yp;

//==============================================================================    
//           Funcao que ordena os pontos pelo angulo theta
//============================================================================== 
    ListaPonto.sort();
    Pontos.sort();

//    auto inicio = std::begin (ListaPonto); std::advance (inicio,0);
//    auto fim = std::begin (ListaPonto); std::advance (fim, -1);
//    
//    for(auto ponto = inicio; ponto != fim; ++ponto)
//    {
//        std::cout << *ponto << std::endl;
//    }

    for (auto& x: ListaPonto)
    {    
    std::cout << " (" << x.first << "," << x.second << ")"; 
    std::cout << std::endl;
    }
    
//==============================================================================    
//        Funcao que apaga os pontos que possuem o mesmo angulo
//============================================================================== 
    ListaPonto.unique();
    Pontos.unique();

    std::cout << std::endl;

    ListaPonto.emplace_front(xp, yp);
    Pontos.push_front (Ponto(xp,yp));
    ListaPonto.emplace_back(xp, yp);
    Pontos.push_back (Ponto(xp,yp));


    it = --Pontos.end();
    --it;

//==============================================================================    
//  Funcao que calcula sentido horario ou anti-horario de acordo com o valor do determinante
//    
// (Se o determinante der -1, sentido anti-horario, o ponto do meio permanece)
//    
//==============================================================================      
    do{

        flag = false;

        for(it1 = Pontos.begin(); it1 != it; ++it1)
        {

            if(!(it1-> getFlag()))
            {	
                it3 = it1;
                ++it3;

                do{
                    it2 = it3;
                    ++it3;

                    if(it1-> sentido(*it2, *it3) == -1)
                    {
                        it2-> setFlag(true);
                        flag = true;
                    }
                }while(it2->getFlag());
            }
        }
        //Apaga os pontos que deixam o poligono concaco, determinante = 1
        Pontos.remove_if(apagar);

    }while(flag);

    Pontos.pop_back();

    std::cout <<"Os pontos que foram o menor polígono convexo são: "<< std::endl;

    auto inicio = std::begin (Pontos); std::advance (inicio,0);
    auto fim = std::begin (Pontos); std::advance (fim, -1);
    
    for(auto ponto = inicio; ponto != fim; ++ponto)
    {
        std::cout << *ponto << std::endl;
    }
    
   return 0;
}
