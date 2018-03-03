#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int exercicio_1()
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
    if (a*e-b*d == 0 || a*e-b*d) {
        cout << "Sistema Impossivel";

    }

    x=(c*e-b*f)/(a*e-b*d);
    y=(a*f-c*d)/(a*e-b*d);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

int exercicio_2_a()
{
    int valor_1, valor_2, valor_3, maior;
    cout << "Primeiro valor? " << endl;
    cin >> valor_1;
    cout << "Segundo valor? " << endl;
    cin >> valor_2;
    cout << "Terceiro valor? " << endl;
    cin >> valor_3;
    if (valor_1 < valor_2)
    {
        maior = valor_2;
    }
        else
    {
        maior=valor_1;
    }

    if (maior<valor_3)
    {
        maior=valor_3;
    }
    cout << "O maior valor é " << maior << endl;
}

int exercicio_2_b()
{
    int valor_1, valor_2, valor_3, flag;
    cout << "Primeiro valor? " << endl;
    cin >> valor_1;
    cout << "Segundo valor? " << endl;
    cin >> valor_2;
    cout << "Terceiro valor? " << endl;
    cin >> valor_3;
    if (valor_1>valor_2)
    {
        int mediador=valor_2;
        valor_2=valor_1;
        valor_1=mediador;
        flag=1;
    }
    if (valor_2>valor_3)
    {
        int mediador=valor_3;
        valor_3=valor_2;
        valor_2=mediador;
    }
    if (flag)
    {
        if (valor_1>valor_2)
        {
            int mediador=valor_2;
            valor_2=valor_1;
            valor_1=mediador;
            flag=1;
        }
        if (valor_2>valor_3)
        {
            int mediador=valor_3;
            valor_3=valor_2;
            valor_2=mediador;
        }
    }
    cout << "A ordem é a seguinte " << valor_1 << ", " << valor_2 << ", " << valor_3 << "." << endl;
}

int exercicio_2_c()
{
    double valor_1, valor_2, valor_3,soma_1, soma_2, soma_3;
    int flag=0;
    cout << "Primeiro valor? " << endl;
    cin >> valor_1;
    cout << "Segundo valor? " << endl;
    cin >> valor_2;
    cout << "Terceiro valor? " << endl;
    cin >> valor_3;
    soma_1=valor_1+valor_2;
    soma_2=valor_1+valor_3;
    soma_3=valor_2+valor_3;
    if (soma_1<=valor_3)
    {
        flag=1;
    }

    if (soma_2<=valor_2)
    {
        flag=1;
    }

    if (soma_3<=valor_1)
    {
        flag=1;
    }

    if (flag)
    {
        cout << "Não é possível construir um triangulo";
    }
    else
    {
        cout << "É possível construir um triangulo";
    }


}

int exercicio_3()
{
    double valor_1, valor_2, validez=1;
    double resultado;
    char operacao;
    cout << "Primeiro valor? " << endl;
    cin >> valor_1;
    cout << "Segundo valor? " << endl;
    cin >> valor_2;
    cout << "Tipo de operação? " << endl;
    cin >> operacao;
    switch (operacao)
    {
        case '+':
            resultado=valor_1+valor_2;
            break;
        case '-':
            resultado=valor_1-valor_2;
            break;
        case '*':
            resultado=valor_1*valor_2;
            break;
        case '/':
            resultado=valor_1/valor_2;
            break;
        default:
            validez=0;
    }

    if (validez)
    {
        cout << "O resultado é " << resultado << endl;
    } else
    {
        cout << "Operação inválida";
    }

}


int exercicio_4()
{
    int peso;
    cout << "Indique o peso da carga ";
    cin >> peso;
    if (peso<500)
    {
        cout << "O custo de transporte é de 5€." << endl;
    }
    else if (peso<=1000)
    {
        int peso_adicional=(peso-500)/100;
        cout << "O custo de transporte é de " << 5+(peso_adicional*1.5) << "€";
    }
    else
    {
        int peso_adicional=(peso-1000)/250;
        cout << "O custo de transporte é de " << 12.5+(peso_adicional*5) <<"€";
    }
}

int exercicio_5()
{
    double a, b, c, caso_notavel, resultado_1, resultado_2;
    cout << "Introduza os coeficientes (a b c): ";
    cin >> a;
    cin >> b;
    cin >> c;
    caso_notavel=pow(b,2)-4*a*c;
    if (caso_notavel<0)
    {
        caso_notavel=caso_notavel*(-1);
        caso_notavel=sqrt(caso_notavel)/(2*a);
        b=-b/(2*a);
        cout << "A equação tem 2 raízes complexas conjugadas: ";
        cout << b << "+" << caso_notavel<<"i e ";
        cout << b << "-" << caso_notavel<<"i";
    } else if (caso_notavel==0)
    {
        cout << "A equação tem apenas uma solução: " << b/(2*a);
    }
    else
    {
        caso_notavel=sqrt(caso_notavel)/(2*a);
        b=-b/(2*a);
        cout << "A equação tem 2 raízes conjugadas: ";
        cout << b << "+" << caso_notavel<< " e ";
        cout << b << "-" << caso_notavel;
    }
}


