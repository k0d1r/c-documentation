#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_KARAKTER_SAYISI 50

//ÝÞARETÇÝLER/POINTER (deðiþken adresini tutmak için tanýmlanan veri türüdür)
/* int main(int argc, char *argv[]) {
	
	int sayi=3;
	//direkt eriþim:deðiþken ismiyle eriþim
	//dolayli erisim:adresiyle eriþim saðlýyoruz.
	//int *ptr=&sayi;
	//int *ptr; //TANIMLANDI. Ýlk tanýmlama esnasýnda,* isareti pointer anlamýna gelir.
	//ptr=&sayi;//ATAMA YAPILDI. & iþareti adres anlamýna gelir.
	int *p1,p2;
	p1=&sayi;
	//p2=&sayi;
	//*p2=7;//p2 nin gösterdiði yerin degerini 7 ye cevirdim.
	//*p1=10;
	printf("Pointer kullanarak sayi degiskeninin adresi: %#X \n",p1);
	printf("Pointer kullanmadan sayi degiskenin adresi:%#X \n",&sayi);
	printf("Pointer kullanmadan sayi degiskeninin degeri:%d\n",sayi);
	printf("Pointer kullanarak sayi degiskeninin degeri:%d\n",*p1);//DEGERÝ ANLAMÝNA GELÝYOR.
	
	//p1 sayiyi isaret ediyor.Adresini gösteriyor. p1 sayinin adresini tutuyor.

return 0;	
}
*/

//DÝNAMÝK BELLEK YÖNETÝMÝ
/*int main(){
	
	int dizi[20];//10 tane eleman*4=40byte.
	printf("%d",sizeof(dizi));//kaç byte 
	//baslangicAdresi=malloc();//alan ayirmak icin
	//free();//alani geri bosaltmak icin.
	//realloc();//ayrýlan alanýn boyutunu arttýrmak için kullanýrýz
	//calloc();//ayýrdýðýmýz yerlerin hepsine 0 deðeri atýyoruz
	return 0;}
*/	
	
/* int main(){	
	int *ptr;//baslangic adresini tutabilmek icin.
	ptr=(int *)malloc(sizeof(int));//baslangic adresini döner.
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
	//ptr=ptr2;//adres eþitlemesi PTR PTR2NÝN GÖSTEDÝGÝ YERÝ GÖSTERÝR.
	printf("%#X\n",ptr);
	printf("%d\n",*ptr);
	printf("%#X\n",ptr2);
	printf("%d\n",*ptr2);

return 0;	
}*/

//STRUCT YAPISI/KENDÝ VERÝ TÝPLERÝMÝZÝ OLUÞTURMA
/*
struct Ogrenci{
	char isim[20];
	char soyisim[20];
	float ortalama;
};//veri tipi tanýmýný yaptým.

int main(){
	
	
	//int x;//deðiþken oluþturma.(VERÝ TÝPÝ: ýnt, DEÐÝÞKEN ÝSMÝ: x)
    struct Ogrenci ogr1={"Bilge","Ege",3.80};//deðiþken oluþturma( VERÝ TÝPÝ: STRUCT Ogrenci, DEÐÝÞKEN ÝSMÝ: ogr1)
	//struct Ogrenci ogr2;
	
	//strcpy(ogr2.isim,"Ebru");//char cinsinden olduðu için atamalar eþitlik ile yapýlamaz.
	//strcpy(ogr2.soyisim,"Tuncel");
	//ogr2.ortalama=3.75;//eþitlik operatörü ile atadýk.
	
	printf("Ogr1 Degiskeninin ismi:%s\n",ogr1.isim);//degerlere erisim saðladým  ( . operatörü ile eriþim saðladým)
	printf("Ogr1 Degiskeninin soyismi:%s\n",ogr1.soyisim);
	printf("Ogr1 Degiskeninin ortalamasi:%.2f\n",ogr1.ortalama);
	
	//printf("\nOgr2 Degiskeninin ismi:%s\n",ogr2.isim);//degerlere erisim saðladým  ( . operatörü ile eriþim saðladým)
	//printf("Ogr2 Degiskeninin soyismi:%s\n",ogr2.soyisim);
	//printf("Ogr2 Degiskeninin ortalamasi:%.2f\n",ogr2.ortalama);
	
	
	return 0;
}*/

