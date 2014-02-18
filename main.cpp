#include <iostream>

using namespace std;

class Animal
{
    public:
    string nombre;

    virtual void hablar()=0;

    virtual bool esFelino()
    {
                return true;
    }

    void setNombre()
    {
        this->nombre="Animal";
    }

    string getNombre()
    {
        return nombre;
    }
};

class Gato : Animal
{
    public:
        void hablar()
        {
            cout<<"miau"<<endl;
        }
        virtual~Gato(){}

        bool esFelino()
        {
            return true;
        }

        void setNombre()
        {
            nombre="Gato";
        }

        string getNombre()
        {
            return nombre;
        }

        void imprimir()
        {

           if(esFelino())
            {
                cout<<"si es felino"<<endl;
            }else{
                cout<<"no es felino"<<endl;
            };
        }
};


class Perro : Animal
{
    public:
        void hablar()
        {
            cout<<"Guau"<<endl;
        }

        bool esFelino()
        {
            return false;
        }

        void setNombre()
        {
            this->nombre="Perro";
        }

        string getNombre()
        {
            return nombre;
        }

        void imprimir()
        {
            if(esFelino())
            {
                cout<<"si es felino"<<endl;
            }else{
                cout<<"no es felino"<<endl;
            }

        }
};

class Loro : Animal
{
    public:
        void hablar()
        {
            cout<<"Hola"<<endl;
        }

        bool esFelino()
        {
            return false;
        }

        void setNombre()
        {
            this->nombre="Loro";
        }

        string getNombre()
        {
            return this->nombre;
        }

        void imprimir()
        {
            string name=getNombre();
            if(esFelino())
            {
                cout<<"si es felino"<<endl;
            }else{
                cout<<"no es felino"<<endl;
            }
            cout<<name<<endl;
        }
};


int main()
{
    Gato migato;
    Perro miperro;
    Loro miloro;

    migato.hablar();
    migato.imprimir();
    miperro.hablar();
    miperro.imprimir();
    miloro.hablar();
    miloro.imprimir();





    return 0;
}
