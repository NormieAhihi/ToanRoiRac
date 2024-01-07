#include<iostream> 
using namespace std;

// Sinh ke tiep 
int n, a[1000], check;

void khoitao();
void sinh();

int main() { 
    int flag=1; 
    int k; 
    cout << "Nhap so phan tu cua tap hop: ";
	cin >> n;
	cout << "Nhap thu tu cua hoan vi: "; 
	cin >> k;  
	check=1; 
	khoitao();
	while(check && flag<k) {
	    sinh();
	    flag++;
	    if(flag==k) {
	    	cout << "\nHoan vi thu " << k << " cua tap " << n << " phan tu la: "; 
		    for(int i=1;i<=n;i++) {
		        cout << a[i];	
	        } break; 
	    } 
    } 
	return 0; 
} 

void khoitao() {
for(int i=1;i<=n;i++) {
		a[i]=i; 
	} 
} 

void sinh() {
	int i=n-1;
    while(i>=1 && a[i]>a[i+1]) {
  	    --i; 
	} 
	if(i==0) {
		check=0; 
	} else {
		int j=n;
		while(a[j]<a[i]) {
			--j; 
		} 
		swap(a[i], a[j]);
		int l=i+1, r=n;
		while(l<r) {
			swap(a[l], a[r]);
			++l;
			--r; 
		} 
	} 
} 


// Quay lui 
//int n, used[100], x[100]; 

//void inkq();
//void Try(int i);

//int main() {
//	for(int j=1;j<=k;j++) {
//		used[j]=0; 
//	} 
//	cin >> n >> k; 
//	Try(1); 
//	return 0; 
//} 

//void inkq() {
//	for(int i=1;i<=n;i++) {
//		cout << x[i]; 
//	} cout << endl; 
//} 
//
//void Try(int i) {
//	for(int j=1;j<=n;j++) {
//		if(used[j]==0) {
//			used[j]=1;
//			x[i]=j;
//			if(i==n) {
//				inkq(); 
//			} else {
//				Try(i+1); 
//			} used[j]=0; 
//		} 
//	} 
//










