// STL.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{

    // Пример использования find для std::map
    map<string, int> studentScores = {
        {"Ваня", 85}, {"Петя", 92}, {"Наташа", 78}, {"Анна", 95}
    };
    string studentToFind = "Наташа";
    auto it = studentScores.find(studentToFind);
    if (it != studentScores.end()) {
        cout << "Оценка студента " << it->first << ": " << it->second << '\n';
        if (it->second >= 90) {
            cout << "Отличный результат!" << '\n';
        }
    } else {
        cout << "Студент не найден" << '\n';
    }

    // Пример использования count_if для std::unordered_map
    unordered_map<string, double> prices = {
        {"Яблоки", 89.99}, {"Бананы", 69.99}, 
        {"Апельсины", 99.99}, {"Груши", 129.99}
    };
    const int expensive_items = count_if(prices.begin(), prices.end(), 
        [](const auto& item) {
            return item.second > 90.0; // Подсчет товаров дороже 90 рублей
        });
    cout << "Количество товаров дороже 90 рублей: " << expensive_items << '\n';

    // Пример использования for_each для std::set
    set<int> temperatures = {-5, 0, 5, 10, 15, 20, 25};
    cout << "Температуры и их характеристика:" << '\n';
    for_each(temperatures.begin(), temperatures.end(), [](const int& temp) {
        cout << temp << "°C - ";
        if (temp < 0) cout << "морозно";
        else if (temp < 10) cout << "холодно";
        else if (temp < 20) cout << "тепло";
        else cout << "жарко";
        cout << '\n';
    });

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
