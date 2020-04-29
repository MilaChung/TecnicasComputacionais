//==============================================================================
//                  Questoes de Tecnicas Computacionais
//==============================================================================

//==============================================================================
//                     Numeros Invertidos
//==============================================================================

//#include <iostream>      //-> cin, cout
//#include <math.h>
//#include <cmath>
//#include <time.h>
//
//int NumeroDigitos (int numero)
//{
//    return log10(numero) + 1;
//}
//
//int main ()
//{
//    std::cout << "Invertendo um numero dado pelo usuário:" << std::endl;
//    
//    int numero;
//    
//    std::cout << "Insira um número" << std::endl;
//    std::cin >> numero;
//    
//    std::cout << "O número inserido foi " << numero << std::endl;
//    
//    int ND = NumeroDigitos(numero);
//    
//    std::cout << "O número de digitos do numero inserido é: " << ND << std::endl;
// 
//    int VetorDigitos[ND];       //-> vetor com ex: ND=5 elementos (Vetor[0]...Vetor[4])
//    int NumeroInvertido;
//    int DigitoNumero;
//    int Inverso[5];
//    int Digito;
//
//    //Inverter um vetor
//            
//                int DigitoInvertido[ND];      //-> vetor que contem a quantidade de elementos = digitos
//
//                NumeroInvertido = 0;
//                
//                for (int j=0; j<ND; j++)
//                {
//                    DigitoNumero = log10(numero) + 1;
//                    DigitoInvertido[j] = numero%10;
//                    numero = numero/10;
//                    NumeroInvertido = NumeroInvertido + DigitoInvertido[j] * pow(10, DigitoNumero - 1);
//                }
//                
//        int Resultado = NumeroInvertido;        
//   
//        std::cout << "O inverso do vetor inserido é " << Resultado << std::endl;
//        std::cout << std::endl;
//       
//    
//    return 0;
//}

//==============================================================================
//                         Numeros Aleatorios Invertidos
//==============================================================================

//int main ()
//{
//            
//    std::cout << "Invertendo um número aleatório:" << std::endl;    
//    
//    int n;
//    int NumeroAleatorio;
//    int NumeroInvertido;
//    int DigitoNumero;
//        
//    //gerando numero aleatorio
//    
//    srand(time(NULL));
//
//    NumeroAleatorio = (rand() % 10000000) + 1;
//    std::cout << "O numero aleatorio gerado foi " << NumeroAleatorio << std::endl;
//    
//    int ND = NumeroDigitos(NumeroAleatorio);
//    std::cout << "O numero de digitos do numero aleatorio é " << ND << std::endl;
//    
//
//        //Inverter um vetor
//            
//                int DigitoInvertido[ND];      //-> vetor que contem a quantidade de elementos = digitos
//                NumeroInvertido = 0;
//                
//                for (int j=0; j<ND; j++)
//                {
//                    DigitoNumero = log10(NumeroAleatorio) + 1;
//                    DigitoInvertido[j] = NumeroAleatorio%10;
//                    NumeroAleatorio = NumeroAleatorio/10;
//                    NumeroInvertido = NumeroInvertido + DigitoInvertido[j] * pow(10, DigitoNumero - 1);
//                }
//             
//        int Resultado = NumeroInvertido;        
//        
//    
//        std::cout << "O inverso do vetor inserido é " << Resultado << std::endl;
//        std::cout << std::endl;
//    
//    return 0;
//}  
//==============================================================================
//                         Soma do numero com o seu inverso
//==============================================================================

//int main ()
//{
//    int numero;
//    
//    std::cout << "Digite um número" << std::endl;
//    std::cin >> numero;
//    
//    int ND = NumeroDigitos(numero);
//    
//    //colocar o numero em um vetor (lembrar que está de tras pra frente)
//    
//    int Vetor[ND];
//    
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        
//        aux = numero/pow(10,i);
//        Vetor[i] = aux%10;        
//        
//        std::cout << "vetor [" << i << "] " << Vetor[i] << std::endl;
//    }
//
//    //inverter o vetor
//    
//    int NumeroInvertido = 0;       //-> porque usa recursividade
//    
//    for (int i=0; i<ND; i++)
//    {   
//        int DigitoInvertido[ND];
//        
//        int DigitoNumero = log10(numero) + 1;
//        DigitoInvertido[i] = numero%10;
//        numero = numero/10;
//        
//        NumeroInvertido = NumeroInvertido + DigitoInvertido[i] * pow(10,DigitoNumero-1);
//        
//    }
//    
//    int Inverso[ND];
//    
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        
//        aux = NumeroInvertido/pow(10,i);
//        Inverso[i] = aux%10;
//        
//        std::cout << "vetorinverso [" << i << "] " << Inverso[i] << std::endl;
//    }
//    
//   //Soma dos vetores
//    
//    int VetorSoma[ND];
//    
//    for (int i=0; i<ND;i++)
//    {
//        VetorSoma[i] = Vetor[i] + Inverso[i];
//        std::cout << "O vetor soma é = " << VetorSoma[i] << std::endl;
//    }
//    
//    return 0;
//}
//==============================================================================
//             Numeros pares e ímpares e Digitos pares e ímpares
//==============================================================================