int exercicio_6_a()
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


int exercicio_6_b()
{
    int numero=5;
    bool primo=true;
    cout << "Números primos: ";
    cout << "2" << endl << "3" << endl;
    for (numero; numero<=100 ; numero++)
    {
        primo=true;
        for(int i=2;i<=sqrt(numero);i++)
        {
            int condicao;
            condicao=numero%i;
            if(condicao==0)
            {
                primo=false;
                break;
            }
        }
        if(primo)
        {
            cout << numero << endl;
        }

    }
}

int exercicio_6_c()
{
    int numero=5;
    bool primo=true;
    cout << "Números primos: ";
    cout << "2" << endl << "3" << endl;
    for (numero; numero<=10000 ; numero++)
    {
        primo=true;
        for(int i=2;i<=sqrt(numero);i++)
        {
            int condicao;
            condicao=numero%i;
            if(condicao==0)
            {
                primo=false;
                break;
            }
        }
        if(primo)
        {
            cout << numero << endl;
        }

    }
}

int exercicio_7_a()
{
    int ang=0;
    cout << "ang \t sen \t cos \t tan" << endl;
    while(ang<=90)
    {
        long double rad;
        rad=(ang*M_PI)/180;
        if(ang==90)
        {
            cout << ang << "\t" << setprecision(5) << sin(rad) << "\t" << setprecision(5) <<  cos(rad) << "\t" <<  setprecision(5) <<  "infinito" << endl;

        }
        cout << ang << "\t" << setprecision(5) << sin(rad) << "\t" << setprecision(5) <<  cos(rad) << "\t" <<  setprecision(5) <<  tan(rad) << endl;
        ang+=15;
    }
}


int exercicio_7_b()
{
    double ang_in, ang_fim, incremento;
    cout << "Indique um limite inferior e um superior, respetivamente ";
    cin >> ang_in >> ang_fim;
    cout << "\n Indique a taxa de incremento ";
    cin >> incremento;
    cout << "ang \t sen \t cos \t tan" << endl;
    while(ang_in<=ang_fim)
    {
        long double rad;
        rad=(ang_in*M_PI)/180;
        if((int)ang_in==90||(int)ang_in==270)
        {
            cout << ang_in << "\t" << setprecision(5) << sin(rad) << "\t" << setprecision(5) <<  cos(rad) << "\t" <<  setprecision(5) <<  "infinito" << endl;

        }
        else
        {
            cout << ang_in << "\t" << setprecision(5) << sin(rad) << "\t" << setprecision(5) << cos(rad) << "\t"
                 << setprecision(5) << tan(rad) << endl;
        }
        ang_in += incremento;
    }
}


int exercicio_8()
{
    double quantia,juros;
    int n_anos, i=0;
    cout << "Indique a quantia depositada: ";
    cin >> quantia;
    cout << "Indique a taxa de juros: ";
    cin >>juros;
    cout << "Indique o número de anos: ";
    cin >> n_anos;
    for(i=0;i<n_anos;i++)
    {
        quantia=quantia*(1+(juros/100));
    }
    cout << "A quantia final será " << quantia;
}

int exercicio_9_a()
{
    int numero_a_introduzir, contador=0, maior=-100000, menor=100000, soma=0;
    double media;
    do
    {
        cout << "Introduz um numero: ";
        cin >> numero_a_introduzir;
        if(numero_a_introduzir==0)
        {
            media=soma/contador;
            break;
        }
        cout << '\n';
        contador+=1;
        soma+=numero_a_introduzir;
        if(numero_a_introduzir<menor)
        {
            menor=numero_a_introduzir;
        }
        if(numero_a_introduzir>maior)
        {
            maior=numero_a_introduzir;
        }
    }while(true);
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior<<endl;
}

int exercicio_9_b()
{
    int numero_a_introduzir, contador=0, maior=-100000, menor=100000, soma=0, tamanho;
    double media;
    cout << "Indique o tamanho da sequencia ";
    cin >> tamanho;
    do
    {
        cout << "Introduz um numero: ";
        cin >> numero_a_introduzir;
        cout << '\n';
        contador+=1;
        soma+=numero_a_introduzir;
        if(numero_a_introduzir<menor)
        {
            menor=numero_a_introduzir;
        }
        if(numero_a_introduzir>maior)
        {
            maior=numero_a_introduzir;
        }
    }while(tamanho>contador);
    media=soma/contador;
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior<<endl;
}

int exercicio_10_a()
{
    int numero, primeiro, segundo, terceiro;
    cout << "Indique um numero de 3 digitos ";
    cin >> numero;
    cout <<'\n';
    primeiro=numero%10;
    segundo=numero%100;
    terceiro=(numero%1000)/100;
    if(primeiro==terceiro)
    {
        cout << "O numero e uma capicua";
    }
    else
    {
        cout << "O numero nao e uma capicua";
    }
}

