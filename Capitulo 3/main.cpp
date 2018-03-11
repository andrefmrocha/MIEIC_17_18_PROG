#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double area(float x_a, float x_b, float x_c,float y_a,float y_b,float y_c)
{
    double a, b, c, s;
    a=sqrt(pow((x_a-x_b),2)+pow((y_a-y_b),2));
    b=sqrt(pow((x_c-x_b),2)+pow((y_c-y_b),2));
    c=sqrt(pow((x_a-x_c),2)+pow((y_a-y_c),2));
    s=(a+b+c)/2;
    s=sqrt(s*(s-a)*(s-b)*(s-c));
    return s;
}

void exercicio_1()
{
    float x_a, x_b, x_c, y_a, y_b, y_c;
    double s;
    cout << "Coordenadas de a? ";
    cin >> x_a;
    cin >> y_a;
    cout << "Coordenadas de b? ";
    cin >> x_b;
    cin >> y_b;
    cout << "Coordenadas de c? ";
    cin >> x_c;
    cin >> y_c;
    s= area(x_a,y_a,x_b,y_b,x_c,y_c);
    cout << "A área é " << s;
}


void exercicio_2()
{
    int numero, i=2;
    bool primo=true;
    cout << "Que numero quer testar? ";
    cin >> numero;
    for(i;i<=sqrt(numero);i++)
    {
        int condicao;
        condicao=numero%i;
        if(condicao==0)
        {
            cout << "O numero nao e primo";
            primo=false;
            break;
        }
    }
    if(primo)
    {
        cout << "O numero é primo";
    }
}

void exercicio_4()
{
    double num;
    unsigned decimal;
    cout << "Que número arrendondar? ";
    cin >> num;
    cout << "Número de casas decimais? ";
    cin >> decimal;
    decimal=pow(10,decimal);
    num=floor(num*decimal+0.5)/decimal;
    cout << "Numero arredondado: " << num;

}

bool readFracc(int numerator, int denominator)
{
    bool flag=false;
    if (denominator==0||numerator==0)
    {
        flag=true;
    }
    return flag;
}

void exercicio_5_a()
{
    int numerator, denominator;
    bool flag;
    cout << "Indique o valor do numerador e do denominador, respetivamente: ";
    cin >> numerator >> denominator;
    flag=readFracc(numerator, denominator);
    if(numerator%denominator==0)
    {
        flag=true;
    }
    if(flag)
    {
        cout << "Não é uma fraccao";
    } else
    {
        cout << "É uma fraccao";
    }
}

void writeFacc(int numerator, int denominator)
{
    cout << numerator << "/"<< denominator;
}

void exercicio_5_b()
{
    int numerator, denominator;
    bool flag;
    cout << "Indique o valor do numerador e do denominador, respetivamente: ";
    cin >> numerator >> denominator;
    flag=readFracc(numerator, denominator);
    if(flag)
    {
        cout << "Nao e uma fraccao";
    }
    else if(numerator%denominator==0)
    {
        cout << numerator/denominator;
    }
    else
    {
        writeFacc(numerator, denominator);
    }
}

int reduceFracc(int &numerator, int &denominator)
{
    int numerador=numerator, denominador=denominator;
    while (true)
    {
        numerador=numerador%denominador;
        if(numerador==0)
        {
            numerador = denominador;
            break;
        }
        denominador=denominador%numerador;
        if(denominador==0)
        {
            break;
        }
    }
    return numerador;
}

int leituraNum()
{
    int numerator;
    cin >> numerator;
    return numerator;
}
void exercicio_5_c()
{
    int numerator, denominator, gcd;
    bool flag;
    cout << "Indique o valor do numerador e do denominador, respetivamente: ";
    cin >> numerator >> denominator;
    flag=readFracc(numerator, denominator);
    if(flag)
    {
        cout << "Nao e uma fraccao";
    }
    else if(numerator%denominator==0)
    {
        cout << numerator/denominator;
    }
    else
    {
        gcd=reduceFracc(numerator, denominator);
        numerator=numerator/gcd;
        denominator=denominator/gcd;
        writeFacc(numerator, denominator);
    }

}

