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
	    
	    //Código que se desea proteger
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
	   
	    //Captura la excepción y muestra el mensaje de error en la consola.
	    catch (const char* msg) {
	    	cerr << msg << endl;
	    }
	    
	    cout << endl << "Desea realizar otra division?\n1 para continuar\n0 para salir" << endl; 
	    cin >> opc;
	    cout << endl; 
    }
   
   return 0;
}
