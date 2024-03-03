#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>



int main(int argc,char **argv){
	
/*	if(sorgu)	
	0 dýþýnda yani doðru olan her durum için if bloðu çalýþýr,
	{
		islem;
	}
	0 ise aþaðýdaki koþul çalýþýr 
	else{
		islem;
	}
*/	
/*

	if(1)
	{
		printf("If blogu calisir\n");
	}
	else{
		printf("Else blogu calisir\n");
	}

*/	
	
/*
if(0){
		printf("If blogu calisir\n");	}
	else if(0){
		printf("Else if blogu calisir\n");
	}
	else{
		printf("Else blogu calisir\n");
	}
*/	
	
	
	
	
	
	
	
	//RANDOM ÜRETÝLEN SAYILARI KARÞILAÞTIRMA 
/*	
	int sayi1,sayi2;
	//srand(time(NULL));
	sayi1=rand()%100;
	sayi2=rand()%100;
	printf("1. sayi:%d , 2. sayi:%d\n",sayi1,sayi2);
	
	//if(sayi1<sayi2){
	//printf("%d SAYISI %d SAYISINDAN KUCUKTUR",sayi1,sayi2);
	//}
	//else if(sayi1==sayi2){
	//	printf("%d SAYISI %d SAYISINA ESITTIR",sayi1,sayi2);
	//}
	//else{
	//	printf("%d SAYISI %d SAYISINDAN BUYUKTUR",sayi1,sayi2);
	//}
	
*/	


	//SAYI TEK MÝ ÇÝFT MÝ BULMACASI
/*	
	int sayi;
	srand(time(NULL));
	sayi=rand()%100+1;
	printf("Rastgele Olusan Sayi = %d 'dir\n",sayi);
	if(sayi%2==0){
		printf("%d sayisi cift bir sayidir.",sayi);
	}
	else{
		printf("%d sayisi tek bir sayidir.",sayi);
	}
	
*/	 
	
	
	
	
	
	
	//BASÝT BÝR HESAP MAKÝNESÝ PROGRAMI YAZALIM
/*	
	int sayi1,sayi2;
	float sonuc;
	char islem;
	
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
    printf("Lutfen yapmak istediginiz islemi seciniz (+,-,*,/):\n");
	
	//fflush(stdin);   
	
	scanf("%c",&islem);
	if(islem=='+'){
		sonuc=sayi1+sayi2;
		printf("Toplam = %.2f\n",sonuc);
	}
	else if(islem=='-'){
		sonuc=sayi1-sayi2;
		printf("Cikartma = %.2f\n",sonuc);	
	}
	else if(islem=='*'){
		sonuc=sayi1*sayi2;
		printf("Carpma = %.2f\n",sonuc);	
	}
	else if(islem=='/'){
		sonuc=sayi1/sayi2;
		printf("Bolme = %.2f\n",sonuc);	
	}
	else{
		printf("Yanlis bir tuslama yaptiniz.\n");
	}
	
*/	
	
	
	
	
	//BANKAMATÝK KODU (if else else if yapýsý ile çözülecek)
	
	
	
	
	/*
	float Bakiye=20000.0,Miktar,Limit=5000.0;
	int islem;
	printf("\t Hosgeldiniz\n");
	printf("\t Para yatirmak icin 1'e,\n \t Para cekmek icin 2'ye,\n \t Hesap bakiyenizi goruntulemek icin 3'e basiniz:");
	scanf("%d",&islem);
	if(islem==1){
		printf("\t Yatirmak istediginiz miktari giriniz:");
		scanf("%f",&Miktar);
		if(Miktar==0){
			printf("\t Lutfen belirtilen surede bir para girisi yapiniz.");
			sleep(3); 
	  		scanf("%f",&Miktar);
		}
		Bakiye+=Miktar;
			printf("\t Isleminiz basariyla geceklesmestir.\n");
			printf("\t Yeni Bakiyeniz:%.2f TL'dir\n",Bakiye);
			printf("\t Bizi tercih ettiginiz icin tesekkur ederiz.\n");
	}
	else if(islem==2){
		printf("\t Cekmek istediginiz miktari giriniz:");
		scanf("%f",&Miktar);
		if(Miktar>Bakiye){
			printf("\t Hesabinizda o kadar para bulunmamaktadir.Isleminizi gerceklestiremiyorum.\n");
		}
		else if(Miktar>Limit){
			printf("\t Gunluk para cekme limitini astiniz.Isleminizi gerceklestiremiyorum.\n");
		}
		else{
			Bakiye-=Miktar;
			printf("\t Isleminiz basariyla geceklesmestir.\n");
			printf("\t Yeni Bakiyeniz:%.2f TL'dir\n",Bakiye);
			printf("\t Bizi tercih ettiginiz icin tesekkur ederiz.\n");
				
		}			
	}
	else if(islem==3){
		printf("\t Bakiyeniz:%.2f\n",Bakiye);			
	}
	else{
		printf("\t Yanlis bir islem girdiniz.\n");
	}
	

	*/
	
	
	
	
	
	//SWITCH-CASE
/*
	int sayi=5;
	switch(sayi){
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;	
		case 3:
			printf("3\n");
			break;
		case 4:
			printf("4\n");
			break;
	//	default:
	//		printf("Yanlis bir deger girdiniz.\n");	
	}
*/	
	
	
	
	
	
	
	//HESAP MAKÝNESÝ ÖRNEÐÝMÝZÝ BÝRDE SWITCH CASE ÝLE ÇÖZELÝM
	
	/*
	int sayi1,sayi2,sonuc;
	char islem;
	printf("Lutfen yapmak istediginiz hesaplama islemini (sayi islem sayi biciminde)  giriniz:");
	fflush(stdin);
	scanf("%d%c%d",&sayi1,&islem,&sayi2);
	
	switch(islem){
		case '+':
			sonuc=sayi1+sayi2;
			break;
		case '-':
			sonuc=sayi1-sayi2;
			break;
		case '*':
			sonuc=sayi1*sayi2;
			break;
		case '/':
			sonuc=sayi1/sayi2;
			break;
		case '%':
			sonuc=sayi1%sayi2;
			break;
		default:
			printf("Hatali bir islem girdiniz.\n");
	}
	printf("Sonuc=%d",sonuc);
	
	*/
	
	
	
	
	
	//HAFTAÝÇÝ MÝ HAFTASONU MU SORGUSU OLUÞTURMA

	/*
	int haftaninGunleri;
	printf("Hafta ici ya da hafta sonu sorgusu icin 1 ile 7 arasinda bir deger giriniz:");
	scanf("%d",&haftaninGunleri);
	switch(haftaninGunleri){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Haftaici!\n");
			break;
		case 6:
		case 7:
			printf("Haftasonu!\n");
			break;
		default:
			printf("Yanlis bir deger girdiniz!");		
	}
	*/
	
	return 0;
}
