#include <iostream>

using namespace std;
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

int main()
{
	string c1;
    int n, num , tam, trans;
    int eI, eF, eN = 0;
	int alfabeto[] = {0,1};	
	int transicion[] = {0,1,2};
	int a = GetSize(transicion);
	int h = GetSize(alfabeto);
	int matriz[a][h]; 

    /**
     * ingreso de matriz            ✓
     * ingreso de alfabeto          ✓
     * ingreso de estados I y F     ✓
     * ingreso de cadena            ✓
    */

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

    //Ingreso de cadena
    cout << "Cadena : "; 
    cin >> c1;

    cout << endl;

    for(int i=0; i<c1.length();i++)
    {
        if(c1[i]=='1'||c1[i]=='0')
        {
            for (int j = 0; j < GetSize(alfabeto); j++)
            {
                num = c1[i] - '0'; //convierte el caracter a num
                if (num == alfabeto[j]) 
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
    * f|0     |1
    * 0|2(0,0)|0(0,1)
    * 1|1(1,0)|1(1,1)
    * 2|2(2,0)|1(2,1)
    * 
    * 1110010
*/

