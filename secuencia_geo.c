//Escribir código de la sucesión exponencial 5,15,45,135
//En donde se creará un ciclo for.

#include <iostream>
 
using namespace std;
 
void progresionA(int inicio, int tamanio, int factor);
void progresionB(int inicio, int tamanio, int factor);
void progresionC(int inicio, int tamanio, int factor);
 
int main()
{
    int inicio, tamanio, factor;
 
    cout << "\nInicio: "; cin >> inicio;
    cout << "Factor: "; cin >> factor;
    cout << "Tamanio: "; cin >> tamanio;
 
    cout << "\nProgresion A: ";
    progresionA(inicio, tamanio, factor);
 
    cout << "\n\nProgresion B: ";
    progresionB(inicio, tamanio, factor);
 
    cout << "\n\nProgresion C: ";
    progresionC(inicio, tamanio, factor);
 
    cout << endl;
 
    return 0;
}
 
void progresionA(int inicio, int tamanio, int factor)
{
    int k = 1;
    int i = inicio;
    while (k++ <= tamanio)
    {
        cout << i << " ";
        i += factor;
    }
}
 
void progresionB(int inicio, int tamanio, int factor)
{
    int k = 1;
    int i = inicio;
    while (k++ <= tamanio)
    {
        cout << i << " ";
        i *= factor;
    }
}
 
void progresionC(int inicio, int tamanio, int factor)
{
    int k = 1;
    int i = inicio;
    int j = inicio;
    while (k <= tamanio)
    {
        progresionA(i, 1, factor);
        progresionB(j, 1, factor);
        i += factor;
        j *= factor;
        k++;
    }
}

//Los errores se deben a que se hizo en Windows y no linux, por lo tanto no existen librerias que se descarguen directamente desde la terminal