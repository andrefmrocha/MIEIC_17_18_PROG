#include <iostream>
#include <algorithm>
using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

bool readFrac(Fraction frac)
{
    bool flag=false;
    if(frac.denominator==0)
    {
        flag=true;
    }
    return flag;
}

void reduceFrac(Fraction &frac)
{
    int gcd =__gcd(frac.numerator, frac.denominator);
    frac.numerator=frac.numerator/gcd;
    frac.denominator=frac.denominator/gcd;
}
void writeFrac(Fraction frac)
{
    cout << frac.numerator << "/" << frac.denominator;
}

void somaFracc(Fraction frac_1, Fraction frac_2)
{
    Fraction frac_final;
    frac_1.numerator=frac_1.numerator*frac_2.denominator;
    frac_2.numerator=frac_2.numerator*frac_1.denominator;
    frac_final.numerator=frac_1.numerator+frac_2.numerator;
    frac_final.denominator=frac_1.denominator*frac_2.denominator;
    writeFrac(frac_1);
    cout << "+";
    writeFrac(frac_2);
    cout << "=";
    reduceFrac(frac_final);
    writeFrac(frac_final);
}

void subFracc(Fraction frac_1, Fraction frac_2)
{
    Fraction frac_final;
    frac_1.numerator=frac_1.numerator*frac_2.denominator;
    frac_2.numerator=frac_2.numerator*frac_1.denominator;
    frac_final.numerator=frac_1.numerator-frac_2.numerator;
    frac_final.denominator=frac_1.denominator*frac_2.denominator;
    writeFrac(frac_1);
    cout << "-";
    writeFrac(frac_2);
    cout << "=";
    reduceFrac(frac_final);
    writeFrac(frac_final);
}
void multFracc(Fraction frac_1, Fraction frac_2)
{
    Fraction frac_final;
    frac_final.numerator=frac_1.numerator*frac_2.numerator;
    frac_final.denominator=frac_1.denominator*frac_2.denominator;
    writeFrac(frac_1);
    cout << "*";
    writeFrac(frac_2);
    cout << "=";
    reduceFrac(frac_final);
    writeFrac(frac_final);
}
void divFracc(Fraction frac_1, Fraction frac_2)
{
    Fraction frac_final;
    frac_final.numerator=frac_1.numerator*frac_2.denominator;
    frac_final.denominator=frac_1.denominator*frac_2.numerator;
    writeFrac(frac_1);
    cout << "/";
    writeFrac(frac_2);
    cout << "=";
    reduceFrac(frac_final);
    writeFrac(frac_final);
}


void exercicio_5()
{
    bool flag;
    char op;
    Fraction frac_1, frac_2;
    cout << "Indique o numerador e o denominador, respetivamente: ";
    cin >> frac_1.numerator >> frac_1.denominator;
    flag=readFrac(frac_1);
    reduceFrac(frac_1);
    cout << "Indique o numerador e o denominador, respetivamente: ";
    cin >> frac_2.numerator >> frac_2.denominator;
    flag=readFrac(frac_2);
    reduceFrac(frac_2);
    cout << "Indique a operaçao a realizar (pelo sinal): ";
    cin >> op;
    switch(op)
    {
        case '+':
            somaFracc(frac_1, frac_2);
            break;
        case '-':
            subFracc(frac_1, frac_2);
            break;
        case '*':
            multFracc(frac_1, frac_2);
            break;
        case '/':
            divFracc(frac_1, frac_2);
            break;
        default:
            cout << "Operador nao reconhecido";

    }
}

int main()
{
    int exercicio;
    cout << "Que exercicio pretende executar? ";
    cin >> exercicio;
    switch (exercicio)
    {
        case 5:
            exercicio_5();
            break;
    }
}