void multFracc(int numerador_a, int denominador_a, int numerador_b, int denominador_b)
{
    int numerador_f, denominador_f;
    reduceFracc(numerador_a, denominador_a);
    reduceFracc(numerador_b, denominador_b);
    numerador_f=numerador_a*numerador_b;
    denominador_f=denominador_a*denominador_b;
    reduceFracc(numerador_f, denominador_f);
    cout << numerador_a << "/" << denominador_a << "*" << numerador_b << "/" << denominador_b << "=";
    cout << numerador_f << "/" << denominador_f;
}
void divFracc(int numerador_a, int denominador_a, int numerador_b, int denominador_b)
{
    int numerador_f, denominador_f;
    reduceFracc(numerador_a, denominador_a);
    reduceFracc(numerador_b, denominador_b);
    numerador_f=numerador_a*denominador_b;
    denominador_f=numerador_b*denominador_a;
    reduceFracc(numerador_f, denominador_f);
    cout << numerador_a << "/" << denominador_a << "/" << numerador_b << "/" << denominador_b << "=";
    cout << numerador_f << "/" << denominador_f;
}
void somaFracc(int numerador_a, int denominador_a, int numerador_b, int denominador_b)
{
    int numerador_f, denominador_f;
    reduceFracc(numerador_a, denominador_a);
    reduceFracc(numerador_b, denominador_b);
    denominador_f=denominador_a*denominador_b;
    numerador_a=numerador_a*denominador_b;
    numerador_b=numerador_b*denominador_a;
    numerador_f=numerador_a+numerador_b;
    reduceFracc(numerador_a, denominador_a);
    reduceFracc(numerador_b, denominador_b);
    reduceFracc(numerador_f,denominador_f);
    cout << numerador_a << "/" << denominador_a << "+" << numerador_b << "/" << denominador_b << "=";
    cout << numerador_f << "/" << denominador_f;

}
void subFracc(int numerador_a, int denominador_a, int numerador_b, int denominador_b)
{
    int numerador_f, denominador_f;
    reduceFracc(numerador_a, denominador_a);
    reduceFracc(numerador_b, denominador_b);
    denominador_f=denominador_a*denominador_b;
    numerador_a=numerador_a*denominador_b;
    numerador_b=numerador_b*denominador_a;
    numerador_f=numerador_a-numerador_b;
    reduceFracc(numerador_a, denominador_a);
    reduceFracc(numerador_b, denominador_b);
    reduceFracc(numerador_f,denominador_f);
    cout << numerador_a << "/" << denominador_a << "-" << numerador_b << "/" << denominador_b << "=";
    cout << numerador_f << "/" << denominador_f;

}


void exercicio_5_d()
{
    int numerador_a, numerador_b, denominador_a, denominador_b;
    char operacao;
    cout << "Introduza o valor do primeiro numerador: ";
    numerador_a=leituraNum();
    cout << "Introduza o valor do primeiro denominador: ";
    denominador_a=leituraNum();
    cout << "Introduza o valor do segundo numerador: ";
    numerador_b=leituraNum();
    cout << "Introduza o valor do segundo denominador: ";
    denominador_b=leituraNum();
    cout << "Introduza o símbolo aritmetico da operaçao que quer realizar ";
    cin >> operacao;
    switch(operacao)
    {
        case '+':
            somaFracc(numerador_a,denominador_a,numerador_b,denominador_b);
            break;
        case '-':
            subFracc(numerador_a,denominador_a,numerador_b,denominador_b);
            break;
        case '*':
            multFracc(numerador_a,denominador_a,numerador_b,denominador_b);
            break;
        case '/':
            divFracc(numerador_a,denominador_a,numerador_b,denominador_b);
            break;
        default:
            cout << "Operador nao reconhecido";

    }
}

bool Bissexto(int ano)
{
    bool flag = false;
    if(ano%400==0)
    {
        flag = true;
    }
    else if(ano%4==0)
    {
        if(ano%100!=0)
        {
            flag = true;
        }
    }
    return flag;

}
void exercicio_6_a()
{
    int ano;
    bool flag;
    cout << "Indique o ano a testar: ";
    cin >> ano;
    flag=Bissexto(ano);
    if(flag)
    {
        cout << "O ano é bissexto";
    }
    else
    {
        cout << "O ano não é bissexto";
    }
}

