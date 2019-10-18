#include<bits/stdc++.h>

using namespace std;

//Coin Changing

int main()  {
    
    cout << "Coloque o valor recebido" << endl;

    float entrada;
    int buffer = 0;

    cin >> entrada;

    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0;
    // 100 - 50 - 20 - 10 - 5 - 2 - 1 - 0.5 - 0.25 - 0.10 - 0.5 - 0.1
    
    while(entrada != 0){
        if (entrada >=  100){
            entrada = entrada - 100;
            c1++;
        }else if (entrada >= 50){
            entrada = entrada - 50;
            c2++;
        }else if (entrada >= 20){
            entrada = entrada - 20;
            c3++;
        }else if (entrada >= 10){
            entrada = entrada - 10;
            c4++;
        }else if (entrada >= 5){
            entrada = entrada - 5;
            c5++;
        }else if (entrada >= 2){
            entrada = entrada - 2;
            c6++;
        }else if (entrada >= 1){
            entrada = entrada - 1;
            c7++;
        }else if (entrada >= 0,5){
            entrada = entrada - 0.5;
            c8++;
        }else if (entrada >= 0.25){
            entrada = entrada - 0.25;
            c9++;
        }else if (entrada >= 0.10){
            entrada = entrada - 0.10;
            c10++;
        }else if (entrada >= 0.5){
            entrada = entrada - 0.5;
            c11++;
        }else if (entrada >= 0.1){
            entrada = entrada - 0.1;
            c12++;
            cout << "oi";
        }
    }

    cout << "O troco é:" << endl;

    if (c1 != 0){
        cout << "Numero de 100: " << c1 << endl; 
    }
    if (c2 != 0){
        cout << "Numero de 50: " << c2 << endl; 
    }
    if (c3 != 0){
        cout << "Numero de 20: " << c3 << endl; 
    }
    if (c4 != 0){
        cout << "Numero de 10: " << c4 << endl; 
    }
    if (c5 != 0){
        cout << "Numero de 5: " << c5 << endl; 
    }
    if (c6 != 0){
        cout << "Numero de 2: " << c6 << endl; 
    }
    if (c7 != 0){
        cout << "Numero de 1: " << c7 << endl; 
    }
    if (c8 != 0){
        cout << "Numero de 0.5: " << c8 << endl; 
    }
    if (c9 != 0){
        cout << "Numero de 0.25: " << c9 << endl; 
    }
    if (c10 != 0){
        cout << "Numero de 0.10: " << c10 << endl; 
    }
    if (c11 != 0){
        cout << "Numero de 0.5: " << c11 << endl; 
    }
    if (c12 != 0){
        cout << "Numero de 0.1: " << c12 << endl; 
    }

    return 0;
}