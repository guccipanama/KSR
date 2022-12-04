// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "lamp.h"
#include "room.h"
#include <iomanip>

int menu1()
{
    system("cls");
    std::cout << "КОНТРОЛИРУЕМАЯ САМОСТОЯТЕЛЬНАЯ РАБОТА" << std::endl;
    std::cout << "по дисциплине «Безопасность жизнедеятельности»" << std::endl;
    std::cout << "«РАСЧЕТ ИСКУССТВЕННОГО ОСВЕЩЕНИЯ»" << std::endl;
    std::cout << std::endl;
    std::cout << "Выполнил" << std::endl;
    std::cout << "Студент группы 6312 - 100503D" << std::endl;
    std::cout << "П.А.Шебалков" << std::endl;
    std::cout << std::endl;

    std::cout << "Задание 1" << std::endl;
    std::cout << "1. Заполнить таблицу заявленных характеристик" << std::endl;
    std::cout << "2. Заполнить таблицу измеренных характеристик" << std::endl;
    std::cout << "3. Вывести таблицы" << std::endl;

    std::cout << "Задание 2" << std::endl;
    std::cout << "4. Заполнить таблицу данных о помещении" << std::endl;
    std::cout << "5. Вывести таблицы" << std::endl;
    while (true)
    {
        int key = _getch();
        if ((key - '0' >= 1) || (key - '0' <= 5)) 
            return key - '0';
    }
}

Lamp AddDeclared(int i)
{
    system("cls");
    std::cout << "Введите заявленные данные о лампочках:" << std::endl;
    std::cout << "Лампочка номер " << i + 1 << std::endl;
    std::cout << "Название: ";
    std::string tmp_name;
    std::cin >> tmp_name;
    std::cout << std::endl;

    std::cout << "Тип:" << std::endl;
    std::cout << "1 - Лампа накаливания" << std::endl;
    std::cout << "2 - Компактная люминесцентная лампа" << std::endl;
    std::cout << "3 - Люминесцентная лампа" << std::endl;
    std::cout << "4 - Светодиодная лампа" << std::endl;
    int tmp_type = 0;
    while (tmp_type < 1 || tmp_type > 4)
    {
        std::cin >> tmp_type;
    }
    std::cout << std::endl;

    std::cout << "Стоимость: ";
    float tmp_cost;
    std::cin >> tmp_cost;
    std::cout << std::endl;

    std::cout << "Мощность: ";
    float tmp_power;
    std::cin >> tmp_power;
    std::cout << std::endl;

    std::cout << "Световой поток: ";
    float tmp_lux;
    std::cin >> tmp_lux;
    std::cout << std::endl;

    std::cout << "Срок службы: ";
    float tmp_dur;
    std::cin >> tmp_dur;
    std::cout << std::endl;

    Lamp ret(tmp_name, tmp_type, tmp_cost, tmp_power, tmp_lux, tmp_dur);
    return ret;
}

void AddMeasured(Lamp& lamp, int i)
{
    system("cls");
    std::cout << "Введите заявленные данные о лампочках:" << std::endl;
    std::cout << "Лампочка номер " << i + 1 << std::endl;
    std::cout << "Напряжение: ";
    float tmp_voltage;
    std::cin >> tmp_voltage;
    std::cout << std::endl;

    std::cout << "Сила тока: ";
    float tmp_amperage;
    std::cin >> tmp_amperage;
    std::cout << std::endl;

    std::cout << "Освещенность: ";
    float tmp_ill;
    std::cin >> tmp_ill;
    std::cout << std::endl;

    std::cout << "Коэфф. пульсации: ";
    float tmp_ripple;
    std::cin >> tmp_ripple;
    std::cout << std::endl;

    lamp.Measure(tmp_voltage, tmp_amperage, tmp_ill, tmp_ripple);
}

