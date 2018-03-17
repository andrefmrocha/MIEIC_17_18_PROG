#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

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
    int number;
    cout << "Introduza o primeiro valor: ";
    cin >> number;
    vector1.push_back(number);
    for (int i=1; !cin.eof(); i++)
    {
        cout << "Introduza o proximo valor(CTRL+D para parar):";
        cin >> number;
        vector1.push_back(number);
    }
    return vector1;
}

void exercicio_7()
{
    vector<int> vetor=readIntVector();
    for(int i=0; i<vetor.size(); i++)
    {
        cout << "Posição numero " << i << " : " << vetor[i] << "\n";
    }

}

void bubblesort(vector<string> &vector)
{
    bool flag=true;
    size_t size = vector.size();

    while(flag)
    {
        flag = false;
        for(int i = 0; i<size-1; i++ )
        {
            if(vector[i][0]>vector[i+1][0])
            {
                flag=true;
                string x=vector[i];
                vector[i]=vector[i+1];
                vector[i+1]=x;
            }
        }
    }
}
void exercicio_8()
{
    vector<string> vector;
    vector.push_back("Andre");
    vector.push_back("Beatriz");
    vector.push_back("Daniel");
    vector.push_back("Andreia");
    vector.push_back("Carlos");
    bubblesort(vector);
    for(int i=0; i<vector.size(); i++)
    {
        cout << "Posição numero " << i << " : " << vector[i] << "\n";
    }

}

int BinarySearch(const vector<string> &vetor, string value)
{
    size_t bottom = 0;
    int middle;
    size_t top = vetor.size()-1;
    bool flag = false;
    while(bottom<top && !flag)
    {
        middle = (bottom + top)/2;
        if(vetor[middle] == value)
        {
            flag = true;
        }
        bottom++;
        top--;
    }
    if(!flag)
    {
        middle = -1;
    }

    return middle;

}

void exercicio_9()
{
    vector<string> vector;
    vector.push_back("Andre");
    vector.push_back("Beatriz");
    vector.push_back("Daniel");
    vector.push_back("Andreia");
    vector.push_back("Carlos");
    int indice;
    indice = BinarySearch(vector, "Daniel");
    if(indice == -1)
    {
        cout << "Valor não encontrado";
    }
    else
    {
        cout << "O valor pedido foi encontrada na posição de indíce " << indice;
    }
}



void removeDuplicates(vector<int> &vetor)
{
    vector<int> repetidos;
    int i = 0;
    while ( i < vetor.size() )
    {
        bool flag = false;
        int index = 0;
        while (index < repetidos.size())
        {
            if(repetidos[index] == vetor[i])
            {
                flag = true;
                break;
            }
            index++;
        }
        if(flag)
        {
            vector<int> new_vector;
            for(int i1 = 0; i1 < vetor.size(); i1++)
            {
                if(i1 == i)
                {
                    continue;
                }
                else
                {
                    new_vector.push_back(vetor[i1]);
                }
            }
            vetor=new_vector;

        }
        else
        {
            repetidos.push_back(vetor[i]);
            i++;
        }
    }
}



void exercicio_10()
{
    vector<int> vector;
    vector.push_back(5);
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(7);
    vector.push_back(4);
    vector.push_back(4);
    vector.push_back(2);
    vector.push_back(7);
    removeDuplicates(vector);
    for (int i = 0; i < vector.size(); i++)
    {
        cout << "Elemento de indice " << i << ": " << vector[i] << '\n';
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
        case 8:
            exercicio_8();
            break;
        case 9:
            exercicio_9();
            break;
        case 10:
            exercicio_10();
            break;
        default:
            cout << "Exercicio nao definido";
            break;
    }

}