#include<iostream>


int levelLesma(int vel);

int main()
{
    int vel, n, level, aux, maior = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        std::cin >> vel;
        aux = levelLesma(vel);
        if(aux > maior)
            maior = aux;
    }
    std::cout << "Level " << maior;
    return 0;
}

int levelLesma(int vel)
{
    if(vel < 10)
        return 1;
    else if(vel < 20)
        return 2;
    else
        return 3;
}