//#include <iostream>
//#include <math.h>
//
//int ND;
//
//int Retorno(int numero)
//{
//    ND = log10(numero) + 1;
//    
//    int VetorRetorno[ND];
//
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        aux = numero/pow(10,i);
//        VetorRetorno[i] = aux%10;
//
//            if (VetorRetorno[i]%2 == 0)
//            {
//                return 1;
//            }else
//                if (VetorRetorno[i]%2 != 0)
//                {
//                   return 0;
//                }    
//    }
//}
//
//int main ()
//{
//    int numero;
//    
//    std::cout << "Digite um número" << std::endl;
//    std::cin >> numero;
//    
//    //numero par e impar
//    if(numero%2 == 0)
//    {
//        std::cout << "O número digitado é par" << std::endl;
//    }else
//        if(numero%2 != 0)
//        {
//            std::cout << "O número digitado é ímpar" << std::endl;
//        }
//    
//    //digito par e impar
//    int ND = log10(numero) + 1;
//    int Vetor[ND];
//    
//    for (int i=0; i<ND; i++)
//    {
//         int aux;
//         
//         aux = numero/pow(10,i);
//         Vetor[i] = aux%10;
//         
//            if (Vetor[i]%2 == 0)
//            {
//                std::cout << "O número digitado possui digitos par" << std::endl;
//            }else
//                if (Vetor[i]%2 != 0)
//                {
//                    std::cout << "O número digitado possui digitos ímpar" << std::endl;
//                }
//    }
//    
//    //contagem de digitos pares e impares
//    int SomaPar = 0;
//    int VetorPar[ND];
//   
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        aux = numero/pow(10,i);
//        VetorPar[i] = aux%10;
//        
//            if (VetorPar[i]%2 == 0)
//            {
//                SomaPar = SomaPar + 1;  
//            }
//    }  
//    
//    std::cout << "O número digitado possui " << SomaPar << " digitos pares" << std::endl;
//    
//    
//    //contagem de digitos impares
//    int SomaImpar = 0;
//    int VetorImpar[ND];
//    
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        aux = numero/pow(10,i);
//        VetorImpar[i] = aux%10;
//        
//            if (VetorImpar[i]%2 != 0)
//            {
//                SomaImpar = SomaImpar + 1;
//            }
//    }
//    
//    std::cout << "O número digitado possui " << SomaImpar << " digitos impares" << std::endl;
//    
//    
//    //retornar 1 se tiver par e 0 se não tiver
//    
//    std::cout << "Retornar 1 se tiver digito par e 0 se não tiver" << std::endl;
//    
//    int Resultado = Retorno(numero);
//    std::cout << "Resultado = " << Resultado << std::endl;
//    
//    return 0;
//}

//==============================================================================
//                       Numero Primo
//==============================================================================

//#include <iostream>
//
//int main ()
//{
//    int numero;
//    int Divide = 0;
//    
//    std::cout << "Digite um número inteiro" << std::endl;
//    std::cin >> numero;
//   
//    for (int i=1; i<numero; i++)
//    {
//        if (numero%i == 0)
//        {
//            Divide = Divide + 1;
//        }   
//    }
//    
//    if (Divide == 2)        //-> 2 porque numero primo só se divide por 1 e por ele mesmo
//    {
//            std::cout << "O número digitado é primo" << std::endl;
//    }else
//    {
//            std::cout << "O número digitado não é primo" << std::endl;
//    }
//    
//    return 0;
//}

//==============================================================================
// Escreva uma função, denominada exerc1, que recebe três argumentos
// inteiros. Se a soma dos digitos pares do primeiro argumento mais a multiplicação dos
// digitos impares do segundo argumento for igual ao valor do terceiro argumento, a função
// retorna 1. Caso contrário ela retorna 0. (ex: 428, 22, 14 -> retorna 1)
//===============================================================================     
 
