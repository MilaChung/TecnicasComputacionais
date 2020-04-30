#include <cstdlib>
#include <iostream>
#include <list>
#include <fstream>   //file
#include "Tapetes.h"

typedef std::list <float>            Lista;

float x1padrao, y1padrao, x2padrao, y2padrao, x3padrao, y3padrao, x4padrao, y4padrao, x, y;
Tapetes t;

int main(int argc, char** argv) 
{
  
    Lista            ListaTapeteOriginal;
    Lista            ListaTapete;
    Lista            ListaCorte;
    
    //ler arquivo
    std::ifstream    entrada;             
    entrada.open ("arquivo.dat");
    
//==============================================================================
//              Função para saber se o arquivo existe
//==============================================================================
    if (entrada.fail())     
    {
        std::cout << "Arquivo não encontrado" << std::endl;
        abort();
    }
    
//==============================================================================
//              Função para chamar os dados da sala
//==============================================================================
    float L, H;
    entrada >> L >> H;
    
    Tapetes Sala;
    Sala.DefineTapetes(0,0,L,H);
    
//==============================================================================
//              Função geral para chamar os dados dos tapetes
//==============================================================================    
    while (1==1)
    {
              
    float x,y,l,h;
    entrada >> x >> y >> l >> h;
    
    if (x && y && l && h == -1)
    {
        break;
    }
    
    Tapetes t;
    t.DefineTapetes(x,y,l,h);     //defindo que t é um retangulo de coordenadas x, y, l e h
    
//==============================================================================
//        Função para inserir na lista o tapete que cabe na salsa
//==============================================================================    
    if(((Intersecao (Sala.x1(Sala), Sala.y1(Sala), Sala.x3(Sala), Sala.y3(Sala), t.x1(t), t.y1(t))) 
      + (Intersecao (Sala.x1(Sala), Sala.y1(Sala), Sala.x3(Sala), Sala.y3(Sala), t.x3(t), t.y3(t)))) == 2)
    {
    ListaTapeteOriginal.push_back (t.x1(t));
    ListaTapeteOriginal.push_back (t.y1(t));
    ListaTapeteOriginal.push_back (t.x3(t));
    ListaTapeteOriginal.push_back (t.y3(t));  

    std::cout << "Sala = " << Sala.Area() << std::endl;
    std::cout << "Área t = " << t.Area() << std::endl;
    std::cout << "Porcentagem t = " << t.Porcentagem() << std::endl;
    std::cout << std::endl;
    }else 
        {
        std::cout << "O tapete não cabe na sala" << std::endl;
        }
           
//==============================================================================
//     Função para os pontos de interseção entre tapetes (Total de 17 casos)
//==============================================================================        
            if(((IntersecaoTapetes (x1padrao, y1padrao, x3padrao, y3padrao, t.x1(t), t.y1(t))) 
          + (IntersecaoTapetes (x1padrao, y1padrao, x3padrao, y3padrao, t.x3(t), t.y3(t)))) == 2)
            {
                int PontosdeIntersecao;
                PontosdeIntersecao = t.IntersecaoTapetes(t.x1(t), t.y1(t)) + 2*t.IntersecaoTapetes(t.x2(t), t.y2(t))
                   + 4*t.IntersecaoTapetes(t.x3(t), t.y3(t)) + 8*t.IntersecaoTapetes(t.x4(t), t.y4(t));
                 
                    if (PontosdeIntersecao == 1)
                    {
                    //c1 = (x1; y3padrao; x3padrao; y3);    -> corte1
                    //ta = (x3padrao; y1; x3; y3);          -> tapete atualizado depois do corte

                    ListaCorte.push_back (t.x1(t));
                    ListaCorte.push_back (y3padrao);
                    ListaCorte.push_back (x3padrao);
                    ListaCorte.push_back (t.y3(t));

                    ListaTapete.push_back (x3padrao);
                    ListaTapete.push_back (t.y1(t));
                    ListaTapete.push_back (t.x3(t));
                    ListaTapete.push_back (t.y3(t)); 
                    }else 
                        if (PontosdeIntersecao == 2)
                        {
                        //c1 = (x1; y1; x3padrao; y1padrao);   -> corte1
                        //ta = (x3padrao; y1; x3; y3);         -> tapete atualizado depois do corte
                        
                        ListaCorte.push_back (t.x1(t));
                        ListaCorte.push_back (t.y1(t));
                        ListaCorte.push_back (x3padrao);
                        ListaCorte.push_back (y1padrao);

                        ListaTapete.push_back (x3padrao);
                        ListaTapete.push_back (t.y1(t));
                        ListaTapete.push_back (t.x3(t));
                        ListaTapete.push_back (t.y3(t)); 
                        }else 
                            if (PontosdeIntersecao == 3)
                            {
                            //ta = (x3padrao; y1; x3; y3);         -> tapete atualizado depois do corte

                            ListaTapete.push_back (x3padrao);
                            ListaTapete.push_back (t.y1(t));
                            ListaTapete.push_back (t.x3(t));
                            ListaTapete.push_back (t.y3(t)); 
                            }else 
                                if (PontosdeIntersecao == 4)
                                {
                                //c1 = (x1pdrao; y1; x3; y1padrao);   -> corte1
                                //ta = (x1; y1; x1padrao; y3);         -> tapete atualizado depois do corte

                                ListaCorte.push_back (x1padrao);
                                ListaCorte.push_back (t.y1(t));
                                ListaCorte.push_back (t.x3(t));
                                ListaCorte.push_back (y1padrao);
        
                                ListaTapete.push_back (t.x1(t));
                                ListaTapete.push_back (t.y1(t));
                                ListaTapete.push_back (x1padrao);
                                ListaTapete.push_back (t.y3(t)); 
                                }else 
                                    if (PontosdeIntersecao == 6)
                                    {
                                    //ta = (x1; y1; x3; y1padrao);         -> tapete atualizado depois do corte

                                    ListaTapete.push_back (t.x1(t));
                                    ListaTapete.push_back (t.y1(t));
                                    ListaTapete.push_back (t.x3(t));
                                    ListaTapete.push_back (y1padrao); 
                                }else 
                                    if (PontosdeIntersecao == 8)
                                    {
                                    //c1 = (x1; y1; x1padrao; y3padrao);   -> corte1
                                    //ta = (x1; y3padrao; x3; y3);         -> tapete atualizado depois do corte

                                    ListaCorte.push_back (t.x1(t));
                                    ListaCorte.push_back (t.y1(t));
                                    ListaCorte.push_back (x1padrao);
                                    ListaCorte.push_back (y3padrao);
            
                                    ListaTapete.push_back (t.x1(t));
                                    ListaTapete.push_back (y3padrao);
                                    ListaTapete.push_back (t.x3(t));
                                    ListaTapete.push_back (t.y3(t)); 
                                    }else 
                                        if (PontosdeIntersecao == 9)
                                        {
                                        //ta = (x1; y3padrao; x3; y3);         -> tapete atualizado depois do corte

                                        ListaTapete.push_back (t.x1(t));
                                        ListaTapete.push_back (y3padrao);
                                        ListaTapete.push_back (t.x3(t));
                                        ListaTapete.push_back (t.y3(t)); 
                                        }else 
                                            if (PontosdeIntersecao == 12)
                                            {
                                            //ta = (x1; y1; x1padrao; y3);         -> tapete atualizado depois do corte

                                            ListaTapete.push_back (t.x1(t));
                                            ListaTapete.push_back (t.y1(t));
                                            ListaTapete.push_back (x1padrao);
                                            ListaTapete.push_back (t.y3(t)); 
                                            }else 
                                                if (PontosdeIntersecao == 15)
                                                {
                                                   ListaTapete.erase (t.x1(t));
                                                   ListaTapete.erase (t.y1(t));
                                                   ListaTapete.erase (t.x3(t));
                                                   ListaTapete.erase (t.y3(t));
                                                   
                                                }else 
                                                    if (PontosdeIntersecao == 0)
                                                    {
                                                          PontosdeIntersecao = -t.IntersecaoTapetes(x1padrao, y1padrao) 
                                                          - 2*t.IntersecaoTapetes(x2padrao, y2padrao) - 4*t.IntersecaoTapetes(x3padrao, y3padrao) 
                                                          - 8*t.IntersecaoTapetes(x4padrao, y4padrao);
                                                         
                                                        if (PontosdeIntersecao == -3)
                                                        {
                                                            //c1 = (x1padrao; y3padrao; x3; y3);   -> corte1
                                                            //c2 = (x1padrao; y1; x3; y1padrao);   -> corte2
                                                            //ta = (x1; y1; x1padrao; y3);         -> tapete atualizado depois do corte

                                                            ListaCorte.push_back (x1padrao);
                                                            ListaCorte.push_back (y3padrao);
                                                            ListaCorte.push_back (t.x3(t));
                                                            ListaCorte.push_back (t.y3(t));
                                                            
                                                            ListaCorte.push_back (x1padrao);
                                                            ListaCorte.push_back (t.y1(t));
                                                            ListaCorte.push_back (t.x3(t));
                                                            ListaCorte.push_back (y1padrao);

                                                            ListaTapete.push_back (t.x1(t));
                                                            ListaTapete.push_back (t.y1(t));
                                                            ListaTapete.push_back (x1padrao);
                                                            ListaTapete.push_back (t.y3(t));
                                                        }else
                                                            if (PontosdeIntersecao == -6)
                                                           {
                                                                //c1 = (x1; y1; x1padrao; y3padrao);   -> corte1
                                                                //c2 = (x3padrao; y1; x3; y3padrao);   -> corte2
                                                                //ta = (x1; y3padrao; x3; y3);         -> tapete atualizado depois do corte

                                                                ListaCorte.push_back (t.x1(t));
                                                                ListaCorte.push_back (t.y1(t));
                                                                ListaCorte.push_back (x1padrao);
                                                                ListaCorte.push_back (y3padrao);

                                                                ListaCorte.push_back (x3padrao);
                                                                ListaCorte.push_back (t.y1(t));
                                                                ListaCorte.push_back (t.x3(t));
                                                                ListaCorte.push_back (y3padrao);

                                                                ListaTapete.push_back (t.x1(t));
                                                                ListaTapete.push_back (y3padrao);
                                                                ListaTapete.push_back (t.x3(t));
                                                                ListaTapete.push_back (t.y3(t));
                                                            }else
                                                                if (PontosdeIntersecao == -9)
                                                                {
                                                                   //c1 = (x1; y1padrao; x1padrao; y3);   -> corte1
                                                                   //c2 = (x3padrao; y1padrao; x3; y3);   -> corte2
                                                                   //ta = (x1; y1; x3; y1padrao);         -> tapete atualizado depois do corte

                                                                    ListaCorte.push_back (t.x1(t));
                                                                    ListaCorte.push_back (y1padrao);
                                                                    ListaCorte.push_back (x1padrao);
                                                                    ListaCorte.push_back (t.y3(t));

                                                                    ListaCorte.push_back (x3padrao);
                                                                    ListaCorte.push_back (y1padrao);
                                                                    ListaCorte.push_back (t.x3(t));
                                                                    ListaCorte.push_back (t.y3(t));

                                                                    ListaTapete.push_back (t.x1(t));
                                                                    ListaTapete.push_back (t.y1(t));
                                                                    ListaTapete.push_back (t.x3(t));
                                                                    ListaTapete.push_back (y1padrao);

                                                                }else
                                                                if (PontosdeIntersecao == -12)
                                                                {
                                                                   //c1 = (x1; y3padrao; x3padrao; y3);   -> corte1
                                                                   //c2 = (x1; y1; x3padrao; y1padrao);   -> corte2
                                                                   //ta = (x3padrao; y1; x3; y3);         -> tapete atualizado depois do corte

                                                                    ListaCorte.push_back (t.x1(t));
                                                                    ListaCorte.push_back (y3padrao);
                                                                    ListaCorte.push_back (x3padrao);
                                                                    ListaCorte.push_back (t.y3(t));

                                                                    ListaCorte.push_back (t.x1(t));
                                                                    ListaCorte.push_back (t.y1(t));
                                                                    ListaCorte.push_back (x3padrao);
                                                                    ListaCorte.push_back (y1padrao);

                                                                    ListaTapete.push_back (x3padrao);
                                                                    ListaTapete.push_back (t.y1(t));
                                                                    ListaTapete.push_back (t.x3(t));
                                                                    ListaTapete.push_back (t.y3(t));

                                                                }else
                                                                if (PontosdeIntersecao == -15)
                                                                {
                                                                    ListaTapete.push_back (t.x1(t));
                                                                    ListaTapete.push_back (t.y1(t));
                                                                    ListaTapete.push_back (t.x3(t));
                                                                    ListaTapete.push_back (t.y3(t));

                                                                }else
                                                                if (PontosdeIntersecao == -5)
                                                                {
                                                                   //c1 = (x1; y1; x1padrao; y3);   -> corte1
                                                                   //ta = (x3padrao; y1; x3; y3);   -> tapete atualizado depois do corte

                                                                    ListaCorte.push_back (t.x1(t));
                                                                    ListaCorte.push_back (t.y1(t));
                                                                    ListaCorte.push_back (x1padrao);
                                                                    ListaCorte.push_back (t.y3(t));

                                                                    ListaTapete.push_back (x3padrao);
                                                                    ListaTapete.push_back (t.y1(t));
                                                                    ListaTapete.push_back (t.x3(t));
                                                                    ListaTapete.push_back (t.y3(t));

                                                                }else
                                                                if (PontosdeIntersecao == -10)
                                                                {
                                                                    //c1 = (x1; y1; x3; y1padrao);    -> corte1
                                                                    //ta = (x1; y3padrao; x3; y3);    -> tapete atualizado depois do corte

                                                                    ListaCorte.push_back (t.x1(t));
                                                                    ListaCorte.push_back (t.y1(t));
                                                                    ListaCorte.push_back (t.x3(t));
                                                                    ListaCorte.push_back (y1padrao);

                                                                    ListaTapete.push_back (t.x1(t));
                                                                    ListaTapete.push_back (y3padrao);
                                                                    ListaTapete.push_back (t.x3(t));
                                                                    ListaTapete.push_back (t.y3(t));

                                                                }
                                                                else 
                                                              {
                                                              //Quando nao há iterseção
                                                              ListaTapete.push_back (t.x1(t));
                                                              ListaTapete.push_back (t.y1(t));
                                                              ListaTapete.push_back (t.x3(t));
                                                              ListaTapete.push_back (t.y3(t));
                                                              }
                                                    }

            }
        }
       
    std::cout << "Área t = " << t.Area() << std::endl;
    std::cout << "Porcentagem t = " << t.Porcentagem() << std::endl;
    std::cout << std::endl;
    
    return 0;
}
    

