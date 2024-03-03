#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_KARAKTER_SAYISI 50

//��ARET��LER/POINTER (de�i�ken adresini tutmak i�in tan�mlanan veri t�r�d�r)
/* int main(int argc, char *argv[]) {
	
	int sayi=3;
	//direkt eri�im:de�i�ken ismiyle eri�im
	//dolayli erisim:adresiyle eri�im sa�l�yoruz.
	//int *ptr=&sayi;
	//int *ptr; //TANIMLANDI. �lk tan�mlama esnas�nda,* isareti pointer anlam�na gelir.
	//ptr=&sayi;//ATAMA YAPILDI. & i�areti adres anlam�na gelir.
	int *p1,p2;
	p1=&sayi;
	//p2=&sayi;
	//*p2=7;//p2 nin g�sterdi�i yerin degerini 7 ye cevirdim.
	//*p1=10;
	printf("Pointer kullanarak sayi degiskeninin adresi: %#X \n",p1);
	printf("Pointer kullanmadan sayi degiskenin adresi:%#X \n",&sayi);
	printf("Pointer kullanmadan sayi degiskeninin degeri:%d\n",sayi);
	printf("Pointer kullanarak sayi degiskeninin degeri:%d\n",*p1);//DEGER� ANLAM�NA GEL�YOR.
	
	//p1 sayiyi isaret ediyor.Adresini g�steriyor. p1 sayinin adresini tutuyor.

return 0;	
}
*/

//D�NAM�K BELLEK Y�NET�M�
/*int main(){
	
	int dizi[20];//10 tane eleman*4=40byte.
	printf("%d",sizeof(dizi));//ka� byte 
	//baslangicAdresi=malloc();//alan ayirmak icin
	//free();//alani geri bosaltmak icin.
	//realloc();//ayr�lan alan�n boyutunu artt�rmak i�in kullan�r�z
	//calloc();//ay�rd���m�z yerlerin hepsine 0 de�eri at�yoruz
	return 0;}
*/	
	
/* int main(){	
	int *ptr;//baslangic adresini tutabilmek icin.
	ptr=(int *)malloc(sizeof(int));//baslangic adresini d�ner.
	printf("%#X\n",ptr);
	*ptr=10;
	printf("%d\n",*ptr);
	free(ptr);
	printf("%#X\n",ptr);
	printf("%d\n",*ptr);
return 0;	
}	
*/

	
 /*int main(){	
 	int *ptr;
 	ptr=(int *)malloc(sizeof(int));
 	*ptr=10;
	int *ptr2=ptr;
	printf("%#X\n",ptr);
	printf("%d\n",*ptr);
	printf("%#X\n",ptr2);
	printf("%d\n",*ptr2);
	//free(ptr2);
	//printf("%#X\n",ptr);
	//printf("%d\n",*ptr);
	//printf("%#X\n",ptr2);
	//printf("%d\n",*ptr2);
return 0;	
}	
*/


/*int main(){	
 	int *ptr;
 	ptr=(int *)malloc(sizeof(int));
 	*ptr=10;
	int *ptr2;
	ptr2=(int *)malloc(sizeof(int));
	//*ptr2=25;
	//*ptr=*ptr2;//burada yaptigim deger esitlemesi
	//free(ptr2);
	//ptr=ptr2;//adres e�itlemesi PTR PTR2N�N G�STED�G� YER� G�STER�R.
	printf("%#X\n",ptr);
	printf("%d\n",*ptr);
	printf("%#X\n",ptr2);
	printf("%d\n",*ptr2);

return 0;	
}*/

//STRUCT YAPISI/KEND� VER� T�PLER�M�Z� OLU�TURMA
/*
struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};//veri tipi tan�m�n� yapt�m.

int main(){
	
	
	//int x;//de�i�ken olu�turma.(VER� T�P�: �nt, DE���KEN �SM�: x)
    struct Ogrenci ogr1={"Bilge","Ege",3.80};//de�i�ken olu�turma( VER� T�P�: STRUCT Ogrenci, DE���KEN �SM�: ogr1)
	//struct Ogrenci ogr2;
	
	//strcpy(ogr2.isim,"Ebru");//char cinsinden oldu�u i�in atamalar e�itlik ile yap�lamaz.
	//strcpy(ogr2.soyisim,"Tuncel");
	//ogr2.ortalama=3.75;//e�itlik operat�r� ile atad�k.
	
	printf("Ogr1 Degiskeninin ismi:%s\n",ogr1.isim);//degerlere erisim sa�lad�m  ( . operat�r� ile eri�im sa�lad�m)
	printf("Ogr1 Degiskeninin soyismi:%s\n",ogr1.soyisim);
	printf("Ogr1 Degiskeninin ortalamasi:%.2f\n",ogr1.ortalama);
	
	//printf("\nOgr2 Degiskeninin ismi:%s\n",ogr2.isim);//degerlere erisim sa�lad�m  ( . operat�r� ile eri�im sa�lad�m)
	//printf("Ogr2 Degiskeninin soyismi:%s\n",ogr2.soyisim);
	//printf("Ogr2 Degiskeninin ortalamasi:%.2f\n",ogr2.ortalama);
	
	
	return 0;
}*/

