#include <iostream>
#include <string.h>

using namespace std;

class persona{
protected:
    int edad;
    string nombre;
public:
    persona(int e,string n){
        edad = e;
        nombre = n;
    }
    int get_edad(){return edad;}
    string get_nombre(){return nombre;}
};

class empleado : public persona{
protected:
    string area;
    string codigo;
public:
    empleado(int e,string n,string a,string c):persona(e,n){
        area = a;
        codigo = c;
    }
    string get_area(){return area;}
    string get_codigo(){return codigo;}
};

class toy{
protected:
    string marca;
    string nombre;
public:
    toy(string m,string n){
        marca = m;
        nombre = n;
    }
    string get_marca(){return marca;}
    string get_nombre(){return nombre;}
};

class fig_acc : public toy{
protected:
    string tam;
public:
    fig_acc(string m,string n,string t):toy(m,n){
        tam=t;
    }
    string get_tam(){return tam;}
};

class transporte{
protected:
    string nombre;
    int velocidad;
public:
    transporte(string n,int v){
        nombre=n;
        velocidad=v;
    }
    string get_nombre(){return nombre;}
    int get_velocidad(){return velocidad;}
};

class ship : public transporte{
protected:
    string tipo;
public:
    ship(string n,int v,string t):transporte(n,v){
        tipo = t;
    }
    string get_tipo(){return tipo;}
};

int main()
{
    ship b("bicicleta",40,"terrestre");
    empleado p(28,"Karen","Contaduria","008");
    fig_acc a("Hasbro","Spiderman","standar");
    cout<<b.get_nombre()<<" "<<b.get_velocidad()<<"km"<<" "<<b.get_tipo()<<endl;
    cout<<a.get_marca()<<" "<<a.get_nombre()<<" "<<a.get_tam()<<endl;
    cout << p.get_edad()<<" de edad"<<" "<<p.get_nombre()<<" "<<p.get_area()<<" "<<p.get_codigo()<<endl;
}
