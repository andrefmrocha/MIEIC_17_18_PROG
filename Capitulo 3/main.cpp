#include <iostream>
#include <cmath>

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
        default:
            cout << "Exercicio nao definido";

    }
    return 0;
}