//STRUCT YAPISININ typedef ve FONKS�YONLARLA B�RL�KTE KULLANIM
/*struct OgrenciBilgileri{
	char isim[20];//20 byte kapl�yor
	char soyisim[30];//30 byte yer kapl�yor
	float ortalama;	//6 byte.
};
typedef struct OgrenciBilgileri Ogrenci;

//2. kullan�m �ekli
//typedef struct OgrenciBilgileri{
//	char isim[20];//20 byte kapl�yor
//	char soyisim[30];//30 byte yer kapl�yor
//	float ortalama;	//6 byte.
// } Ogrenci;

//3.kullan�m �ekli
//typedef struct{
//	char isim[20];//20 byte kapl�yor
//	char soyisim[30];//30 byte yer kapl�yor
//	float ortalama;	//6 byte.
// } Ogrenci;

void bilgileriOku(Ogrenci *ogrPtr){
	puts("Lutfen ogrencinin adini giriniz:");
	scanf("%s",&ogrPtr->isim);
	puts("Lutfen ogrencinin soyadini giriniz:");
	scanf("%s",&ogrPtr->soyisim);
	puts("Lutfen ogrencinin ortalamasini giriniz:");
	scanf("%f",&ogrPtr->ortalama);	
}
void bilgileriYazdir(Ogrenci *ogrPtr){
	
	printf("Ogrenci Adi:%s\n",ogrPtr->isim);
	printf("Ogrenci Soyadi:%s\n",ogrPtr->soyisim);
	printf("Ogrenci Ortalamasi:%.2f\n",ogrPtr->ortalama);
}
void ogrenciBilgisiDegistir(Ogrenci *ogr, Ogrenci *ogr2){
	 Ogrenci geciciOgrenci;
	
	strcpy(geciciOgrenci.isim,ogr->isim);
	strcpy(geciciOgrenci.soyisim,ogr->soyisim);
	geciciOgrenci.ortalama=ogr->ortalama;
	
	
	strcpy(ogr->isim,ogr2->isim);
	strcpy(ogr->soyisim,ogr2->soyisim);
	ogr->ortalama=ogr2->ortalama;
	
	strcpy(ogr2->isim,geciciOgrenci.isim);
	strcpy(ogr2->soyisim,geciciOgrenci.soyisim);
	ogr2->ortalama=geciciOgrenci.ortalama;

}
int main(int argc,char **argv){
	
	Ogrenci ogr;
	Ogrenci ogr2;
	bilgileriOku(&ogr);
	bilgileriOku(&ogr2);
	puts("Birinci Ogrenci Bilgileri\n");
	bilgileriYazdir(&ogr);
	puts("Ikinci Ogrenci Bilgileri\n");
	bilgileriYazdir(&ogr2);
	
	ogrenciBilgisiDegistir(&ogr,&ogr2);
	puts("Birinci Ogrenci Bilgileri\n");
	bilgileriYazdir(&ogr);
	puts("Ikinci Ogrenci Bilgileri\n");
	bilgileriYazdir(&ogr2);

}*/

//DOSYA ��LEMLER�
/*Dosya Tipleri:
1.Metin Dosyalar�:ASCII tabloya g�re,byte d�zeyinde,geriye d�n�k ekleme yap�lam�yor, sat�r d�zeyinde.
2.�kili Dosyalar�:0-1 bit kar��l���na, geriye d�n�k ekleme yapabiliyor olmam.(read (r) i�in reaadbinary (rb), yani metin dosylar�nda yap�lan i�lemleri yapmak i�in sonlar�na binary k�saltmas�n� al�r)

*/

/* �simize yarayacak fonksiyonlar:

1. feof(FILE POINTER)-->>dosyan�n sonuna gelip gelinmedi�ini s�yler.Dosyan�n sonuna gelindi�i zaman 0'dan farkl� bir deger donuyor, aksi halde 0.
			
2. rewind(FILE POINTER)-->dosyan�n en ba��na d�nmemizi sa�lar.

3. fseek(FILE POINTER,KA� BYTE,NEREDEN �T�BAREN)--->imleci dosyan�n belirli yerlerine g�t�rmemizi sa�lar.

		(0)SEEK_SET-->dosyan�n ba��ndan itibaren 
		(1)SEEK_CUR->en son kal�nan yerden itibaren.
		(2)SEEK_END->sondan itibaren
		
		- > geriye do�ru anlam�na.
		
4. ftell(FILE POINTER)-->ka��nc� byte de�erinde oldu�umuzu s�yler.

*/