//#include <iostream>
//#include <math.h>
//
//int a, b, c;
//int ND;
//
//int NumeroDigitos (int numero)
//{
//    return log10(numero) + 1;
//}
//
//int Resposta (int SomaPar, int MultImpar, int c)
//{
//        if(SomaPar + MultImpar == c)
//    {
//        return 1;
//    }else
//    {
//        return 0;
//    }
//    
//}
//
//int main ()
//{
//    std::cout << "Digite um número inteiro" << std::endl;
//    std::cin >> a;
//    
//    std::cout << "Digite outro número inteiro" << std::endl;
//    std::cin >> b;
//    
//    std::cout << "Digite outro número inteiro" << std::endl;
//    std::cin >> c;
//    
//    //Soma dos digitos pares de a
//    ND = NumeroDigitos(a);
//    int Vetor_a[ND];
//    int SomaPar = 0;
//    
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        aux = a/pow(10,i);
//        Vetor_a[i] = aux%10;
//        
//        if (Vetor_a[i]%2 == 0)
//        {
//            SomaPar = SomaPar + Vetor_a[i];
//        }
//        
//    }
//    
//    std::cout << "A soma dos digitos pares do primeiro argumento é = " << SomaPar << std::endl;
//    
//    //Multiplicacao dos digitos impares de b
//    ND = NumeroDigitos(b);
//    int Vetor_b[ND];
//    int MultImpar = 1;
//    
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        aux = b/pow(10,i);
//        Vetor_b[i] = aux%10;
//        
//            if(Vetor_b[i]%2 != 0)
//            {
//                MultImpar = MultImpar * Vetor_b[i];
//            }
//    }
//    
//    std::cout << "A multiplicação dos digitos impares do segundo argumento é = " << MultImpar << std::endl;
//    
//    //Resposta
//    
//    int Resultado = Resposta (SomaPar, MultImpar, c);
//    
//    std::cout << "O resultado é " << Resultado << std::endl;
//
//    return 0;
//}

//==============================================================================
// Construa um programa que leia 10 número inteiros, via teclado. Após 
// a leitura dos números, o programa deverá emitir a seguinte mensagem no monitor:
// 
//  Primeira questão de técnicas computacioais
//  O numero de valores positivos eh: nn
//  O numero de valores pares eh: nn
//  O numero de valores positivos e pares eh: nn
//  O numero de valores positivos ou pares eh: nn
//
// onde "nn" representará a quantidade numérica de valores positivos, pares, etc, 
// conforme o caso. Este problema deve ser resolvido com somente 3 comados de testes,
// relacionados aos valores.
//==============================================================================

//#include <iostream>
//#include <math.h>
//
//void LerNumeros (int Numeros[10])
//{
//    std::cout << "Digite 10 numeros inteiros separados por espaço" << std::endl;
//    
//    for (int i=0; i<10; i++)
//    {
//         std::cin >> Numeros[i];
//         //std::cout << "Os numeros digitados foram: " << Numeros[i] << std::endl;
//    }
//}
//
//int TestaNumeros (int Numeros[10])
//{
//    int Par = 0;
//    int Positivo = 0;
//    int Positivo_e_Par = 0;
//    
//    for (int i=0; i<10; i++)
//    {
//        //par
//        if (Numeros[i]%2 == 0)
//        {
//            Par = Par + 1;
//        } 
//        if (Numeros[i] > 0)
//        {
//            Positivo = Positivo + 1;
//        }
//        if (Numeros[i]%2 == 0 && Numeros[i] > 0)
//        {
//            Positivo_e_Par = Positivo_e_Par + 1;
//        }
//    }
//    
//    int Positivo_ou_Par =  Par + Positivo - Positivo_e_Par;
//    
//    std::cout << "O numero de valores positivos eh: " << Positivo << std::endl;
//    std::cout << "O numero de valores pares eh: " << Par << std::endl;
//    std::cout << "O numero de valores positivos e pares eh: " << Positivo_e_Par << std::endl;
//    std::cout << "O numero de valores positivos ou pares eh: " << Positivo_ou_Par << std::endl;
//
//}
//
//int main ()
//{  
//    int Numeros[10];
//    LerNumeros(Numeros);
//    TestaNumeros(Numeros);
//        
//    return 0;
//}

//==============================================================================
//Escreva uma função, denominada meliante, que recebe um número 
//inteiro como argumento e que retorna 1 se o número 171 estiver contido no número
//passado como argumento e 0, caso contrário. Por exemplo, meliante(1710) retorna 1;
//meliante(1071) retorna 0; meliante(17) retorna 0; meliante(21713) retorna 1;
//meliante(10781) retorna 0.
//==============================================================================

#include <iostream>
#include <math.h>

int Meliante (int numero)
{
    int ND = log10(numero) + 1;
    int Vetor[ND];
    int Resultado;
    
    for (int i=ND-1; i>=0; i--)
    {    
        int aux;
        aux = numero/pow(10,i);
        Vetor[i] = aux%10;
    }
    
    for (int i=0; i<ND; i++)
    {
        if (Vetor[i]==1 && Vetor[i+1]==7 && Vetor[i+2]==1)
        {
             Resultado = 1;
            break;
        }else
        {
             Resultado = 0;
        }
    }
    
    return Resultado;
}

int main ()
{
    int numero;
    
    std::cout << "Digite um número inteiro" << std::endl;
    std::cin >> numero;
    
    int Resultado = Meliante(numero);
    std::cout << "Resultado = " << Resultado << std::endl;
    
    return 0;
}

//==============================================================================
// Escreva uma função denominada senha que peça para o usuário a hora,
// minutos e segundos. Se a hora for maior do que 9 a senha será o somatório de hora, 
// segundos e minutos multiplicado por 100, se a hora for menor do que 9, a senha será
// o somatório de hora, segundos e minutos multiplicado por 10.
//===============================================================================

