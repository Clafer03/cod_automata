#include <iostream>

using namespace std;
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))

int main()
{
	string c1 = "111001";
    int n;
    int num;
    int eI = 0;
    int eF = 2;
    int eN = 0;
	int alfabeto[] = {0,1};	
	int transicion[] = {0,1,2};
	int a = GetSize(transicion);
	int h = GetSize(alfabeto);
	int matriz[a][h] = {
						{2,0},
						{1,1},
						{2,1}
	                   };

    for(int i=0; i<c1.length();i++)
    {
        if(c1[i]=='1'||c1[i]=='0')
        {
            for (int j = 0; j < GetSize(alfabeto); j++)
            {
                num = c1[i] - '0';
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
    /**
     * f|0     |1
     * 0|2(0,0)|0(0,1)
     * 1|1(1,0)|1(1,1)
     * 2|2(2,0)|1(2,1)
     * 
     * 1110010
    */

