#include <iostream>
#include <string>

int inputArr[10];
float normArr[10];

void input()
{
    
    for (int i = 0; i < 10; i++)
    {
        std::cout << i + 1 << " number: ";
        std::cin >> inputArr[i];
    }
}

float srZnach()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += inputArr[i];
    }
    return sum / 10;
}

void normalization()
{
    int max = inputArr[0];
    int min = inputArr[0];

    for (int i = 0; i < 10; i++) //мин знач
    {
        if (min > inputArr[i]) min = inputArr[i];
    }

    for (int i = 0; i < 10; i++) //макс знач
    {
        if (max < inputArr[i]) max = inputArr[i];
    }

    for (int i = 0; i < 10; i++) //нормализация
    {
        normArr[i] = (inputArr[i] - min) / (max - min);
    }
}

int main()
{
    input();
    std::cout << "Srednee Znacheniye: ";
    std::cout << srZnach();

    std::cout << "  ";

    normalization();
    std::cout << "Normalizovanniy Massiv: ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << normArr[i] << " ";
    }
}