#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;

int main()
{
	vector<int> arreglo_pro;
	int contenedor_temporal = 0;


	while (contenedor_temporal != -1) {
		cin >> contenedor_temporal;

		arreglo_pro.push_back(contenedor_temporal);

	}
	arreglo_pro.pop_back();

	sort(arreglo_pro.begin(), arreglo_pro.end());

	for (int i = 0; i < arreglo_pro.size(); i++)
	{
		cout << arreglo_pro[i] << endl;
	}

	cin >> contenedor_temporal;
}
