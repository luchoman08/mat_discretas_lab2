#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>
/*
autor: luchoman

*/
using namespace std;

bool existe_elemento(vector <string> vector_entrada, string cadena_probar)

{
	int size=vector_entrada.size();
	for(int i =0; i < size;i++)
	{
		if(cadena_probar==vector_entrada.at(i))
			return true;
	}
	return false;
	
}

vector <string> ingresar_vector(int tamano)
{
	vector <string> vector_ingresado;
	string temporal;	
	for(int i = 0 ; i< tamano; i++)
	{
	cout << "Ingrese el valor ["<<i<<"]: ";
	cin>>temporal;
	if(!existe_elemento(vector_ingresado,temporal))
	{
	vector_ingresado.push_back(temporal);
     }
    }
    return vector_ingresado;
    
	
}
int imprimir_vector(vector <string> vector_imprimir)
{
        printf("El conjunto potencia de los conjuntos ingresados es:\n");
	int vector_size = vector_imprimir.size();
	printf("%c",'{');
	for(int i = 0; i < vector_size; i++)
	{
		printf("%c",'(');
		printf("%s", vector_imprimir.at(i).c_str());
		printf("%c",')');
                if(i<vector_size -1)
                printf("%c",',');
	}
	printf("%c\n",'}');
	return 0;
}

vector <string> calcular_producto_dos_vectores(vector <string> vector1, vector <string> vector2)
{
	vector <string> resultado;
	string temporal;
	int  vector1_size= vector1.size();
	int  vector2_size= vector2.size();
	for(int i = 0 ; i < vector1_size; i ++)
	{
		for(int j=0; j<vector2_size; j++)
		{
			temporal = vector1.at(i)+","+vector2.at(j);
			resultado.push_back(temporal);
			temporal = "";
		}
		
	}
	return resultado;
	
}


int main (int args, char * argv[])
{
	int numero_vectores=0, i = 0, int_temporal;
	vector <string> vector_temporal1, vector_temporal2;
	vector <string> resultado;
    cout << "Ingrese el numero de conjuntos que desea ingresar (dos o más): "; cin>>numero_vectores;
    cout<< "Ingrese el tamaño del conjunto " << i + 1 <<" :";  cin >>  int_temporal;
	resultado = ingresar_vector(int_temporal);
	i++;
    while(i<numero_vectores)
    {
		cout<< "Ingrese el tamaño del conjunto " << i + 1 <<" :";  cin >>  int_temporal;
		vector_temporal2 = ingresar_vector(int_temporal);
		resultado = calcular_producto_dos_vectores(resultado,vector_temporal2);

	    i++;
	}
imprimir_vector(resultado);

return 0;
}