void Display1(std::vector<Lamp>& arr)
{
    system("cls");
    std::cout << "*Заявленные характеристики:*" << std::endl;;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|\t\t\t\t|" << arr[0].GetName() << "\t|" << arr[1].GetName() << "\t|" << arr[2].GetName() << "\t|" << arr[3].GetName() << "\t|" << arr[4].GetName() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Тип лампочки\t\t\t|" << arr[0].GetType() << "\t|" << arr[1].GetType() << "\t|" << arr[2].GetType() << "\t|" << arr[3].GetType() << "\t|" << arr[4].GetType() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Стоимость, руб\t\t\t|" << arr[0].GetCost() << "\t|" << arr[1].GetCost() << "\t|" << arr[2].GetCost() << "\t|" << arr[3].GetCost() << "\t|" << arr[4].GetCost() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Мощность P заявл., Вт\t\t|" << arr[0].GetDeclPower() << "\t|" << arr[1].GetDeclPower() << "\t|" << arr[2].GetDeclPower() << "\t|" << arr[3].GetDeclPower() << "\t|" << arr[4].GetDeclPower() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Световой поток Ф заявл., лм\t|" << arr[0].GetDeclLumflux() << "\t|" << arr[1].GetDeclLumflux() << "\t|" << arr[2].GetDeclLumflux() << "\t|" << arr[3].GetDeclLumflux() << "\t|" << arr[4].GetDeclLumflux() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "|Световая отдача P изм., Вт\t|\t|\t|\t|\t|\t|" << std::endl;
    std::cout <<  "|Ф изм. / Р изм., лм/Вт\t\t|" << arr[0].GetDeclLO() << "|" << arr[1].GetDeclLO() << "\t|" << arr[2].GetDeclLO() << "|" << arr[3].GetDeclLO() << "\t|" << arr[4].GetDeclLO() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Срок службы, ч\t\t\t|" << arr[0].GetDeclDuration() << "\t|" << arr[1].GetDeclDuration() << "\t|" << arr[2].GetDeclDuration() << "\t|" << arr[3].GetDeclDuration() << "\t|" << arr[4].GetDeclDuration() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "*Измеренные характеристики:*" << std::endl;;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "|\t\t\t\t|" << arr[0].GetName() << "\t|" << arr[1].GetName() << "\t|" << arr[2].GetName() << "\t|" << arr[3].GetName() << "\t|" << arr[4].GetName() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Напряжение U, В\t\t|" << arr[0].GetMeasVoltage() << "\t|" << arr[1].GetMeasVoltage() << "\t|" << arr[2].GetMeasVoltage() << "\t|" << arr[3].GetMeasVoltage() << "\t|" << arr[4].GetMeasVoltage() << "\t|"  << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Сила тока I, А\t\t\t|" << arr[0].GetMeasAmperage() << "\t|" << arr[1].GetMeasAmperage() << "\t|" << arr[2].GetMeasAmperage() << "\t|" << arr[3].GetMeasAmperage() << "\t|" << arr[4].GetMeasAmperage() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Мощность P изм., Вт\t\t|" << arr[0].GetMeasPower() << "\t|" << arr[1].GetMeasPower() << "\t|" << arr[2].GetMeasPower() << "\t|" << arr[3].GetMeasPower() << "\t|" << arr[4].GetMeasPower() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Освещенность Е, клк\t\t|" << arr[0].GetMeasIll() << "\t|" << arr[1].GetMeasIll() << "\t|" << arr[2].GetMeasIll() << "\t|" << arr[3].GetMeasIll() << "\t|" << arr[4].GetMeasIll() << "\t|"  << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Световой поток Ф изм., лм, Вт\t|" << arr[0].GetMeasLumflux() << "\t|" << arr[1].GetMeasLumflux() << "\t|" << arr[2].GetMeasLumflux() << "\t|" << arr[3].GetMeasLumflux() << "\t|" << arr[4].GetMeasLumflux() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout << "|Световая отдача P изм., Вт\t|\t|\t|\t|\t|\t|" << std::endl;
    std::cout <<  "|Ф изм. / Р изм., лм/Вт\t\t|" << arr[0].GetMeasLO() << "|" << arr[1].GetMeasLO() << "\t|" << arr[2].GetMeasLO() << "|" << arr[3].GetMeasLO() << "\t|" << arr[4].GetMeasLO() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    std::cout <<  "|Коэфф. пульсации, %\t\t|" << arr[0].GetMeasRipple() << "\t|" << arr[1].GetMeasRipple() << "\t|" << arr[2].GetMeasRipple() << "\t|" << arr[3].GetMeasRipple() << "\t|" << arr[4].GetMeasRipple() << "\t|" << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;

    std::cout << "Для выхода нажмите esc" << std::endl;;
    while (true)
    {
        int key = _getch();
        if (key == 27)
            return;
    }
}

Room AddRoom(std::vector<Lamp> arr)
{
    system("cls");
    std::cout << "Введите данные о помещении:" << std::endl;
    std::cout << "Название: ";
    std::string tmp_name;
    std::cin >> tmp_name;
    std::cout << std::endl;

    std::cout << "Требуемая освещенность: ";
    int tmp_lux;
    std::cin >> tmp_lux;
    std::cout << std::endl;

    std::cout << "Макс. коэффициент пульсации: ";
    int tmp_ripple;
    std::cin >> tmp_ripple;
    std::cout << std::endl;

    std::cout << "Длина: ";
    int tmp_a;
    std::cin >> tmp_a;
    std::cout << std::endl;

    std::cout << "Ширина: ";
    int tmp_b;
    std::cin >> tmp_b;
    std::cout << std::endl;

    std::cout << "Высота: ";
    int tmp_c;
    std::cin >> tmp_c;
    std::cout << std::endl;

    std::cout << "Высота рабочей поверхности: ";
    float tmp_hp;
    std::cin >> tmp_hp;
    std::cout << std::endl;

    std::cout << "Высота свеса светильника: ";
    float tmp_hc;
    std::cin >> tmp_hc;
    std::cout << std::endl;

    std::cout << "Коэффициент эксплуатации MF: ";
    float tmp_mf;
    std::cin >> tmp_mf;
    std::cout << std::endl;

    std::cout << "Коэффициент отр. p пот.: ";
    float tmp_ppot;
    std::cin >> tmp_ppot;
    std::cout << std::endl;

    std::cout << "Коэффициент отр. p ст.: ";
    float tmp_pst;
    std::cin >> tmp_pst;
    std::cout << std::endl;

    std::cout << "Коэффициент отр. p пол.: ";
    float tmp_ppol;
    std::cin >> tmp_ppol;
    std::cout << std::endl;

    Room ret(tmp_name, tmp_lux, tmp_ripple, tmp_a, tmp_b, tmp_c, tmp_hp, tmp_hc, tmp_mf, tmp_ppot, tmp_pst, tmp_ppol, arr);
    ret.Measurement();
    return ret;
}

