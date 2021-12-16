//Jan  Wolski 16.12.2021

#include <iostream>
#include <array>
#include <vector>

auto zadanie5_1() -> void
{
    int vector_length;
    int var;
    std::cout << "Podaj liczbe elementow wektora: ";
    std::cin >> vector_length;
    std::vector<int>vec;
    for(auto i = 0; i < vector_length; i++)
    {
        std::cout << "Wpisz vector[" << i << "]:";
        std::cin >> var;
        vec.push_back(var);
    }
    int temp = 0;
    int temp2;
    for(auto i = 0; i < vector_length; i++)
    {
        if(vec[i]>temp)
        {
            temp = vec[i];
            temp2 = i;
        }
    }
    std::cout << "Maksymalny element wektora to vec[" << temp2 << "] = " << temp;
}

auto zadanie5_2() -> void
{
    int tab_length;
    int var;
    std::cout << "Wpisz rozmiar tablicy";
    std::cin >> tab_length;
    int* tab;
    tab = new int [tab_length];
    for(auto i = 0; i < tab_length;i++)
    {
        std::cout << "Wpisz tab[" << i << "];";
        std::cin >> var;
        tab[i] = var;
    }
    for(auto i = 0; i < tab_length; i++)
    {
        std::cout << "Tab[ " << i <<"] = " << tab[i] << "\n";
    }
    std::cout << "\n-----------------\n";
    int x = tab_length/2;
    for(int i = 0; i < x; i++)
    {
        std::swap(tab[i],tab[tab_length-i-1]);
    }
    for(auto i = 0; i < tab_length; i++)
    {
        std::cout << "Tab[ " << i << "] = " << tab[i] << "\n";
    }
    delete[]tab;
}

auto main() -> int
{
    /*std::array<int,2>arr = {1,3};
    for(auto i = 0; i<2; i++) std::cout << arr[i] << "\n";
    std::cout << "\n";
    std::vector<int>vec = {1,2,3};
    for(auto i = 0; i < vec.size();i++) std::cout << vec[i] << std::endl;
    std::cout << "\n";
    vec.push_back(4);
    for(auto i = 0; i < vec.size();i++) std::cout << vec[i] << std::endl;
    std::cout << "\n";
    vec.pop_back();
    for(auto i = 0; i < vec.size();i++) std::cout << vec[i] << std::endl;
    std::cout << "\n";*/
    std::cout << "----------------zadanie 1------------------" << "\n";
    zadanie5_1();
    std::cout << "----------------zadanie 2------------------" << "\n";
    zadanie5_2();
    return 0;
}
