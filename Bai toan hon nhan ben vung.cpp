#include<iostream>
#include<string.h>
#include<stdio.h> 
using namespace std;
#define N 4 

bool wPreferM1OverM(int prefer[2*N][N], int w, int m, int m1);
void stableMarriage(int prefer[2*N][N]);

int main() {
	int prefer[2*N][N]; 
	for(int i = 0;i < 2*N;i++) {
		for(int j = 0;j < N;j++) {
			cin >> prefer[i][j]; 
		} 
	} 
	stableMarriage(prefer); 
	return 0; 
} 

bool wPreferM1OverM(int prefer[2*N][N], int w, int m, int m1) {
	for(int i = 0;i < N;i++) {
		if(prefer[w][i] == m1) {
			return true; 
		} 
		if(prefer[w][i] == m) {
			return false; 
		} 
	} 
} 

void stableMarriage(int prefer[2*N][N]) {
	int wPartner[N];
	bool mFree[N];
	memset(wPartner, -1, sizeof(wPartner));
	memset(mFree, false, sizeof(mFree));
	
	int freeCount=N;
	while(freeCount > 0) {
		int m; 
		for(m = 0;m < N;m++) {
			if(mFree[m] == false) {
				break; 
			} 
		} 
		for(int i = 0;i < N && mFree[m] == false;i++) {
			int w = prefer[m][i];
			if(wPartner[w-N] == -1) {
				wPartner[w-N] = m;
				mFree[m] = true;
				freeCount--; 
			} else {
				int m1 = wPartner[w-N];
				if(wPreferM1OverM(prefer, w, m, m1) == false) {
					wPartner[w-N] = m;
					mFree[m] = true;
					mFree[m1] = false; 
				} 
			} 
		} 
	}
	cout << "Woman  Man" << endl;
	for(int i = 0;i < N;i++) {
		cout << " " << i+N << "\t" << wPartner[i] << endl; 
	} 
} 