//STRUCT YAPISININ typedef ve FONKSÝYONLARLA BÝRLÝKTE KULLANIM
/*struct OgrenciBilgileri{
	char isim[20];//20 byte kaplýyor
	char soyisim[30];//30 byte yer kaplýyor
	float ortalama;	//6 byte.
};
typedef struct OgrenciBilgileri Ogrenci;

//2. kullaným þekli
//typedef struct OgrenciBilgileri{
//	char isim[20];//20 byte kaplýyor
//	char soyisim[30];//30 byte yer kaplýyor
//	float ortalama;	//6 byte.
// } Ogrenci;

//3.kullaným þekli
//typedef struct{
//	char isim[20];//20 byte kaplýyor
//	char soyisim[30];//30 byte yer kaplýyor
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

//DOSYA ÝÞLEMLERÝ
/*Dosya Tipleri:
1.Metin Dosyalarý:ASCII tabloya göre,byte düzeyinde,geriye dönük ekleme yapýlamýyor, satýr düzeyinde.
2.Ýkili Dosyalarý:0-1 bit karþýlýðýna, geriye dönük ekleme yapabiliyor olmam.(read (r) için reaadbinary (rb), yani metin dosylarýnda yapýlan iþlemleri yapmak için sonlarýna binary kýsaltmasýný alýr)

*/

/* Ýsimize yarayacak fonksiyonlar:

1. feof(FILE POINTER)-->>dosyanýn sonuna gelip gelinmediðini söyler.Dosyanýn sonuna gelindiði zaman 0'dan farklý bir deger donuyor, aksi halde 0.
			
2. rewind(FILE POINTER)-->dosyanýn en baþýna dönmemizi saðlar.

3. fseek(FILE POINTER,KAÇ BYTE,NEREDEN ÝTÝBAREN)--->imleci dosyanýn belirli yerlerine götürmemizi saðlar.

		(0)SEEK_SET-->dosyanýn baþýndan itibaren 
		(1)SEEK_CUR->en son kalýnan yerden itibaren.
		(2)SEEK_END->sondan itibaren
		
		- > geriye doðru anlamýna.
		
4. ftell(FILE POINTER)-->kaçýncý byte deðerinde olduðumuzu söyler.

*/


//Dosya oluþturma/yazma (write) Dikkat! Dosya önceden varsa içeriðini siler
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
	
	int kapandiMi;//kapandi kontrolu yapabillmek icin kullanýcam
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
	
	int kapandiMi;//kapandi kontrolu yapabillmek icin kullanýcam
	kapandiMi=fclose(dosya);//kapandiysa 0 donuyor, kapanmadiysa 0dan farkli bir deger donuyor.
		if(kapandiMi==0){
			printf("Dosya basarili bir sekilde kapatilmistir.\n");
	}	
		else{
			printf("Dosya kapatilirken bir hata meydana geldi.");
	}
	
	return 0;
}*/

// a ise Dosyaya ekleme yapar, dosya varsa sonuna ekler,dosya yoksa dosya oluþturur



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
		//rewind(dosya);//dosyanin en basina donmemizi saðlýyor.
		printf("Sonuncu karakter:%d byte degerinde\n",ftell(dosya));
		fseek(dosya,5,0);//baþtan itibaren 5byte
		fseek(dosya,5,1);//kaldýgým yerden itibaren 5byte
		fseek(dosya,-1,2);//sondan bir önceki karaktere getir dedim.
		printf("%d byte degerinde.",ftell(dosya));//kacýncý byte degerinde oldugunu soyluyor.
	}
	else{
		printf("Dosyalar acilirken hata meydana geldi.");
	}

	int kapandiMi;//kapandi kontrolu yapabillmek icin kullanýcam
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






