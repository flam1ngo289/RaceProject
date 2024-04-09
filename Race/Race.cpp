#include <iostream>
#include <string>
#include <Windows.h>
#include "AirVehicle.h"
#include "GroundVehicle.h"

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int e = 0;
    std::cout << "Добро пожаловать в симулятор гонок!" << std::endl;

    while (e != 2) {

        int RaceType = 0, distance = 0, a = 0, b = 0, ii = 1, sum = 0;

        std::string nameRaceType[4] = { "пустой элемент 0","Гонка для наземного транспорта.","Гонка для воздушного транспорта.","Гонка для наземного и воздушного транспорта." };
        int massIndex[10] = {};
        double mas_time[10] = {};
        std::string masName[10] = { "пустой элемент","пустой элемент","пустой элемент","пустой элемент","пустой элемент","пустой элемент","пустой элемент","пустой элемент","пустой элемент","пустой элемент" };
        std::string device[10] = { "пустой элемент 0","Ботинки - вездеходы", "Метла", "Верблюд", "Кентавр", "Орёл", "Верблюд-быстроход", "Ковёр-самолёт", "пустой элемент 8", "пустой элемент 9" };

        do {
            std::cout << "1. " << nameRaceType[1] << "\n"
                "2. " << nameRaceType[2] << "\n" <<
                "3. " << nameRaceType[3] << "\n" <<
                "Выберите тип гонки: ";
            std::cin >> RaceType;
            std::cout << "\n";
        } while (RaceType == 0 || RaceType > 3);

        do {
            std::cout << "Укажите длинну дистанции (должна быть положительна): ";
            std::cin >> distance;
        } while (distance <= 0);

        do {
            do {
                std::cout << "\n 1. Зарегистрировать транспорт." << "\n 2. Начать гонку.\n Выберите действие: ";
                std::cin >> a;
                if (ii < 3 && a == 2) {
                    std::cout << "\nДолжно быть зарегистрировано хотябы 2 транспортных средства.";
                    a = 5;
                }
            } while (a != 1 && a != 2);

            if (a == 1) {
                do {
                    std::cout << "\n" << nameRaceType[RaceType] << " Расстояние: " << distance << " ";
                    if (ii == 1) { std::cout << "\n Нет зарегистрированного транспорта"; }

                    else {
                        std::cout << "\n Зарегистрированные ТС: ";
                       
                            std::cout << masName[1];
                      
                            for (int i = 2; i < ii; ++i) {                       
                                    std::cout << ", ";                              
                                std::cout << masName[i];
                            }
                        }                  

                    std::cout << "\n 1. " << device[1] <<
                        "\n 2. " << device[2] <<
                        "\n 3. " << device[3] <<
                        "\n 4. " << device[4] <<
                        "\n 5. " << device[5] <<
                        "\n 6. " << device[6] <<
                        "\n 7. " << device[7] <<
                        "\n 0. Закончить регистрацию" <<
                        "\n Выберите транспорт или 0 для окончания процесса регистрации: ";

                    std::cin >> b;
                    if (b == 0) {
                        break;
                    }
                    else if (b > 7 || b < 0) {
                        std::cout << "\nВведите корректную цифру";
                        continue;
                    }

                    else if (RaceType == 1) {
                        if (b == 1 || b == 3 || b == 4 || b == 6) {

                            for (int i = 0; i < 10; ++i) {

                                if (masName[i] == device[b]) {
                                    std::cout << "\nДанный транспорт уже зарегистрирован";
                                    i = 15;
                                    b = 15;
                                    break;
                                }
                            }

                            if (b != 15) {
                                massIndex[ii] = b;
                                masName[ii] = device[b];
                                ++ii;
                            }
                        }

                        else {
                            std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
                            continue;
                        }
                    }

                    else if (RaceType == 2) {
                        if (b == 2 || b == 5 || b ==7) {

                            for (int i = 0; i < 10; ++i) {

                                if (masName[i] == device[b]) {
                                    std::cout << "\nДанный транспорт уже зарегистрирован";
                                    i = 15;
                                    b = 15;
                                    break;
                                }
                            }

                            if (b != 15) {
                                massIndex[ii] = b;
                                masName[ii] = device[b];
                                ++ii;
                            }
                        }

                        else {
                            std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
                            continue;
                        }
                    }

                    else {

                        for (int i = 1; i < 10; ++i) {
                            if (masName[i] == device[b]) {

                                std::cout << "\nДанный транспорт уже зарегистрирован";
                                i = 15;
                                b = 15;
                                continue;
                            }
                        }

                        if (b != 15) {

                            massIndex[ii] = b;
                            masName[ii] = device[b];
                            ++ii;
                        }
                    }

                } while (b != 0);
            }

        } while (a == 1);


        for (int i = 1; i < 10; ++i) {
            if (massIndex[i] == 1) {
                dinam_lib_Race::All_terrain_boots z1;
                mas_time[i] = z1.Funk_all_terrain_boots(distance);
                ++sum;
            }

            else if (massIndex[i] == 2) {
                dinam_lib_Race::Broom z2;
                mas_time[i] = z2.Funk_broom(distance);
                ++sum;
            }

            else if (massIndex[i] == 3) {
                dinam_lib_Race::Camel z3;
                mas_time[i] = z3.Funk_camel(distance);
                ++sum;
            }

            else if (massIndex[i] == 4) {
                dinam_lib_Race::Centaur z4;
                mas_time[i] = z4.Funk_centaur(distance);
                ++sum;
            }

            else if (massIndex[i] == 5) {
                dinam_lib_Race::Eagle z5;
                mas_time[i] = z5.Funk_eagle(distance);
                ++sum;
            }

            else if (massIndex[i] == 6) {
                dinam_lib_Race::Camel_speedboat z6;
                mas_time[i] = z6.Funk_camel_speedboat(distance);
                ++sum;
            }

            else if (massIndex[i] == 7) {
                dinam_lib_Race::Magic_carpet z7;
                mas_time[i] = z7.Funk_Magic_carpet(distance);
                ++sum;
            }
        }

        for (int i = 1; i < sum; ++i) {
            for (int j = 1; j < sum; ++j) {
                if (mas_time[j] > mas_time[j + 1]) {
                    double tmp = mas_time[j];
                    mas_time[j] = mas_time[j + 1];
                    mas_time[j + 1] = tmp;

                    std::string tmp2 = masName[j];
                    masName[j] = masName[j + 1];
                    masName[j + 1] = tmp2;
                }
            }
        }

        std::cout << "\nРезультат гонки: ";
        for (int i = 1; i < sum + 1; ++i) {
            std::cout << "\n" << i << ". " << masName[i] << ". Время: " << mas_time[i];
        }

        std::cout << "\n\n1. Провести ещё одну гонку\n2. Выйти\nВыберите действие: ";
        std::cin >> e;
    }

    system("pause");
}  