int dias_mes(bool flag, int mes)
{
    int dias=31;
    if(mes==2)
    {
        if(flag)
        {
            dias=29;
        }
        else
        {
            dias=28;
        }
    } else if(mes==4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias=30;
    }
    return dias;
}
void exercicio_6_b()
{
    int ano, mes,dias;
    bool flag;
    cout << "Indique o ano a testar: ";
    cin >> ano;
    flag=Bissexto(ano);
    cout << "Indique o mes a testar: ";
    cin >> mes;
    dias=dias_mes(flag, mes);
    cout << "O mes indicado tem " << dias << " dias";
}
int Babwani_Algorithm(int dia, int mes, int ano, bool flag)
{
    double s, a, c;
    int dia_semana;
    a=ano%100;
    s=ano/100;
    switch(mes)
    {
        case 1:
            c=6;
            break;
        case 2:
            if(flag)
            {
                c=3;
            }
            else
            {
                c=2;
            }
            break;
        case 3:
            c=3;
            break;
        case 4:
            c=6;
            break;
        case 5:
            c=1;
            break;
        case 6:
            c=4;
            break;
        case 7:
            c=6;
            break;
        case 8:
            c=2;
            break;
        case 9:
            c=5;
            break;
        case 10:
            c=0;
            break;
        case 11:
            c=3;
            break;
        case 12:
            c=5;
            break;
    }
    dia_semana=(floor((5*a)/4)+c+dia-2*(int(s)%4)+7);
    dia_semana=dia_semana%7;
    return dia_semana;

}

void exercicio_6_c()
{
    int ano, mes,dias, dia;
    bool flag;
    cout << "Indique o ano a testar: ";
    cin >> ano;
    flag=Bissexto(ano);
    cout << "Indique o mes a testar: ";
    cin >> mes;
    dias=dias_mes(flag, mes);
    cout << "Indique o dia a testar: ";
    cin >> dia;
    dia=Babwani_Algorithm(dia, mes, ano, flag);
    cout << "O dia da semana é " << dia;
}

void exercicio_6_d()
{
    int ano, mes,dias, dia=1;
    string month;
    bool flag;
    cout << "Indique o ano a testar: ";
    cin >> ano;
    flag=Bissexto(ano);
    cout << "Indique o mes a testar: ";
    cin >> mes;
    dias=dias_mes(flag, mes);
    cout << "\n \n";
    dia=Babwani_Algorithm(dia, mes, ano, flag);
    switch (mes)
    {
        case 1:
            month="Janeiro";
            break;
        case 2:
            month="Fevereiro";
            break;
        case 3:
            month="Março";
            break;
        case 4:
            month="Abril";
            break;
        case 5:
            month="Maio";
            break;
        case 6:
            month="Junho";
            break;
        case 7:
            month="Julho";
            break;
        case 8:
            month="Agosto";
            break;
        case 9:
            month="Setembro";
            break;
        case 10:
            month="Outubro";
            break;
        case 11:
            month="Novembro";
            break;
        case 12:
            month="Dezembro";
            break;

    }
    cout << month << "/" << ano << endl;
    cout << "Sáb\t" << "Dom\t" << "Seg\t" << "Ter\t" << "Qua\t" << "Qui\t" << "Sex\t" << endl;
    int contador=0;
    for(dia; dia>0; dia-=1)
    {
        cout << setw(3) << "\t";
        contador+=1;
    }
    contador=7-contador;
    dia=1;
    for (contador; contador>0;contador-=1)
    {
        cout << dia << "\t";
        dia+=1;
    }
    cout << "\n";
    int mudar_linha=0;
    for (dia; dia<=31;dia++)
    {
        if(mudar_linha==7)
        {
            mudar_linha=0;
            cout << "\n";
        }
        mudar_linha++;
        cout << dia << "\t";
    }

}
int main()
{
    int exercicio;
    cout << "Que exercicio pretende executar? ";
    cin >> exercicio;
    switch (exercicio)
    {
        case 1:
            exercicio_1();
            break;
        case 2:
            exercicio_2();
            break;
        case 4:
            exercicio_4();
            break;
        case 51:
            exercicio_5_a();
        case 52:
            exercicio_5_b();
            break;
        case 53:
            exercicio_5_c();
            break;
        case 54:
            exercicio_5_d();
            break;
        case 61:
            exercicio_6_a();
            break;
        case 62:
            exercicio_6_b();
            break;
        case 63:
            exercicio_6_c();
            break;
        case 64:
            exercicio_6_d();
            break;
        default:
            cout << "Exercicio nao definido";

    }
    return 0;
}