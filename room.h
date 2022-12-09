#pragma once
#include "lamp.h"
class Room
{
private:
    std::string name;
    int neededillumination;
    int neededripple;

    int length;
    int width;
    int height;

    float hc;
    float hp;
    float h;

    int surface;
    float MF;
    float iii;

    float ppot;
    float pst;
    float ppol;

    float coeffoflux;
    std::vector<std::string> rejlamps;
    struct lamp
    {
        Lamp a;
        int Na;
        int Nb;
        int N;
        int n;
        int Nn;
        float lumflux;
        float power_1;
        float power_sum;
        float purchasecost;
        float electricitycost;
        float cost;

    };
    std::vector<lamp> lampsss;
public:
    std::string GetName();
    int GetNeedIll();
    int GetNeedRipple();


    int GetLength();
    int GetWidth();
    int GetHeight();

    float GetHc();
    float GetHp();
    float GetH();

    int GetSurf();
    float GetMF();
    float GetI();

    float GetPpot();
    float GetPst();
    float GetPpol();

    float GetCoeffOfLux();

    size_t GetLampSize();
    std::string GetLampName(int i);
    int GetNa(int i);
    int GetNb(int i);
    int GetN(int i);
    int Getn(int i);
    int GetNn(int i);
    float GetLumflux(int i);
    float GetPower1(int i);
    float GetPowerSum(int i);
    float GetPurchaseCost(int i);
    float GetElectricityCost(int i);
    float GetCost(int i);

    float GetMeasLO(int i);
    float GetDeclLO(int i);
    float GetRipple(int i);

    bool GetIsEmpty();
    std::vector<std::string>& GetRejected();

    Room();
    Room(std::string name, int neededill, int neededrip, int a, int b, int c, float hc, float hp, float coeffofoperation, float ppot, float pst, float ppol, std::vector<Lamp> lamps);
    float mu(float ppot, float pst, float ppol, float i);
    void Measurement();

};