//#include <iostream>
//#include <math.h>
//
//int Senha (int Hora, int Minutos, int Segundos)
//{
//    int Senha;
//    
//    std::cout << "Digite a hora" << std::endl;
//    std::cin >> Hora;
//
//    std::cout << "Digite a Minutos" << std::endl;
//    std::cin >> Minutos;
//
//    std::cout << "Digite a Segundos" << std::endl;
//    std::cin >> Segundos;    
//    
//    if (Hora > 9)
//    { 
//        Senha = (Hora + Minutos + Segundos) * 100;       
//    }else
//        if (Hora < 9)
//        {
//            Senha = (Hora + Minutos + Segundos) * 10;
//        }
//    
//    return Senha;
//}
//
//int main ()
//{
//    int Hora, Minutos, Segundos, Resultado;
//    Resultado = Senha(Hora, Minutos, Segundos);
//    
//    std::cout << "A senha é: " << Resultado << std::endl;
//    
//    return 0;
//}

//==============================================================================
//Escreva uma função, denominada exerc2, que recebe um numero
// inteiro. E que retorna a soma de todos os digitos pares adicionada ao produto dos
// digitos impares. (ex: 5234, retorna 21)
////===============================================================================
//
//#include <iostream>
//#include <math.h>
//
//int numero;
//int ND;
//int SomaPar = 0;
//int MultImpar = 1;
//int Resultado;
//
//int Exer2 (int numero)
//{
//    std::cout << "Digite um numero inteiro" << std::endl;
//    std::cin >> numero;
//    
//    ND = log10(numero) + 1;
//    int Vetor[ND];
//    
//    for (int i=0; i<ND; i++)
//    {
//        int aux;
//        aux = numero/pow(10,i);
//        Vetor[i] = aux%10;
//        
//        if (Vetor[i]%2 == 0)
//        {
//            SomaPar = SomaPar + Vetor[i];
//        }
//        if (Vetor[i]%2 != 0)
//        {
//            MultImpar = MultImpar * Vetor[i];
//        }
//    }
//    
//    if (SomaPar == 0 && MultImpar == 1)
//    {
//        MultImpar = 0;
//    }
//    
//    return SomaPar + MultImpar;;
//}
//
//int main ()
//{
//    int numero, Resultado;
//    Resultado = Exer2(numero);
//    
//    std::cout << "O resultado é: " << Resultado << std::endl;
//    
//    return 0;
//}

//==============================================================================
//Escreva uma função que receba dois vetores inteiros, vet1 e vet2, 
// com o mesmo tamanho tam. A função deverá retornar o primeiro indice do vetor1, 
// que possui um elemento com valor igual ao somatório de todos os elementos do vetor 2.
// Caso não exista nenhum elemento nessa situação em vet1, a função deverá retornar
// -1. (int indice (int ve1[], int vet2[], int tam)
//==============================================================================

//#include <iostream>
//
//int Indice (int Vet1[], int Vet2[], int tam)
//{
//    std::cout << "Digite o tamanho dos vetores" << std::endl;
//    std::cin >> tam;
//    
//    std::cout << "Digite os elementos do vetor 1, separado por espaços:" << std::endl;
//    for (int i=0; i<tam; i++)
//    {
//        std::cin >> Vet1[i];
//    }
//    
//    std::cout << "Digite os elementos do vetor 2, separado por espaços:" << std::endl;
//    for (int i=0; i<tam; i++)
//    {
//        std::cin >> Vet2[i];
//    }
//    
//    //somatorio dos elementos do vet2
//    int Soma = 0;
//    
//    for (int i=0; i<tam; i++)
//    {        
//        Soma = Soma + Vet2[i];
//    }
//    
//    //verificar se um elemento de vet 1 é o somatorio dos elementos de vet2
//    int Resultado;
//    
//    for (int i=0; i<tam; i++)
//    {
//        if (Vet1[i] == Soma)
//        {
//            Resultado = i;
//        }else
//        {
//            Resultado = -1;
//        }
//    }
//    
//    return Resultado;
//}
//
//int main ()
//{
//    int tam, Vet1[tam], Vet2[tam];
//    int Resultado;
//    
//    Resultado = Indice(Vet1, Vet2, tam);
//    std::cout << "O resultado é: " << Resultado << std::endl;
//    
//    return 0;
//}

//==============================================================================
//Dados 2 vetores de inteiros A=[a1,a2,a3] e B=[b1,b2,b3] :
//a) Crie uma função que leia estes vetores do teclado
//b) Crie um função que calcule o produto escalar entre estes vetores.
//c) Crie uma função que calcule o produto vetorial entre estes vetores.
//d) Crie uma função que imprima o resultado na tela
//dados:
//produto escalar C = A*B=a1b1 + a2b2 + a3b3
//produtor vetorial C =[a2b3 – a3b2, a3b1 – a1b3, a1b2 - a2b1]
//==============================================================================        

