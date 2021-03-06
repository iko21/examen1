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

class Gato : public Animal
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


class Perro : public Animal
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

class Loro : public Animal
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
            if(esFelino())
            {
                cout<<"si es felino"<<endl;
            }else{
                cout<<"no es felino"<<endl;
            }

        }
};


int main()
{
    Gato migato;
    Perro miperro;
    Loro miloro;

    migato.hablar();
    migato.setNombre();
    cout << migato.getNombre() << endl;
    migato.imprimir();

    miperro.hablar();
    miperro.setNombre();
    cout << miperro.getNombre() << endl;
    miperro.imprimir();

    miloro.hablar();
    miloro.setNombre();
    cout << miloro.getNombre() << endl;
    miloro.imprimir();

    return 0;
}
