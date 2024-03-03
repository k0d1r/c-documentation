#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14


int main(int argc, char *argv[]) {

		
	/*

	1.SORU->Kullanýcýdan a,b,c deðerleri alarak delta hesaplamasý yapýnýz, 
	deltanýn 0 dan büyük mü küçük mü olduðunun sorgusunu yazýnýz.
	
	DELTA FORMÜLÜ:
	delta=b^2-4*a*c
		
	
	2.SORU->Kullanýcýdan yarýçap deðeri girmesini isteyiniz,
	buna göre dairenin çevresini ve alanýný hesaplayýnýz. 
	
	daire cevresi=2*pi*r
	daire alani=pi*r^2
*/
	
	/*	3.SORU->Sizden öðrenci not ortalamasý ve çan eðrisine göre geçti kaldý
	sistemi yapmanýz istenmektedir.	Buna göre öðrenciden önce vize notunu 
	ardindan vize yuzdenizi girmesini isteyiniz ve bu bilgileri 
	programýnýzda saklayýnýz. Ardýndan öðrenciden final notunu girmesini 
	isteyiniz ve bu bilgiyi de programýnýza alýnýz. Aldýðýnýz bu bilgileri
	öðrenciye gösteriniz ve final yüzdesini girmesini istemediðimiz için 
	bunu programýnýza hesaplatarak ayný satýrda sonucu öðrenciye gösteriniz.
	Aldýðýnýz bilgiler ile ortalama hesaplatýnýz, sonucu ekrana bastýrýnýz. 
	Öðrenci dersi çan eðrisine göre geçebiliyorsa 1; geçemiyorsa 0 yazdýrýnýz. 
	Çan eðrisini 60 olacak þekilde iþlemlerinizi gerçekleþtiriniz.*/


	





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
