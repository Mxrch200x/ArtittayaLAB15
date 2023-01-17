#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T k, l;
	int j;
	for(int i = 1; i < N; i++) {
		k = d[i];
		j = i - 1;
		while (j >= 0 && d[j] < k){
			l = k;
			d[j+1] = d[j];
			d[j] = l;
			j--;
		}
		cout << "Pass " << i << ":";
		for(int l = 0; l < N; l++){
			cout << d[l] << " ";
		}
	cout << endl;
	}	
}
	
			


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
