#include <iostream>
using namespace std;

int main()
{
 
	const int N = 20; 
	double A[N] = {0,}; 
 
	int len = N + 1; 
 
	cout << "Введи длину массива - ";
 
	while ((len >= N) || (len < 1))
	{
		cin >> len;
		if (len >= N){
         cout << "Слишком большой размер\n" <<
			               "Введи длину массива: " ;
        }
		else if (len < 1){
         cout<<"Слишком маленький размер\n" <<
			               "Введи длину массива: " ;
         }
	}
	cout << "\n";
 
	for (int i = 0; i < len; i++)	
	{
		cout << "[" << i << "]" << ":";
		cin >> A[i]; 
	}
	
	for (int i = 0; i < len; i++){
	    cout << "[" << i << "]" << ":" << A[i] << "\t" ;
	}
	cout << "\n";
	
	int max = A[0];
	int max_i = 0;
	for (int i = 0; i < len; i++){
	    if (max < A[i]){
	        max = A[i];
	        max_i = i;
	    }    
	}
	cout << "максимальное значение в массиве и его индекс  - " << max << "[" << max_i << "]" << "\n";
	
	int sum = 0;
	int multiplication = 1; 
	for (int i = 0; i < max_i; i ++ ){
	    if (A[i] > 0){
	        sum = sum + A[i];
	        multiplication = multiplication * A[i];
	    }
	}
	cout << "сумма - " << sum << "\n" ;
	cout << "произведение - " << multiplication;
	
	return 0;
}