void Display2(Room room)
{
    system("cls");
    std::cout << "Название комнаты\t\t\t\t" << room.GetName() << std::endl;
    std::cout << "Треб. осв. Е норм., лк\t\t\t\t" << room.GetNeedIll() << std::endl;
    std::cout << "Габ. помещ.:" << std::endl;
    std::cout << "Д, м\t\t\t\t\t\t" << room.GetLength() << std::endl; 
    std::cout << "Ш, м\t\t\t\t\t\t" << room.GetWidth() << std::endl;
    std::cout << "В, м\t\t\t\t\t\t" << room.GetHeight() << std::endl;
    std::cout << "Уровень раб. пов. hp, м\t\t\t\t" << room.GetHp() << std::endl;
    std::cout << "Высота свеса св. hс, м\t\t\t\t" << room.GetHc() << std::endl;
    std::cout << "Высота подв. св. h, м\t\t\t\t" << room.GetH() << std::endl;
    std::cout << "Площадь S, м_2\t\t\t\t\t" << room.GetSurf() << std::endl;
    std::cout << "Коэфф. экспл. MF\t\t\t\t" << room.GetMF() << std::endl;
    std::cout << "Показатель помещ. i\t\t\t\t" << room.GetI() << std::endl;
    std::cout << "Коэфф. отр.:"<< std::endl;
    std::cout << "p пот.\t\t\t\t\t\t" << room.GetPpot() << std::endl;
    std::cout << "p ст.\t\t\t\t\t\t" << room.GetPst()  << std::endl;
    std::cout << "p пол.\t\t\t\t\t\t" << room.GetPpol() << std::endl;
    std::cout << "Коэфф. исп. св. пот. n\t\t\t\t" << room.GetCoeffOfLux() << std::endl;
    std::cout << std::endl;

    std::cout << "Тип лампы\t\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetLampName(i) << "\t\t";
    std::cout << std::endl;
    std::cout << "Число св. Na, шт\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetNa(i) << "\t\t";
    std::cout << std::endl;
    std::cout << "Число св. Nb, шт\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetNb(i) << "\t\t";
    std::cout << std::endl;
    std::cout << "Число св. N, шт\t\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetN(i) << "\t\t";
    std::cout << std::endl;
    std::cout << "Число л. в осв. уст N*n\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetNn(i) << "\t\t";
    std::cout << std::endl;
    std::cout << "Мин. св. пот. 1 лампы Ф, лм\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetLumflux(i) << "\t";
    std::cout << std::endl;
    std::cout << "Мощность 1 лампы Р1, Вт\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetPower1(i) << "\t";
    std::cout << std::endl;
    std::cout << "Мощность уст. Р общ., Вт\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetPowerSum(i) << "\t";
    std::cout << std::endl;
    std::cout << "Затраты на приобр. л, руб\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetPurchaseCost(i) << "\t\t";
    std::cout << std::endl;
    std::cout << "Затраты на эл. эн., руб\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetElectricityCost(i) << "\t";
    std::cout << std::endl;
    std::cout << "Общие затраты, руб\t\t";
    for (int i = 0; i < room.GetLampSize(); i++)
        std::cout <<  "|" << room.GetCost(i) << "\t";
    std::cout << std::endl;

    std::cout << "Для выхода нажмите esc" << std::endl;;
    while (true)
    {
        int key = _getch();
        if (key == 27)
            return;
    }
}


int main()
{
    setlocale(LC_ALL, "");
    std::vector<Lamp> arr(5);
    Room room;
    
    while (true)
    {
        int m1 = menu1();
        switch (m1)
        {
        case(1):
            for (int i = 0; i < 5; i++)
            {
                arr[i] = AddDeclared(i);
            }
            break;
        case(2):
            for (int i = 0; i < 5; i++)
            {
                AddMeasured(arr[i], i);
            }
            break;
        case(3):
            Display1(arr);
            break;
        case(4):
            room = AddRoom(arr);
            break;
        case(5):
            Display2(room);
            break;
        }
    }
}