//#include <iostream>
//#include <math.h>
//
////a) Crie uma função que leia estes vetores do teclado
//
//int Leitura (int A[3], int B[3])
//{
//    std::cout << "Digite os 3 elementos do vetor A, separados por espaço:" << std::endl;
//    for (int i=0; i<3; i++)
//    {
//        std::cin >> A[i];
//    }
//    
//    std::cout << "Digite os 3 elementos do vetor B, separados por espaço:" << std::endl;
//    for (int i=0; i<3; i++)
//    {
//        std::cin >> B[i];
//    }
//}
//
////b) Crie um função que calcule o produto escalar entre estes vetores.
//
//int ProdutoEscalar (int A[3], int B[3])
//{
//    int C;
//    C = ((A[0]*B[0]) + (A[1]*B[1]) + (A[2]*B[2]));
//}
//
////c) Crie uma função que calcule o produto vetorial entre estes vetores.
//
//int ProdutoVetorial (int A[3], int B[3])
//{
//    int C1, C2, C3;
//    C1 = (A[1]*B[2]-A[2]*B[1]);
//    C2 = (A[2]*B[0]-A[0]*B[2]);
//    C3 = (A[0]*B[1]-A[1]*B[0]);
//}
//
////d) Crie uma função que imprima o resultado na tela
//
//int Resultado (int A[3], int B[3])
//{
//  int C, C1, C2, C3;
//  C = ProdutoEscalar(A, B);
//  C1 = ProdutoVetorial (A, B);
//  C2 = ProdutoVetorial (A, B);
//  C3 = ProdutoVetorial (A, B);
//
//
//  std::cout << "O Produto Escalar é: " << C << std::endl;
//  std::cout << "O Produto Vetorial é: " << C1 << ", " << C2 << ", " << C3 << std::endl;
//}    
//
//int main ()
//{
//    int A[3], B[3];
//    
//    Leitura (A, B);
//    ProdutoEscalar (A, B);
//    ProdutoVetorial (A, B);
//    
//    Resultado(A, B);
//    
//    return 0;
//}

//==============================================================================
//Escreva um programa que leia três matrizes A, B e C de elementos 
//inteiros, sendo A uma matriz 3 x 6, B uma matriz 6 x 3 e C uma matriz 3 x 3. 
//O programa deverá imprimir os dados de uma matriz D, resultado da multiplicação 
//de A com B, somado à matriz C.
//==============================================================================

//#include <iostream>
//
//void LerMatriz (int A[3][6], int B[6][3], int C[3][3])
//{
//    std::cout << "Digite os elementos da matriz A[3x6]" << std::endl;    
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<6; j++)
//        {
//            std::cin >> A[i][j];
//        }
//    }
//        
//    std::cout << "Digite os elementos da matriz B[6x3]" << std::endl;    
//    for (int i=0; i<6; i++)
//    {
//        for (int j=0; j<3; j++)
//        {
//            std::cin >> B[i][j];
//        }
//    }
//    
//    std::cout << "Digite os elementos da matriz C[3x3]" << std::endl;    
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<3; j++)
//        {
//            std::cin >> C[i][j];
//        }
//    }
//}
//
//int SomaMult (int A[3][6], int B[6][3], int C[3][3], int D[3][3])
//{
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<3; j++)
//        {
//            int aux = 0;
//            
//            for (int k=0; k<6; k++)
//            {
//                aux = aux + (A[i][k] * B[k][j]);
//            }
//            
//            D[i][j] = aux + C[i][j];
//        }
//    }
//}
//
//void ImprimeMatriz (int D[3][3])
//{
//    std::cout << "Matriz D " << std::endl;
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<3; j++)
//        {
//            std::cout << D[i][j] << std::endl;
//        }
//    }
//}
//
//int main ()
//{
//    int A[3][6], B[6][3], C[3][3], D[3][3];
//    
//    LerMatriz(A, B, C);
//    SomaMult(A, B, C, D);
//    ImprimeMatriz(D);
//}


//==============================================================================
//Escreva uma função que diga se o produto entre duas matrizes é simétrica
// ou anti-simétrica. ( anti -> matriz = (- matriz transposta) 
// obs: matriz transposta = troca i com j (linha com coluna)
//==============================================================================

