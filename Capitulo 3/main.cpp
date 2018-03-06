#include <iostream>
using namespace std;

int exercicio_1()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
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