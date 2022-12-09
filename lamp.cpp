#include "lamp.h"

Lamp::Lamp()
{
    this->name = "default";
    this->type = 0;
    this->cost = 0;
    spec_1.power = 0;
    spec_1.lumflux = 0;
    spec_1.lightoutput = 0;
    spec_1.duration = 0;

    spec_2.voltage = 0;
    spec_2.amperage = 0;
    spec_2.illumination = 0;
    spec_2.ripple = 0;
    spec_2.power = 0;
    spec_2.lumflux = 0;
    spec_2.lightoutput = 0;
}

Lamp::Lamp(std::string name, int type, float cost, float power, float lumflux, float duration)
{
    this->name = name;
    this->type = type;
    this->cost = cost;
    spec_1.power = power;
    spec_1.lumflux = lumflux;
    spec_1.lightoutput = lumflux / power;
    spec_1.duration = duration;
}

std::string Lamp::GetName()
{
    return name;
}

float Lamp::GetCost()
{
    return cost;
}

int Lamp::GetType()
{
    return type;
}

float Lamp::GetDeclPower()
{
    return spec_1.power;
}

float Lamp::GetDeclLumflux()
{
    return spec_1.lumflux;
}

float Lamp::GetDeclLO()
{
    return spec_1.lightoutput;
}

float Lamp::GetDeclDuration()
{
    return spec_1.duration;
}

float Lamp::GetMeasVoltage()
{
    return spec_2.voltage;
}

float Lamp::GetMeasAmperage()
{
    return spec_2.amperage;
}

float Lamp::GetMeasPower()
{
    return spec_2.power;
}

float Lamp::GetMeasIll()
{
    return spec_2.illumination;
}

float Lamp::GetMeasLumflux()
{
    return spec_2.lumflux;
}

float Lamp::GetMeasLO()
{
    return spec_2.lightoutput;
}

float Lamp::GetMeasRipple()
{
    return spec_2.ripple;
}

void Lamp::Declare(std::string name, int type, float cost, float power, float lumflux, float duration)
{
    this->name = name;
    this->type = type;
    this->cost = cost;
    spec_1.power = power;
    spec_1.lumflux = lumflux;
    spec_1.lightoutput = lumflux / power;
    spec_1.duration = duration;
}

void Lamp::Measure(float voltage, float amperage, float illumination, float ripple)
{
    spec_2.voltage = voltage;
    spec_2.amperage = amperage;
    spec_2.illumination = illumination;
    spec_2.ripple = ripple;
    spec_2.power = voltage * amperage;
    spec_2.lumflux = illumination * 110;
    spec_2.lightoutput = spec_2.lumflux / spec_2.power;
}

