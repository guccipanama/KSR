#pragma once
#include <iostream>
#include <locale.h>
#include <vector>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;

class Lamp
{
private:
    std::string name;
    float cost;
    int type;
    struct declared
    {
        float power;
        float lumflux;
        float lightoutput;
        float duration;
    };
    struct measured
    {
        float voltage;
        float amperage;
        float power;
        float illumination;
        float lumflux;
        float lightoutput;
        float ripple;
    };
    declared spec_1;
    measured spec_2;
public:

    Lamp();
    Lamp(std::string name, int type, float cost, float power, float lumflux, float duration);
    std::string GetName();
    float GetCost();
    int GetType();

    float GetDeclPower();
    float GetDeclLumflux();
    float GetDeclLO();
    float GetDeclDuration();

    float GetMeasVoltage();
    float GetMeasAmperage();
    float GetMeasPower();
    float GetMeasIll();
    float GetMeasLumflux();
    float GetMeasLO();
    float GetMeasRipple();
    void Declare(std::string name, int type, float cost, float power, float lumflux, float duration);
    void Measure(float voltage, float amperage, float illumination, float ripple);
};