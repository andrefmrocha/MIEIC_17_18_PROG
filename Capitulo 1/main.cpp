#include <iostream>
#include <cmath>
using namespace std;
int exercicio_1()
{
    char car;
    cout << "Introduz o carácter: ";
    cin >> car;
    cout << int(car);
}

int exercicio_2 (float valor_1, float valor_2, float valor_3)
{
    float media;
    float A_media;
    float B_media;
    float C_media;
    media=valor_1+valor_2+valor_3;
    media=media/3;
    A_media=valor_1-media;
    B_media=valor_2-media;
    C_media=valor_3-media;
    cout << "media = " << media << endl;
    cout << "A-media = " << A_media << endl;
    cout << "B-media = " << B_media << endl;
    cout << "C-media = " << C_media << endl;

}

int exercicio_3()
{
    float m_material, raio, m_esfera;
    cout << "Indica a massa do material: ";
    cin >> m_material;
    cout << "Indica o raio da esfera: ";
    cin >>raio;
    m_esfera= static_cast<float>(4 * m_material * pow(raio, 3) * M_PI);
    m_esfera=m_esfera/3;
    cout << "A massa da esfera é " << m_esfera << endl;
}

int exercicio_4()
{
    float a, b, c, d, e, f;
    cout << "a ? ";
    cin >> a;
    cout << "b ? ";
    cin >> b;
    cout << "c ? ";
    cin >> c;
    cout << "d ? ";
    cin >> d;
    cout << "e ? ";
    cin >> e;
    cout << "f ? ";
    cin >> f;
    double x, y;
    x=(c*e-b*f)/(a*e-b*d);
    y=(a*f-c*d)/(a*e-b*d);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int exercicio_5()
{
    int hora_1, hora_2, minuto_1, minuto_2, segundo_1, segundo_2;
    cout << "Tempo 1 (horas minutos segundos) ?";
    cin >> hora_1;
    cin >> minuto_1;
    cin >> segundo_1;
    segundo_1=segundo_1+minuto_1*60+hora_1*3600;
    cout << "Tempo 2 (horas minutos segundos) ?";
    cin >> hora_2;
    cin >> minuto_2;
    cin >> segundo_2;
    segundo_2=segundo_2+minuto_2*60+hora_2*3600;
    int hora, minuto, segundo, dia;
    segundo=segundo_1+segundo_2;
    dia=segundo/3600;
    dia=dia/24;
    segundo=segundo-(3600*24*dia);
    hora=segundo/3600;
    segundo=segundo-(3600*hora);
    minuto=segundo/60;
    segundo=segundo-(minuto*60);
    cout << "Soma dos tempos:" << dia << " dia(s), " << hora << " hora(s), " << minuto << " minuto(s), " << segundo << " segundo(s), ";
}

int exercicio_6()
{
    float x_a, x_b, x_c, y_a, y_b, y_c;
    double a, b, c, s;
    cout << "Coordenadas de a? ";
    cin >> x_a;
    cin >> y_a;
    cout << "Coordenadas de b? ";
    cin >> x_b;
    cin >> y_b;
    cout << "Coordenadas de c? ";
    cin >> x_c;
    cin >> y_c;
    a=sqrt(pow((x_a-x_b),2)+pow((y_a-y_b),2));
    b=sqrt(pow((x_c-x_b),2)+pow((y_c-y_b),2));
    c=sqrt(pow((x_a-x_c),2)+pow((y_a-y_c),2));
    s=(a+b+c)/2;
    cout << "A área é " << sqrt(s*(s-a)*(s-b)*(s-c));

}
int main()
{
    exercicio_6();
}
/*
int main()          // Executar Ex.2
{   float A, B, C;
    cout << "A ? ";
    cin >> A;
    cout << "B ? ";
    cin >> B;
    cout << "C ? ";
    cin >> C;
    exercicio_2(A,B,C);
    return 0;
}*/

/*
int main() // Executar Exercício 3
{
    exercicio_3();
    return 0;
}*/


/*
int main()
{
    exercicio_4();
    return 0;
}*/

/*
int main()
{
    exercicio_5();
    return 0;
}
*/


/*
int main()
{
    exercicio_6();
    return 0;
}*/
