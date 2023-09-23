/*
Programa para representar cualquier automata
*/

#include <iostream>
using namespace std;
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
int main()
{
	string c1 = "1110010";
	int alfabeto[] = {0,1};	
	int transicion[] = {0,1,2};
	int a = GetSize(alfabeto);
	int h = GetSize(transicion);
	int matriz[a][h] = {
						{2,0},
						{1,1},
						{2,1}
	                   };

    /**
     * f|0|1
     * 0|2|0
     * 1|1|1
     * 2|2|1
     * 
     * 
    */
    for(int i=0; i<c1.length();i++)
    {
        if(c1[i]=='1')
        {
            for(int i = 0; i < a; i++)
            {
                for(int j = 0; j < h; j++)
                {
                    
                }
            }
        }
    }
}




/*
/*
Programa para representar cualquier automata
*/

#include <iostream>

using namespace std;
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
int main()
{
	string c1 = "1110010";
    int eI = 0;
    int eF = 1;
	int alfabeto[] = {0,1};	
	int transicion[] = {0,1,2};
	int a = GetSize(transicion);
	int h = GetSize(alfabeto);
	int matriz[a][h] = {
						{2,0},
						{1,1},
						{2,1}
	                   };

    /**
     * f|0     |1
     * 0|2(0,0)|0(0,1)
     * 1|1(1,0)|1(1,1)
     * 2|2(2,0)|1(2,1)
     * 
     * 1110010
    */
    for(int i=0; i<c1.length();i++)
    {
        if(c1[i]=='1')
        {
            
            matriz[eI][];
        }
    }
}



*/
