#include<iostream> 
using namespace std;

//Sinh ke tiep 
//int n, a[1000], check;

//void khoitao();
//void sinh(); 

//int main() {
//	cin >> n;
//	check = 1; 
//	khoitao();
//	while(check) {
//		for(int i = 1;i <= n;i++) {
//		cout << a[i]; 
//	} cout << endl; 
//	sinh();
//	} 
//	return 0; 
//} 

//void khoitao() {
//	for(int i = 1;i <= n;i++) {
//		a[i] = 0; 
//	} 
//} 

//void sinh() {
//	int i = n;
//	while(i >= 1 && a[i] == 1) {
//		a[i] = 0;
//		--i; 
//	} 
//	if(i == 0) {
//		check = 0; 
//	} else {
//		a[i] = 1; 
//	} 
//} 

// Quay lui 
int n, x[100];
  
void inkq();
void Try(int i);  
  
int main() {
	cout << "Nhap gia tri cua n: "; 
 	cin >> n;
 	cout << "Cac day nhi phan do dai " << n << " la:\n"; 
	Try(1); 
 	return 0; 
} 

void inkq() {
	for(int i = 1;i <= n;i++) {
		cout << x[i]; 
	} cout << endl; 
} 

void Try(int i) {
	for(int j = 0;j <= 1;j++) {
		x[i] = j; 
		if(i == n) {
			inkq(); 
		} else {
			Try(i+1); 
		} 
	} 	
} 
















