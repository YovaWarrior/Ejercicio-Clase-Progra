/*10 numeros fibonacci
#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 0, limite, i;
    limite=10;

        for(i = 1; i <= limite; i++) {
            cout << b << " , ";
            a = a + b;
            b = a - b;
        }

    cout << "\n";
    return 0;
}
 */
/* Numeros Primos
#include <iostream>
using namespace std;
int main() {
    int a, i;

    cout << "Introduce un numero: ";
    cin >> a;
    if(a==2){
        cout << "Es un numero primo";
    }

    if(a==1){
        cout << "No es un numero primo";
    }
    i = 2;
    while (a % i != 0)
    {
        i++;
    }

    if (i==a) {
        cout << "\nEs un numero primo" << endl;
    } else {
        cout << "\nNo es un numero primo" << endl;
    }
    system("pause");
}
 */

/* Factorial
#include <iostream>
using namespace std;

int main() {
    int a,b;
    long double factorial;
    cout << "Ingresa un numero para calcular su factorial: ";
    cin >> a;
    factorial=1;
    for(b=1;b<=a;b++)
        factorial = factorial * b;
    cout << endl << "Factorial de " << a << " = " << factorial << endl;
    system("pause");
}
*/

/* Numeros pares o Impares
#include <iostream>
using namespace std;
int main()
{
    int numero;

    cout << "Introduce numero: ";
    cin >> numero;

    if(numero % 2 == 0)
        cout << endl << numero <<" es par\n";
    else
        cout << endl << numero <<" es impar\n";

    system("pause");
}
 */

/* Tabla de Multiplicar de un numero
#include "iostream"

using namespace std;
int main(){
    int numero;

    do {
        cout << "Ingrese un número para saber sus tablas de multiplicar: ";
        cin >> numero;
    } while ((numero<1)  ||   (numero>10));

    for (int i=1; i<=10; i++) {
        cout << numero << "*" << i <<"="<< numero*i << endl;
    }

    return 0;
}
*/