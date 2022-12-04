#include "room.h"

Room::Room()
{
    this->name = "default";
    this->neededillumination = 0;
    this->neededripple = 0;
    this->length = 0;
    this->width = 0;
    this->height = 0;
    this->hc = 0;
    this->hp = 0;
    this->MF = 0;
    this->ppot = 0;
    this->pst = 0;
    this->ppol = 0;
}

Room::Room(std::string name, int neededill, int neededrip, int a, int b, int c, float hc, float hp, float coeffofoperation, float ppot, float pst, float ppol, std::vector<Lamp> lamps)
{
    this->name = name;
    this->neededillumination = neededill;
    this->neededripple = neededrip;
    this->length = a;
    this->width = b;
    this->height = c;
    this->hc = hc;
    this->hp = hp;
    this->MF = coeffofoperation;
    this->ppot = ppot;
    this->pst = pst;
    this->ppol = ppol;

    for (int i = 0; i < 5; i++)
    {
        if (lamps[i].GetMeasRipple() < neededrip)
        {
            lamp tmp;
            tmp.a = lamps[i];
            this->lampsss.push_back(tmp);
        }
    }
}

float Room::mu(float ppot, float pst, float ppol, float i)
{
    int j = 0;
    if (ppot == 0.7)
    {
        if (pst == 0.5)
        {
            if (ppot == 0.3)
                j = 0;
            else if (ppot == 0.2)
                j = 1;
        }
        else if (pst == 0.3)
        {
            if (ppot == 0.3)
                j = 2;
            else if (ppot == 0.2)
                j = 3;
        }
    }
    else if (ppot == 0.5)
    {
        if (pst == 0.5)
            j = 4;
        else if (pst == 0.3)
            j = 5;
    }
    else if (ppot == 0.3)
    {
        j = 6;
    }
    else if (ppot == 0)
    {
        j = 7;
    }

    float a1[8] = { 0.35, 0.49, 0.54, 0.59, 0.64, 0.73, 0.83, 0.95 };
    float a2[8] = { 0.34, 0.46, 0.50, 0.55, 0.59, 0.65, 0.75, 0.83 };
    float a3[8] = { 0.27, 0.38, 0.43, 0.49, 0.53, 0.61, 0.73, 0.86 };
    float a4[8] = { 0.26, 0.36, 0.41, 0.46, 0.50, 0.56, 0.67, 0.77 };
    float a5[8] = { 0.31, 0.43, 0.48, 0.53, 0.56, 0.63, 0.72, 0.80 };
    float a6[8] = { 0.24, 0.36, 0.41, 0.45, 0.49, 0.56, 0.65, 0.75 };
    float a7[8] = { 0.18, 0.29, 0.34, 0.38, 0.42, 0.48, 0.59, 0.69 };
    float a8[8] = { 0.17, 0.28, 0.32, 0.35, 0.39, 0.45, 0.55, 0.65 };

    if (i >= 0.5 && i < 0.7)
        return a1[j];
    else if (i >= 0.7 && i < 0.9)
        return a2[j];
    else if (i >= 0.9 && i < 1.125)
        return a3[j];
    else if (i >= 1.125 && i < 1.325)
        return a4[j];
    else if (i >= 1.325 && i < 1.85)
        return a5[j];
    else if (i >= 1.85 && i < 2.5)
        return a6[j];
    else if (i >= 2.5 && i < 4)
        return a7[j];
    else if (i >= 4)
        return a8[j];
}

void Room::Measurement()
{
    surface = length * width;
    h = height - hc - hp;
    iii = ((length * width) / (h * (length + width)));
    coeffoflux = mu(ppot, pst, ppol, iii);

    for (int i = 0; i < lampsss.size(); i++)
    {
        lampsss[i].Na = round(length / h);
        lampsss[i].Nb = round(width / h);
        lampsss[i].N = lampsss[i].Na * lampsss[i].Nb;

        if (lampsss[i].a.GetType() == 1)
            lampsss[i].n = 5;
        else if (lampsss[i].a.GetType() == 3 || lampsss[i].a.GetType() == 3 || lampsss[i].a.GetType() == 4)
            lampsss[i].n = 2;
        lampsss[i].Nn = lampsss[i].N * lampsss[i].n;

        lampsss[i].lumflux = (neededillumination * surface) / (coeffoflux * MF * lampsss[i].N * lampsss[i].n);

        lampsss[i].power_1 = lampsss[i].lumflux / lampsss[i].a.GetDeclLO();
        lampsss[i].power_sum = (lampsss[i].power_1 * lampsss[i].Nn) / 1000;

        lampsss[i].purchasecost = lampsss[i].a.GetCost() * lampsss[i].Nn;
        lampsss[i].electricitycost = lampsss[i].power_sum * 4 * 8 * 300;
        lampsss[i].cost = lampsss[i].purchasecost + lampsss[i].electricitycost;
    }

}

std::string Room::GetName()
{
    return name;
}

int Room::GetNeedIll()
{
    return neededillumination;
}

int Room::GetNeedRipple()
{
    return neededripple;
}

int Room::GetLength()
{
    return length;
}

int Room::GetWidth()
{
    return width;
}

int Room::GetHeight()
{
    return height;
}

float Room::GetHc()
{
    return hc;
}

float Room::GetHp()
{
    return hp;
}

float Room::GetH()
{
    return h;
}

int Room::GetSurf()
{
    return surface;
}

float Room::GetMF()
{
    return MF;
}

float Room::GetI()
{
    return iii;
}

float Room::GetPpot()
{
    return ppot;
}

float Room::GetPst()
{
    return pst;
}

float Room::GetPpol()
{
    return ppol;
}

float Room::GetCoeffOfLux()
{
    return coeffoflux;
}

size_t Room::GetLampSize()
{
    return lampsss.size();
}

std::string Room::GetLampName(int i)
{
    return lampsss[i].a.GetName();
}

int Room::GetNa(int i)
{
    return lampsss[i].Na;
}

int Room::GetNb(int i)
{
    return lampsss[i].Nb;
}

int Room::GetN(int i)
{
    return lampsss[i].N;
}

int Room::Getn(int i)
{
    return lampsss[i].n;
}

int Room::GetNn(int i)
{
    return lampsss[i].Nn;
}

float Room::GetLumflux(int i)
{
    return lampsss[i].lumflux;
}

float Room::GetPower1(int i)
{
    return lampsss[i].power_1;
}

float Room::GetPowerSum(int i)
{
    return lampsss[i].power_sum;
}

float Room::GetPurchaseCost(int i)
{
    return lampsss[i].purchasecost;
}

float Room::GetElectricityCost(int i)
{
    return lampsss[i].electricitycost;
}

float Room::GetCost(int i)
{
    return lampsss[i].cost;
}

