#include<iostream>
using namespace std;

int tong(int n, int a[]);

int main() { 
    int i, j, tg, t1 = 0, t2 = 0, n, a[100], b[100], n1[100], n2[100], m1[100], m2[100], dB, T, c[100], d[100];
    cout << "So chi tiet can gia cong tren 2 may: "; cin >> n; 
	cout << "Thoi gian gia cong tren may A: "; 
    for (i = 1;i <= n;i++)
        cin >> a[i]; 
    cout << "Thoi gian gia cong tren may B: "; 
    for (i = 1;i <= n;i++)
        cin >> b[i]; 
    //Lap 2 nhom n1, n2;
    for (i = 1;i <= n;i++)
        if (a[i] <= b[i])
        {
            t1++;
            n1[t1] = a[i];
            m1[t1] = i;
        }
        else
        {
            t2++;
            n2[t2] = b[i];
            m2[t2] = i;
        }
    //Sap xep nhom n1 tu bé den lon
    for (i = 1;i < t1;i++)
        for (j = i + 1;j <= t1;j++)
            if (n1[i] > n1[j])
            {
                swap(n1[i], n1[j]);
                swap(m1[i], m1[j]);
            }
    //Sap xep nhóm n2 tu lon den be 
    for (i = 1;i < t2;i++)
        for (j = i + 1;j <= t2;j++)
            if (n2[i] < n2[j])
            {
                swap(n2[i], n2[j]);
                swap(m2[i], m2[j]);
            }
    //Noi n1 voi n2
    for (i = t1 + 1;i <= t1+t2;i++)
        m1[i] = m2[i-t1];
    //Tinh T
    for (i = 1;i <= n;i++)
    {
        c[i] = a[m1[i]];
        d[i] = b[m1[i]];
    }
    dB = c[1];
    for (i = 2;i <= n;i++)
        if (tong(i, c)-tong(i - 1, d) > dB)
            dB = tong(i, c)-tong(i - 1,d);
    T = dB + tong(n, b);
    cout << "\nLich gia cong toi uu la: "; 
    for (i = 1;i <= t1+t2;i++)
        cout << m1[i] << " ";
    cout << "\nThoi gian hoan thanh cong viec la: " << T << endl; 
    return 0;
}

int tong(int n, int a[])
{
    int i, t = 0; 
    for(i = 1;i <= n;i++)
    t = t + a[i];
    return t;
}

