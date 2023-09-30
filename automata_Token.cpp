#include <iostream>

using namespace std;
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

int main()
{
    string c1;
    int n, num , tam, trans;
    int eI=0, eN = 0;
    char alfabeto2[] = {'l','d','.','o'};
	int transicion[] = {0,1,2,3,4,5,6,7};
    int eF[] = {2,4,7};
	int a = GetSize(transicion);
	int h = GetSize(alfabeto2);
	int matriz[a][h]; 

    /**
     * ingreso de matriz            ✓
     * ingreso de alfabeto          ✓
     * ingreso de estados I y F     ✓
     * ingreso de cadena            ✓
    */
/*
    //Ingreso de alfabeto------------------------
    cout << "Ingrese el tamaño del alfabeto: ";
    cin >> tam;
    cout << "Ingrese el alfabeto: "<<'\n';
    for(int i = 0; i<tam; i++)
    {    
        cout << "-> ";
        cin >> alfabeto[i];
    }

    //Ingreso de transiciones---------------------
    cout << "Ingrese el numero de transiciones: ";
    cin >> trans;
    cout << "Ingrese las transiciones: "<<'\n';
    for(int i = 0; i<trans; i++)
    {    
        cout << "->q ";
        cin >> transicion[i];
    }

    cout << "Estado inicial : q"; 
    cin >> eI;
    cout << "Estado final : q"; 
    cin >> eF;

    //Ingreso de matriz
    cout << "Llenar Matriz de transiciones: "<<'\n';
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<h; j++)
        {
            cout<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    cout << endl;

    cout << "Matriz de transiciones: "<<'\n';
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<h; j++)
        {
            cout << "[" << matriz[i][j] << "]" << " ";
        }
        cout << '\n';
    }

    cout << endl;
*/
    //Ingreso de cadena
    cout << "Cadena : "; 
    cin >> c1;

    cout << endl;

    for(int i=0; i<c1.length();i++)
    {
        if(c1[i]=='1'||c1[i]=='0')
        {
            for (int j = 0; j < GetSize(alfabeto2); j++)
            {
                num = c1[i] - '0'; //convierte el caracter a num ---  1110010
                if (num == alfabeto2[j]) 
                {
                    eN = j;
                }
                for (int k = 0; k < GetSize(transicion); k++)
                {
                    if(eI == transicion[k])
                    {
                        eI = k;
                    }       
                }
                n = matriz[eI][eN];
            }    
            cout << num << "   ";          
            cout << "q"<< n;  
            cout << "(" <<eI << ","<< eN << ")"<< "\n";
        }
        if(n != eI)
        {
            eI = n;
        }
    }
        if(n == eF)
        {
            cout << "ACEPTADO!!!" << endl;
        }
        else{
             cout << "NO ACEPTADO!!!" << endl;
        }
}

/*
	{2,0},
	{1,1},
	{2,1}
*/
/**
    * f|l     |d     |o     |.
    * 0|1(0,0)|3(0,1)|-(0,2)|-(0,3)
    * 1|1(1,0)|1(1,1)|2(1,2)|-(1,3)
    * 2|-(2,0)|-(2,1)|-(2,2)|-(2,3)
    * 3|-(3,0)|3(3,1)|4(3,2)|5(3,3)
    * 4|-(4,0)|-(4,1)|-(4,2)|-(4,3)
    * 5|-(5,0)|6(5,1)|-(5,2)|-(5,3)
    * 6|-(6,0)|6(6,1)|7(6,2)|-(6,3)
    * 7|-(7,0)|-(7,1)|-(7,2)|-(7,3)
    * 
    * 33.3 => <REAL>
    * 
    * 
    *   vector<int> num;
        vector<char> car;
        
        string c1 = "ll34";
        for(int i = 0; i< c1.length(); i++)
        {
            cout << c1[i] - '0' << " ";
            for (char c : c1) {
            if (isdigit(c)) {
                num.push_back(c);
            } else if (isalpha(c)) {
                car.push_back(c);
            }
        }
        }
        cout << endl;
        //numero en ASCII
        for(int i = 0; i< 2; i++)
        {
            cout << num[i] - '0' << " ";
        }
        cout << endl;
        
        //cadena normal
        for(int i = 0; i< 2; i++)
        {
            cout << car[i] << " ";
        }
    * 
    * 
    * 
*/

