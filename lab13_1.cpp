#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i, key, j; 
	
   for (i = 1; i < N; i++) 
   {
   int temp=i; 
   for(int z = 0; z < N;z++){
   	if(z==i){
   		cout << "[" << d[z] << "]"<< " ";
   	}else{
   		cout << d[z]<< " ";
	   }
   }
    cout << " ==> ";
       key = d[i]; 
       j = i-1; 
       while (j >= 0 && d[j] < key) 
       { 
           d[j+1] = d[j]; 
           j = j-1;
		   temp--; 
       } 
       d[j+1] = key; 
    
   for(int z = 0; z < N;z++){
   	if(z == temp){
   		cout << "[" << d[z] << "]"<< " ";
   }else{
   	cout << d[z]<< " ";
   }
   }
   cout<< "\n";
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