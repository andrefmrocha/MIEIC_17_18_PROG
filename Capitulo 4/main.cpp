#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;
};

Fraction readFrac()
{
    Fraction frac;
    cout << "Indique o numerador e o denominador, respetivamente: ";
    cin >> frac.numerator >> frac.denominator;
    return frac;
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
    char op;
    Fraction frac_1, frac_2;
    frac_1=readFrac();
    reduceFrac(frac_1);
    frac_2 =readFrac();
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

void readIntArray(int a[],int nElem)
{
    for(int i=0; i<nElem; i++)
    {
        cout << "Indice "<< i << ": " << a[i] << '\n';
    }
}

int searchValueinIntArray(const int a[], int nElem, int value)
{
    int return_value=-1;
    for(int i=0; i<nElem; i++)
    {
        if (a[i]==value)
        {
            return_value=i;
        }
    }
    return return_value;
}

void exercicio_6_c()
{
    int nElem, numero, return_value;
    cout << "Indique o numero de elementos do array: ";
    cin >> nElem;
    int IntArray[]={1, 2, 3, 4, 5, 6, 7};
    readIntArray(IntArray, nElem);
    cout << "Que valor deseja procurar? ";
    cin >> numero;
    return_value=searchValueinIntArray(IntArray, nElem, numero);
    cout << "O valor encontra-se na posição de indice " << return_value;
}

int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[])
{
    int counter=0;
    for(int i=0; i<nElem;i++)
    {
        if(a[i]==value)
        {
            index[counter]=i;
            counter++;
        }
    }
    return counter;
}
void exercicio_6_d()
{
    int nElem, numero, num_return;
    cout << "Indique o numero de elementos do array: ";
    cin >> nElem;
    int IntArray[]={1, 2, 3, 4, 5, 5, 7};
    cout << "Que valor deseja procurar? ";
    cin >> numero;
    int index[nElem];
    num_return=searchMultValuesInIntArray(IntArray, nElem, numero, index);
    if(num_return==1)
    {
        cout << "O valor ocorre na posição " << index[0];
    }
    else
    {
        cout << "O valor ocorre nas posiçoes: ";
        for (int i = 0; i < num_return ; ++i)
        {
            cout << index[i] << ", ";
        }
    }
}

vector<int> readIntVector()
{
    vector<int> vector1;
    cout << "Introduza o primeiro valor: ";
    cin >> vector1[0];
    for (int i=1; !cin.fail(); i++)
    {
        cout << "Introduza o proximo valor(CTRL+D para parar):";
        cin >> vector1[i];
    }
    return vector1;
}

void exercicio_7()
{
    vector<int> vetor=readIntVector();
    for(int i=0; i<vetor.size(); i++)
    {
        cout << vetor[i] << "\n";
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
        case 61:
            exercicio_6_c();
            break;
        case 62:
            exercicio_6_d();
            break;
        case 7:
            exercicio_7();
            break;
        default:
            cout << "Exercicio nao definido";
            break;
    }

}