//#include <iostream>
//
//void LerMatriz (int A[2][3], int B[3][2])
//{
//    std::cout << "Digite os elementos da matriz A:" << std::endl;
//    for (int i=0; i<2; i++)
//    {
//        for (int j=0; i<3; i++)
//        {
//            std::cin >> A[i][j];
//        }
//    }
//    
//    std::cout << "Digite os elementos da matriz B" << std::endl;
//    for (int i=0; i<3; i++)
//    {
//        for (int j=0; j<2; j++)
//        {
//            std::cin >> B[i][j];
//        }
//    }
//}
//
//int ProdutoMatriz (int A[2][3], int B[3][2], int C[2][2])
//{
//    for (int i=0; i<2; i++)
//    {
//        for (int j=0; j<2; j++)
//        {
//            int aux = 0;           //-> ou C[i][j] = 0;
//            
//            for (int k=0; k<3; k++)
//            {
//                C[i][j] = aux + (A[i][k] * B[k][j]);       //-> ou ´C[i][j] = C[i][j]+ A[i][k] * B[k][j];
//            }
//        }
//    }
//}
//
//void AntiSimetrica (int C[2][2])
//{
//    int antisim = 1;
//    
//    for (int i=0; i<2; i++)
//    {
//        for (int j=0; j<2; j++)
//        {
//            if (C[i][j] != - C[i][j])
//            {
//                antisim == 0;
//            }
//        }
//    }
//    
//    if (antisim == 1)
//    {
//        std::cout << "A matriz produto é anti-simétrica" << std::endl;
//    }else
//    {
//        std::cout << "A matriz produto não é anti-simrétrica" << std::endl;
//    }
//    
//}
//
//int main ()
//{
//    int A[2][3], B[3][2], C[2][2];
//    
//    LerMatriz (A, B);
//    ProdutoMatriz (A, B, C);
//    AntiSimetrica (C);
//    
//    return 0;
//}
//==============================================================================
//Uma matriz quadrada inteira é denominada "matriz interessante" se as seguintes condições
//são atendidas:
//a. a soma de todos os seus elementos é igual à multiplicação dos elementos da diagonal principal
//b. para cada linha, a multiplicação dos seus elementos gera um valor multiplo de 3
//c. a soma dos elementos da primeira coluna é igual a multiplicação dos elementos da ultima coluna
//Escreva um programa que verifica se uma matriz de n linhas e n colunas representa uma matriz interessante
//==============================================================================
//#include <iostream>
//#include <vector>
//
//typedef std::vector <int>           VecInt;
//
//void LerMatriz (int n, int A[2][2])
//{
//    std::cout << "Digite o valor de n (linhas e colunas) da matriz" << std::endl;
//    std::cin >> n;
//    
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            std::cout << "Digite o elemento A" << i+1 << j+1 << " da matriz A" << std::endl;
//            std::cin >> A[i][j];
//        }
//    }
//}
//
////a. a soma de todos os seus elementos é igual à multiplicação dos elementos da diagonal principal
//int SomaMatriz (int n, int A[2][2])
//{
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            int Soma = 0;
//            Soma = Soma + A[i][j];  
//        }
//    }
//}
//
//int MultDiag (int n, int A[2][2])
//{
//    for (int i=0; i<n; i++)
//    {
//        int Mult = 1;
//        Mult = Mult * A[i][i];        
//    }
//}
//
////b. para cada linha, a multiplicação dos seus elementos gera um valor multiplo de 3
//VecInt          VetMult(3,1);
//int ContaMult = 0;
//
//int Multiplo (int n, int A[2][2])
//{
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {   
//            VetMult[i] = VetMult[i] * A[i][j];
//        }
//    }
//   
//    for(int i=0; i<n; i++)
//    {
//        if (VetMult[i]%3 == 0) 
//        {
//            ContaMult = ContaMult + 1;
//        }
//    }
//    
//    int Resultado = ContaMult;
//    
//    return Resultado;
//}
//
////c. a soma dos elementos da primeira coluna é igual a multiplicação dos elementos da ultima coluna
//int Coluna (int n, int A[2][2])
//{
//    for (int i=0; i<n; i++)
//    {
//        int SomaCol = 0;
//        SomaCol = SomaCol + A[i][0];
//        
//        int MultCol = 1;
//        MultCol = MultCol * A[i][n-1];
//    }
//}
//
//
//int main ()
//{
//    int n, A[2][2], Soma, Mult, Resultado, SomaCol, MultCol;
//    
//    LerMatriz (n,A);
//    SomaMatriz (n, A);
//    MultDiag (n, A);
//    Multiplo (n, A);
//    Coluna (n, A);
//    
//    std::cout << "O conta multiplo deu: " << Resultado << std::endl;
//    
//    if (Soma==Mult && Resultado==3 && SomaCol==MultCol) 
//    {
//        std::cout << "A matriz é uma matriz interessante" << std::endl;        
//    }else
//    {
//        std::cout << "A matriz não é uma matriz interessante" << std::endl;   
//    }
//    
//    return 0;
//}

//===============================================================================
//Matriz Quadrada inteira "quadrado especial", se a soma dos elementos 
// de cada linha, a soma dos elementos de cada coluna e a soma dos elementos da diagonal
// principal são todos iguais. Escreva um programa que verifica se uma matriz de n linhas e 
// n colunas representa um quadrado especial
//==============================================================================

//#include <iostream>
//#include <vector>
//
//typedef std::vector <int>               VecInt;
//
//int main ()
//{
//    int n;
//    
//    std::cout << "Digite o numero de linhas e colunas da matriz quadrada" << std::endl;
//    std::cin >> n;
//    
//    int A[n][n];
//    
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            std::cout << "Digite o elemento A" << i+1 << j+1 << "da matriz" << std::endl;
//            std::cin >> A[i][j];
//        }
//    }
//    
//    std::cout << "A matriz inserida é: " << std::endl;
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            std::cout << A[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//    std::cout << std::endl;
//        
//    //Soma dos elementos de cada linha
//   VecInt              SomaLinha (n,0);
//    
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            SomaLinha[i] = SomaLinha[i] + A[i][j];
//        }
//    }
//    
//    //Soma dos elementos de cada coluna
//    VecInt             SomaColuna (n,0);
//    
//    for (int j=0; j<n; j++)
//    {
//        for (int i=0; i<n; i++)
//        {
//            SomaColuna [j] = SomaColuna [j] + A[i][j];
//        }
//    }
//    
//    //Soma dos elementos da diagonal principal
//    int SomaDiagonal = 0;
//    
//    for (int i=0; i<n; i++)
//    {
//        SomaDiagonal = SomaDiagonal + A[i][i];
//    }
//    
//    int Contador = 0;
//    
//    for (int i=0; i<n; i++)
//    {
//        if (SomaLinha[i]==SomaColuna[i] && SomaLinha[i]==SomaDiagonal && SomaColuna[i]==SomaDiagonal)
//        {
//            Contador = Contador + 1;
//        }
//    }
//    
//    if (Contador==n && n>0)
//    {
//        std::cout << "A matriz inserida é quadrado especial" << std::endl;
//    }else
//    {
//        std::cout << "A matriz inserida não é quadrado especial" << std::endl;
//    }
//    
//    return 0;
//}

//==============================================================================
//Dizemos que uma matriz inteira Anxn é uma matriz de permutação se 
// em cada linha e em cada coluna houver n-1 elementos nulos e um único elemento 
// igual a 1.  (ex: a11=1, a12=0, a21=0, a22=1)
//==============================================================================

//#include <iostream>
//
//int main ()
//{
//    int n;
//    std::cout << "Digite a dimensão da matriz quadrada" << std::endl;
//    std::cin >> n;
//    
//    int A[n][n];
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            std::cout << "Digite o elemeto A" << i+1 << j+1 << " da matriz" << std::endl;
//            std::cin >> A[i][j];
//        }
//    }
//    
//    //saber se a matriz é de permutação 
//    int p = 0;
//    int k = 0;
//       
//    for (int i=0; i<n; i++)
//    {
//        for (int j=0; j<n; j++)
//        {
//            if (A[i][j] == 1) k++;
//            if (A[i][j] == 0) p++;           //p -> numero de zeros
//        }
//    }
//    
//    if ((k == n) && (p == (n*(n-1))) && n>0)
//    {
//        std::cout << "A matriz A é de permutação" << std::endl;
//    }else
//    {
//        std::cout << "A matriz A não é de permutação" << std::endl;
//    }
//    
//    return 0;
//}

//==============================================================================
//                         Matriz, inserindo e lendo
//==============================================================================
//
//#include <iostream>
//
//int main ()
//{
//    int linha_a, coluna_a;
//    std::cout << "Digite o numero de linhas da matriz A" << std::endl;
//    std::cin >> linha_a;        
//    
//    std::cout << "Digite o numero de colunas da matriz A" << std::endl;
//    std::cin >> coluna_a;
//    
//    int A[linha_a][coluna_a];
//    for (int i=0; i<linha_a; i++)
//    {
//        for (int j=0; j<coluna_a; j++)
//        {
//            std::cout << "Digite o elemento A" << i+1 << j+1 << "da matriz A" << std::endl;
//            std::cin >> A[i][j];
//        }
//    }
//    
//    std::cout << "A matriz inserida foi: " << std::endl;
//    for (int i=0; i<linha_a; i++)
//    {
//        for (int j=0; j<coluna_a; j++)
//        {
//            std::cout << A[i][j] << " ";
//        }
//    }
//    
//    return 0;
//}

//==============================================================================
//  Soma e Multiplicaçãos de todos os elementos da matriz e diagonal principal
//==============================================================================

//#include <iostream>
//
//int main ()
//{
//    int linha, coluna;
//    std::cout << "Digite o numero de linhas da matriz A" << std::endl;
//    std::cin >> linha;        
//    
//    std::cout << "Digite o numero de colunas da matriz A" << std::endl;
//    std::cin >> coluna;
//    
//    int A[linha][coluna];
//    for (int i=0; i<linha; i++)
//    {
//        for (int j=0; j<coluna; j++)
//        {
//            std::cout << "Digite o elemento A" << i+1 << j+1 << "da matriz A" << std::endl;
//            std::cin >> A[i][j];
//        }
//    }
//       
//    //Soma Matriz  
//    int SomaMatriz = 0;
//    for (int i=0; i<linha; i++)
//    {
//        for (int j=0; j<coluna; j++)
//        {
//            SomaMatriz = SomaMatriz + A[i][j];
//        }
//    }
//   
//    std::cout << "O resultado da soma é: " << SomaMatriz << std::endl;
//    
//    //Multiplica Matriz
//    int MultMatriz = 1;
//    for (int i=0; i<linha; i++)
//    {
//        for (int j =0; j<coluna; j++)
//        {
//            MultMatriz = MultMatriz * A[i][j];
//        }
//    }
//    
//    std::cout << "O resultado da multiplicaçao é: " << MultMatriz << std::endl;

//    //Soma e Multiplicação dos elementos da diagonal principal
//    int SomaDiagonal = 0;
//    int MultDiagonal = 1;
//    
//    for (int i=0; i<n; i++)
//    {
//        SomaDiagonal = SomaDiagonal + A[i][i];
//        MultDiagonal = MultDiagonal * A[i][j];
//    }

//    std::cout << "A soma da diagonal principal é: " << SomaDiagonal << std::endl;
//    std::cout << "A multiplicação da diagonal principal é: " << MultDiagonal << std::endl;
//        
//    return 0;
//}

//==============================================================================
// Soma e Multiplicaçãos de todos os elementos de cada linha e coluna da matriz
//==============================================================================

//#include <iostream>
//#include <vector>
//
//typedef std::vector <int>                 VecInt;
//
//int main ()
//{
//    int linha, coluna;
//    std::cout << "Digite o numero de linhas da matriz A" << std::endl;
//    std::cin >> linha;        
//    
//    std::cout << "Digite o numero de colunas da matriz A" << std::endl;
//    std::cin >> coluna;
//    
//    int A[linha][coluna];
//    for (int i=0; i<linha; i++)
//    {
//        for (int j=0; j<coluna; j++)
//        {
//            std::cout << "Digite o elemento A" << i+1 << j+1 << "da matriz A" << std::endl;
//            std::cin >> A[i][j];
//        }
//    }
//   
//    //Soma  e Multiplicação de todos os elementos de cada linha
//    VecInt            SomaLinha (linha,0);
//    VecInt            MultLinha (linha,1);
//    
//    for (int i=0; i<linha; i++)
//    {
//        for (int j=0; j<coluna; j++)
//        {
//            SomaLinha [i] = SomaLinha[i] + A[i][j];
//            MultLinha [i] = MultLinha [i] * A[i][j];
//        }
//    }
//    
//    for (int i=0; i<linha; i++)
//    {
//        for (int j=0; j<coluna; j++)
//        {
//            std::cout << "A Soma da linha " << i << " é: " << SomaLinha[i] << std::endl;
//            std::cout << "A Multiplicação da linha " << i << " é: " << MultLinha[i] << std::endl;
//        }
//    }
//    
//    //Soma Multiplicação de todos os elementos de cada coluna
//    VecInt            SomaColuna (coluna,0);
//    VecInt            MultColuna (coluna,1);
//    
//    for (int j=0; j<coluna; j++)
//    {
//        for (int i=0; i<linha; i++)
//        {
//            SomaColuna [j] = SomaColuna [j] + A[i][j];
//            MultColuna [j] = MultColuna [j] * A[i][j];
//        }
//    }
//    
//    for (int j=0; j<coluna; j++)
//    {
//        for (int i=0; i<linha; i++)
//        {
//            std::cout << "A Soma da coluna " << i << " é: " << SomaColuna[j] << std::endl;
//            std::cout << "A Multiplicação da coluna " << i << " é: " << MultColuna[j] << std::endl;
//        }
//    }
//    
//    return 0;
//}

//==============================================================================
// Busca Binária, vetor de 20 posicoes ordenados, o usuario digitará
// um numero e deverá retornar se este numero está contido no vetor e em qual posicao
//==============================================================================
//#include<iostream>
//
//int v[]={2,5,7,9,10,14,22,25,30,40,50,51,60,61,66,78,90,91,92,93};
//int dim = 20, n, esq, dir, meio;
//
//void BuscaBinaria(int n, int dim, int v[])
//{
//    esq = -1;
//    dir = dim;
//    //dim=sizeof(v)/sizeof(int); ///determina a dimensão do vetor
//    
//    while(esq < dir-1)
//    {
//        meio = (esq+dir)/2;
//        
//            if(v[meio] < n)
//            {
//                esq = meio;
//            }else
//            {
//                dir = meio;
//            }
//}
//    if(v[dir] == n) 
//    {
//        std::cout << "O número digitado " << n << " esta na posicao:" << dir;
//    }else 
//    {
//        std::cout << "O número digitado " << n << " nao se encontra no vetor";
//    }
//
//}
//
//int main ()
//{
//    std::cout << " Digite um numero inteiro:";
//    std::cin >> n;
//    
//    BuscaBinaria(n,dim,v);
//    
//    return 0;
//}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         







