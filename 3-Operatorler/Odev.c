#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14


int main(int argc, char *argv[]) {

		
	/*

	1.SORU->Kullan�c�dan a,b,c de�erleri alarak delta hesaplamas� yap�n�z, 
	deltan�n 0 dan b�y�k m� k���k m� oldu�unun sorgusunu yaz�n�z.
	
	DELTA FORM�L�:
	delta=b^2-4*a*c
		
	
	2.SORU->Kullan�c�dan yar��ap de�eri girmesini isteyiniz,
	buna g�re dairenin �evresini ve alan�n� hesaplay�n�z. 
	
	daire cevresi=2*pi*r
	daire alani=pi*r^2
*/
	
	/*	3.SORU->Sizden ��renci not ortalamas� ve �an e�risine g�re ge�ti kald�
	sistemi yapman�z istenmektedir.	Buna g�re ��renciden �nce vize notunu 
	ardindan vize yuzdenizi girmesini isteyiniz ve bu bilgileri 
	program�n�zda saklay�n�z. Ard�ndan ��renciden final notunu girmesini 
	isteyiniz ve bu bilgiyi de program�n�za al�n�z. Ald���n�z bu bilgileri
	��renciye g�steriniz ve final y�zdesini girmesini istemedi�imiz i�in 
	bunu program�n�za hesaplatarak ayn� sat�rda sonucu ��renciye g�steriniz.
	Ald���n�z bilgiler ile ortalama hesaplat�n�z, sonucu ekrana bast�r�n�z. 
	��renci dersi �an e�risine g�re ge�ebiliyorsa 1; ge�emiyorsa 0 yazd�r�n�z. 
	�an e�risini 60 olacak �ekilde i�lemlerinizi ger�ekle�tiriniz.*/


	





	//SORU 1
/*	
	int a,b,c;
	float delta;
	printf("Lutfen sirasiyla a,b,c degerlerini giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Girdiginiz degerler:%d %d %d\n",a,b,c);
	delta=b*b-4*a*c; //3 1 6=2*2-4*3*6=68  
	//delta=pow(b,2)-4*a*c; 
	printf("Sonuc:%.2f\n",delta);
	printf("Karsilastirma sonucu:%d",delta>=0);
	
	
*/	
	
	
	
	
	
	
	
	
	//SORU 2



	//float yaricap,cevre,alan;
	//printf("Lutfen bir yaricap degeri giriniz:");
	//scanf("%f",&yaricap);
	//printf("Girdiginiz yaricap degeri:%.f\n",yaricap);
	//cevre=2*pi*yaricap;
	//alan=pi*pow(yaricap,2);
	//printf("Cevre:%.2f Alan:%.2f",cevre,alan);

	
	
	
	
	
	
	
	
	
	
	
	
	
		
	

		//SORU 3
	
/*
	int vize,final,vizeYuzdesi,canEgrisi=60;
	float ogrenciOrtalamasi;
	printf("Lutfen once vize notunuzu ardindan vize yuzdenizi giriniz:");
	scanf("%d%d",&vize,&vizeYuzdesi);
	printf("Lutfen final notunuzu giriniz:");
	scanf("%d",&final);
	printf("Vize Notunuz:%d(Yuzdesi:%d),Final Notunuz:%d(Yuzdesi:%d)\n",vize,vizeYuzdesi,final,100-vizeYuzdesi);
	ogrenciOrtalamasi=(vize*vizeYuzdesi+final*(100-vizeYuzdesi))/100;
	printf("Ortalamaniz:%.2f\n",ogrenciOrtalamasi);
	printf("Ders Basari Durumunuz:%d (1 ise Gectiniz,0 ise Kaldiniz)",ogrenciOrtalamasi>=canEgrisi);
	
*/

	
		return 0;
}