int exercicio_10_b()
{
    int numero, numero_revertido=0, n;
    bool flag=true;
    cout << "Indique um número";
    cin >> numero;
    n=numero;
    while (n!=0)
    {
        numero_revertido=numero_revertido*10+n%10;
        n/=10;
    }

    while(numero!=0)
    {
        int digito, digito_revertido;
        digito=numero%10;
        digito_revertido=numero_revertido%10;
        if(digito!=digito_revertido)
        {
            flag=false;
            break;
        }
        numero/=10;
        numero_revertido/=10;
    }
    if(flag)
    {
        cout << "O numero e uma capicua";
    }
    else
    {
        cout << "O numero nao e uma capicua";
    }
}

double exercicio_11_a()
{
    double fracao_inferior=1;
    double numero_pi=4;
    for(int n=0;n<500;n++)
    {
        fracao_inferior+=2;
        if (n%2==0)
        {
            numero_pi=numero_pi-(4/fracao_inferior);
        }
        else
        {
            numero_pi=numero_pi+(4/fracao_inferior);
        }
    }
    cout << "Pi: " << numero_pi;
}

double exercicio_11_b()
{
    double fracao_inferior=1;
    double numero_nepper=1;
    for(int n=1;n<500;n++)
    {
        fracao_inferior*=n;
        numero_nepper=numero_nepper+(1/fracao_inferior);
    }
    cout << "Nepper : " << numero_nepper;
}

double exercicio_11_c()
{
    double fracao_inferior=1, fracao_superior;
    double numero_nepper=1;
    cout << "Indique a fracao superior";
    cin >> fracao_superior;
    for(int n=1;n<500;n++)
    {
        fracao_inferior*=n;
        if (n%2!=0)
        {
            numero_nepper=numero_nepper-(pow(fracao_inferior,n)/fracao_inferior);
        }
        else
        {
            numero_nepper=numero_nepper+(pow(fracao_inferior,n)/fracao_inferior);
        }
    }
    cout << "Numero : " << numero_nepper;
}

int exercicio_13()
{
    int numero;
    cout << "Introduza um numero";
    cin >> numero;

}

int exercicio_14()
{
    double dif, rqn, rq=1, delta=0.00001;
    int numero;
    cout << "Numero: ";
    cin >> numero;
    int Max_Iter=400, contador=0;
    cout << "rq \t" << "rqn \t" << "rqn² \t" << "dif \t" << endl;
    while(contador<Max_Iter)
    {
        rqn=(rq+(numero/rq))/2;
        dif=numero-pow(rqn,2);
        cout << rq << " \t" << rqn << " \t" << pow(rqn,2) << " \t" << dif << endl;
        if(dif<0)
        {
            dif=dif*(-1);
        }
        if(dif<=delta)
        {
            break;
        }
        contador+=1;
        rq=rqn;
    }
}

int exercicio_15() {
    int primeiro_numero, segundo_numero, t_inicial, tempo_final, resultado;
    srand(time(NULL));
    primeiro_numero = rand() % 10;
    segundo_numero = rand() % 10;
    t_inicial = time(NULL);
    cout << primeiro_numero << "*" << segundo_numero << "? ";
    cin >> resultado;
    tempo_final = time(NULL);
    if (resultado == (primeiro_numero * segundo_numero)) {
        int tempo_demorado = tempo_final - t_inicial;
        if (tempo_demorado < 5) {
            cout << "Bom!";
        } else if (tempo_demorado <= 10) {
            cout << "Suficiente";
        } else {

            cout << "Insuficiente";
        }
    } else {
        cout << "Muito mau!";
    }
}
int main()
{
    cout << "Que exercicio correr? ";
    int exercicio;
    cin >> exercicio;
    cout << exercicio;
    cout << "\n";
    switch(exercicio)
    {
        case 1:
            exercicio_1();
            break;
        case 21:
            exercicio_2_a();
            break;
        case 22:
            exercicio_2_b();
            break;
        case 23:
            exercicio_2_c();
            break;
        case 3:
            exercicio_3();
            break;
        case 4:
            exercicio_4();
            break;
        case 5:
            exercicio_5();
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
        case 71:
            exercicio_7_a();
            break;
        case 72:
            exercicio_7_b();
            break;
        case 8:
            exercicio_8();
            break;
        case 91:
            exercicio_9_a();
            break;
        case 92:
            exercicio_9_b();
            break;
        case 101:
            exercicio_10_a();
            break;
        case 102:
            exercicio_10_b();
            break;
        case 111:
            exercicio_11_a();
            break;
        case 112:
            exercicio_11_b();
            break;
        case 113:
            exercicio_11_c();
            break;
        case 14:
            exercicio_14();
            break;
        case 15:
            exercicio_15();
            break;
        default:
            cout << "Exercício não definido.";
    }
    return 0;
}