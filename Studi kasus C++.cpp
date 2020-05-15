#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD k={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),k);	
}
int main()
{
	int a,b,c,d,e,f;
	float uts[50],tugas[50], kuis[50], uas[50];
	int absen[50],G,H,I,J,K[50],L,M,N,O;
	char g,mutu,nama[100];
	string predikat;
	awal:
	system ("cls");
	cout<<"\t****************************************************\n"<<endl;
	cout<<"\t|	Nama: NUR AFIFAH SYARIFAH	|\n"<<endl;
 	cout<<"\t|	NIM : F1B019108			|\n"<<endl;
 	cout<<"\t|	PRAKTIKUM P4			|\n"<<endl;
 	cout<<"\t|	Kelompok : 17 (Tujuh belas)	|\n"<<endl;
 	cout<<"\t****************************************************\n"<<endl;
	cout<<"SELAMAT DATANG DI PROGRAM PENILAIAN MATAKULIAH POTION(RAMUAN) -HOGWARTS"<<endl;
	cout<<"***************Hallo Saya Profesor SEVERUS SNAPE***************"<<endl;
	cout<<"****************************************************************\n\n";
	cout<<"Masukkan Persentase Kehadiran : ";cin>>a;
	cout<<"Masukkan Persentase TUGAS     : ";cin>>b;
	cout<<"Masukkan Persentase KUIS      : ";cin>>c;
	cout<<"Masukkan Persentase UTS       : ";cin>>d;
    cout<<"Masukkan Persentase UAS       : ";cin>>e;
    f=a+b+c+d+e;
if(f>100)
 {cout<<"Presentase Kelebihan \n";
 cout<<"Ulang !!! ";cin>>f;
 if(g=='Y'||'y')
 goto awal;
 else exit;}
 {if (f<=100)
 cout<<"Presentase sudah pas "<<f<<" %"<<endl;}
cout<<"****************************************************\n";
cout<<"Masukkan Jumlah SKS Mata Pelajaran : ";cin>>L;
cout<<"****************************************************\n";
cout<<"Masukkan Jumlah Mahasiswa yang Ingin Di Input : ";cin>>M;
cout<<endl;
cout<<" | No.|  Nama Mahasiswa   | Kehadiran |Tugas | Kuis  | UTS  | UAS |  NA | Grade |Jumlah SKS|  Predikat  |\n";
for(N=1;N<=M;N++)
{gotoxy(1,28+N);cout<<"|"<<N<<"   |                   |           |      |       |      |     |     |       |          |            |"<<endl;
gotoxy(8,28+N);cin>>nama;cout<<endl;
gotoxy(32,28+N);cin>>absen[N];
gotoxy(40,28+N);cin>>tugas[N];
gotoxy(48,28+N);cin>>kuis[N];
gotoxy(55,28+N);cin>>uts[N];
gotoxy(62,28+N);cin>>uas[N];
  G=(absen[N]/100)*a;
  H=(tugas[N]/100)*b;
  I=(kuis[N]/100)*c;
  J=(uts[N]/100)*d;
  O=(uas[N]/100)*e;
  K[N]=G+H+I+J+O;
  {if(K[N]>=80)
  mutu='A';
  else if(K[N]>=67)
  mutu='B';
  else if(K[N]>=55)
  mutu='C';
  else if(K[N]>=45)
  mutu='D';
  else
 mutu='E';
 gotoxy(76,28+N);cout<<mutu;}
 
 {if(K[N]>=45)
  predikat="Lulus";
  else 
 predikat="Tidak Lulus";
 gotoxy(93,28+N);cout<<predikat;
 }
gotoxy(68,28+N);cout<<K[N];
gotoxy(86,28+N);cout<<L<<endl;
}
getch();






}				

