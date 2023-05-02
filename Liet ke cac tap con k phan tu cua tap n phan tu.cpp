#include<iostream> 
using namespace std;

//Sinh ke tiep 
//int n, k, a[1000], check;

//void khoitao();
//void sinh(); 

//int main() {
//	cin >> n >> k; 
//	check = 1; 
//	khoitao();
//	while(check) {
//		for(int i = 1;i <= k;i++) {
//		cout << a[i]; 
//	} cout << endl; 
//	sinh();
//	} 
//	return 0; 
//} 

//void khoitao() {
//	for(int i = 1;i <= k;i++) {
//		a[i] = i; 
//	} 
//} 

//void sinh() {
//	int i = k;
//	while(i >= 1 && a[i] == n-k+i) {
//		--i; 
//	} 
//	if(i == 0) {
//		check = 0; 
//	} else {
//		a[i]++; 
//		for(int j = i+1;j <= k;++j) {
//			a[j] = a[j-1]+1; 
//		} 
//	} 
//} 

// Quay lui 
int n, x[100], k; 

void inkq();
void Try(int i); 

int main() {
	cout << "Nhap gia tri cua n: "; 
 	cin >> n;
 	cout << "Nhap gia tri cua k: ";
	cin >> k; 
	x[0] = 0; 
	cout << "Cac tap con " << k << " phan tu cua tap " << n << " phan tu la: \n"; 
	Try(1); 
 	return 0; 
} 

void inkq() {
	for(int i = 1;i <= k;i++) {
		cout << x[i]; 
	} cout << endl; 
} 

void Try(int i) {
	for(int j = x[i-1]+1;j <= n-k+i;j++) {
		x[i] = j; 
		if(i == k) {
			inkq(); 
		} else {
			Try(i+1); 
		} 
	} 	
} 









