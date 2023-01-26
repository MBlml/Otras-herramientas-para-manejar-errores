# Otras herramientas para el manejar errores 
#### BARAJAS GOMEZ JUAN MANUEL | 216557005 | COMPUTACION TOLERANTE A FALLAS | 24/01/2023

### OBJETIVO:
Genera un reporte con otras herramientas para el manejo de errores en progra-mación. 
Tomando como referencia el ejemplo que dio el profesor durante la clase para el manejo del error de división por 0.

### DESARROLLO:
### INSTRUCCIONES TRY, THROW Y CATCH
Una excepción es un evento que ocurre durante la ejecución de un programa que interrumpe el flujo normal de la ejecución. 
Cuando una excepción es lanzada, el control se transfiere a un bloque _“catch”_ específico que puede manejar la excepción.

En C++, hay dos formas principales de manejar errores y excepciones: 
> 1.- _return_ para devolver un valor de error o un código de error específico desde una función. Por ejemplo, si una función devuelve un entero, se puede devolver un valor negativo para indicar un error (-1).

> 2.- _throw_ para lanzar excepciones inmediatamente imprimiéndose en pantalla. 

Para complementar el manejo de excepciones en C++ se realiza mediante las instrucciones _try y catch_:

> _Try_ se utiliza para indicar el código que se desea proteger. 

> _Catch_ toma como argumento el tipo de excepción que se espera capturar. 
El control se transfiere al bloque catch correspondiente si se lanza una excepción del tipo especificado.

### EJEMPLO:
```c++
try {
    //código que puede lanzar una excepción
} catch (ExcepcionTipo1 &e) {
    // manejar excepción tipo 1
} catch (ExcepcionTipo2 &e) {
    // manejar excepción tipo 2
}
```

### EJEMPLO EN PRACTICA:
El objetivo de la practica es manejar excepciones en la división por cero para entender el funcionamiento básico de este método.

##### _El codigo se puede descargar en el archivo de la parte superior_

```c++
#include <iostream>
using namespace std;
int main() {
    float x;
    float y;
    int opc = 1;
    while(opc != 0) {
        cout << "Intento de division por cero con 'Try & Catch'" << endl << endl;
        cout << "x = ";
        cin >> x;
        cout << "y = ";
        cin >> y;
        //Codigo que se desea proteger
        try { 
            if (y == 0) {
                //Se lanza la excpecion con el metodo throw
                throw "Ups, es una excepcion de division por 0...";
            }
            else {
                //Se imprime el resultado si no hubo excepcion
                float result = x / y;
                cout << endl << x << " / " << y << " = " << result << endl;
            }
        }
        //Captura la excepcion y muestra el mensaje de error en la consola.
        catch (const char* msg) {
            cerr << msg << endl;
        }
        cout << endl << "Desea realizar otra division?\n1 para conti-nuar\n0 para salir" << endl; 
        cin >> opc;
        cout << endl; 
    }
   return 0;
}
```

### CONCLUSIÓN:
En resumen, el manejo de errores y excepciones en C++ se puede realizar mediante el uso de la instrucción return para devolver 
un valor de error o un código de error específico, y mediante el uso de la instrucción throw para lanzar excepciones y manejarlas 
con bloques catch que sería más completa para pruebas del sistema y solucionar posibles errores, así creando un sistema tolerante
a fallas, a simples rasgos sería el código puesto en práctica o ejemplo.


### REFERENCIAS:
_Corob-Msft. (2022, 26 octubre). Instrucciones try, throw y catch (C++). Microsoft Learn._
_Recuperado 24 de enero de 2023, de [https://learn.microsoft.com/es-es/cpp/cpp/try-throw-and-catch-statements-cpp?view=msvc-170](https://learn.microsoft.com/es-es/cpp/cpp/try-throw-and-catch-statements-cpp?view=msvc-170)_