//Dosya olu�turma/yazma (write) Dikkat! Dosya �nceden varsa i�eri�ini siler
/*	int main(){
	FILE *dosya=fopen("deneme.txt","w");//okuma modu
	
	if(dosya!=NULL){
		printf("dosyaniz da basariyla olusturuldu.\n");
	}
	else{
		printf("Dosyalar acilirken hata meydana geldi.");
	}
	return 0;
}*/


//Dosya kapama	(fclose)
/*	int main(){
	FILE *dosya=fopen("deneme.txt","w");//okuma modu
	
	int kapandiMi;//kapandi kontrolu yapabillmek icin kullan�cam
	kapandiMi=fclose(dosya);//kapandiysa 0 donuyor, kapanmadiysa 0dan farkli bir deger donuyor.
	if(kapandiMi==0){
		printf("Dosya basarili bir sekilde kapatilmistir.\n");
	}	
	else{
		printf("Dosya kapatilirken bir hata meydana geldi");
	}
	
	return 0;
}
*/

//Dosyadan okuma yapma	(read)
/*	int main(){
	FILE *dosya=fopen("deneme2.txt","r");//okuma modu
	
		if(dosya!=NULL){
		printf("Dosyaniz da basariyla olusturuldu.\n");
	}
	else{
		printf("Dosyalar acilirken hata meydana geldi.\n");
	}
	
	int kapandiMi;//kapandi kontrolu yapabillmek icin kullan�cam
	kapandiMi=fclose(dosya);//kapandiysa 0 donuyor, kapanmadiysa 0dan farkli bir deger donuyor.
		if(kapandiMi==0){
			printf("Dosya basarili bir sekilde kapatilmistir.\n");
	}	
		else{
			printf("Dosya kapatilirken bir hata meydana geldi.");
	}
	
	return 0;
}*/

// a ise Dosyaya ekleme yapar, dosya varsa sonuna ekler,dosya yoksa dosya olu�turur



/*
int main(){
	
	char adSoyad[MAX_KARAKTER_SAYISI],bolumBilgisi[MAX_KARAKTER_SAYISI];
	float ortalama;
	FILE *dosya=fopen("deneme.txt","r");//okuma modu
	FILE *dosya2=fopen("deneme2.txt","w");//yazma modu
	
	
	if(dosya!=NULL && dosya2!=NULL){
		printf("Iki dosyaniz da basariyla acildi.\n");
		while(!feof(dosya)){
			fscanf(dosya,"%s%f%s",&adSoyad,&ortalama,&bolumBilgisi);
			printf("Ad Soyad:%s\n Ortalamasi:%.2f\n Bolumu:%s\n",adSoyad,ortalama,bolumBilgisi);
			fprintf(dosya2,"Ad Soyad:%s\nOrtalamasi:%.2f\nBolumu:%s\n\n---------------------\n",adSoyad,ortalama,bolumBilgisi);	
		}
		//rewind(dosya);//dosyanin en basina donmemizi sa�l�yor.
		printf("Sonuncu karakter:%d byte degerinde\n",ftell(dosya));
		fseek(dosya,5,0);//ba�tan itibaren 5byte
		fseek(dosya,5,1);//kald�g�m yerden itibaren 5byte
		fseek(dosya,-1,2);//sondan bir �nceki karaktere getir dedim.
		printf("%d byte degerinde.",ftell(dosya));//kac�nc� byte degerinde oldugunu soyluyor.
	}
	else{
		printf("Dosyalar acilirken hata meydana geldi.");
	}

	int kapandiMi;//kapandi kontrolu yapabillmek icin kullan�cam
	kapandiMi=fclose(dosya);//kapandiysa 0 donuyor, kapanmadiysa 0dan farkli bir deger donuyor.
	if(kapandiMi==0){
		printf("Dosya basarili bir sekilde kapatilmistir.\n");
	}	
	else{
		printf("Dosya kapatilirken bir hata meydana geldi");
	}
	kapandiMi=fclose(dosya2);//kapandiysa 0 donuyor, kapanmadiysa 0dan farkli bir deger donuyor.
	if(kapandiMi==0){
		printf("Yazilacak olan dosya basarili bir sekilde kapatilmistir.\n");
	}	
	else{
		printf("Dosya kapatilirken bir hata meydana geldi");
	}
	
	return 0;
}
*/






