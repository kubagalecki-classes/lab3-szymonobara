#include <iostream>

class BytGeometryczny
{
public:
    virtual void id() = 0;
};

class Figura : public BytGeometryczny
{
public:
    Figura(double pole_) : pole{pole_} {}
    virtual ~Figura() { std::cout << "Usunieto Figura \n"; }
    double getPole() { return pole; }
    // virtual void id() { std::cout << "Figura o polu: " << getPole() << "\n"; }

private:
    double pole;
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double bok) : Figura{bok * bok} {}
    virtual ~Kwadrat() { std::cout << "Usunieto Kwadrat \n"; }
    void id() override { std::cout << "Kwadrat o polu: " << getPole() << "\n"; }
};

class Kolo : public Figura
{
public:
    Kolo(double promien) : Figura{3.14 * promien * promien} {}
    virtual ~Kolo() { std::cout << "Usunieto Kolo \n"; }
    void id() override { std::cout << "Kolo o polu: " << getPole() << "\n"; }
};

void idWolno(Figura& figura)
{
    figura.id();
}

int main()
{
    BytGeometryczny* bg = new Kwadrat{5};
    bg->id();
}
