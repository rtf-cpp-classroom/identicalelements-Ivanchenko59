#include "functions.h"  
#include<bits/stdc++.h>

void findSameElements(int* Arr1, int size1, int* Arr2, int size2) 
{
	if (Arr1 == nullptr || Arr2 == nullptr) {
		cout << "Wrong array data" << std::endl;
		exit(0);
	}


	int count_identical = 0;
	std::vector <pair<int, int>> result;


	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (Arr1[i] == Arr2[j]) {
				count_identical++;
			}
		}
		result.push_back(make_pair(Arr1[i], count_identical));
		count_identical = 0;
	}
	sort(result.begin(), result.end());
	
	for(int i = 0; i < result.size(); i++)
    {
        cout << result[i].first << " - " << result[i].second << endl;
    }
}

//TODO: it's better to write additional functions which help solve the task 