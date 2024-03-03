#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(int argc,char **argv){
	
//WHILE DONGUSU
	 //while(kosul){	 }
	 
 /*  
	int i=0;
	while(i<0){
		printf("i sayisi:%d\n",i); 
		
	}	
*/	


	
	//DO-WHILE DONGUSU
/*	
 	int i=0;
	do{
		printf("i sayisi:%d\n",i);
		i++;
	}while(i<10);
*/	
	
	
	//BREAK

/*	
	int i=0;
	while(i<10){
		if(i==5){
			break;//break döngüyü sonlandýrýr
		}
		printf("i sayisi:%d\n",i);
		i++;
	}	
*/

	//CONTINUE ile tek sayýlarý yazdýralým
/*
	
	int i=0;
	while(1){
		i++;
		if(i==10){
			break;
		}
		if(i%2==0){
			continue;//alt satýrlarý atlar,döngü baþa döner 
		}
		printf("i sayisi:%d\n",i);
	}	
	
*/	
	
	
	
	
	//BASAMAK SAYISI BULMACA
	/* 5489 	BASAMAKSAYISI=0    
	   548		BASAMAKSAYISI=1
	   54		BASAMAKSAYISI=2
	   5		BASAMAKSAYISI=3
	   0		BASAMAKSAYISI=4
	*/
	
/*
	int sayi,gecici,basamak=0;
	//Ýþlemleri sayýyý bozmamak için geçici sayý üstünden yapýyoruz
	
	printf("Lutfen bir sayi degeri giriniz:");
	scanf("%d",&sayi);
	gecici=sayi;
	while(gecici!=0){
		gecici/=10;
		basamak++;
	}
	printf("\n%d sayisi %d basamaklidir.\n",sayi,basamak);
*/	

	
	
	//SAYININ TERSÝNÝ BULMAK ÝÇÝN YUKARDAKÝ KODA NE EKLERÝZ?
	
/*	
	int sayi,gecici,basamak=0;
	printf("Lutfen bir sayi degeri giriniz:");
	scanf("%d",&sayi);
	gecici=sayi;//5489
	printf("SayininTersi=");
	while(gecici!=0){
		printf("%d",gecici%10);//9 8 4 5
		gecici/=10;//548 54 5 0
		basamak++;//1 2 3 4
		
	}
	printf("\n%d sayisi %d basamaklidir.\n",sayi,basamak);
*/	 
	



	//ASAL SAYI BULMACASI
/*	 
	int sayi,i,bolundumu=0 ;//bolunurse 1 olacak
	printf("Lutfen sorgulamak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			bolundumu=1;
			break;
		}
	}
	
	if(bolundumu==0){
		printf("%d sayisi asal bir sayidir.",sayi);
	}
	else{
		printf("%d sayisi asal bir sayi degildir",sayi);
	}
*/	
	
	
	
/*	
	//EBOB-EKOK HESAPLAMACA
	
	int sayi1,sayi2,EBOB,EKOK;
	int sayac,buyuk,kucuk;
	
	 
	
	printf("Lutfen EBOB EKOK degerleri hesaplanacak iki sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(sayi1>sayi2){
		buyuk=sayi1;
		kucuk=sayi2;
	}
	else{
		buyuk=sayi2;
		kucuk=sayi1;
	}
	// 9 ile 18 EBOB=9 EKOK=18 olur 
	//EKOK
	sayac=buyuk;
	while(1){
		if(sayac%buyuk==0 && sayac%kucuk==0){
		//18/18 ve 18/9 EKOK=18
		//12/12 ve 12/9 EKOK=36 sayaç 36 ya kadar artarak dener
		
			EKOK=sayac;
			break;
		}
		sayac++;		
	}
	
	
	//EBOB
	sayac=kucuk;
	while(1){
		if(buyuk%sayac==0 && kucuk%sayac==0){
			//18/9 ve 9/9 EBOB=9 
			//12/9 ve 9/9 EBOB=3  sayaç 3 e kadar azalarak dener
			EBOB=sayac;
			break;
		}
		sayac--;
	}
	printf("%d ve %d sayilarinin EBOB degeri:%d, EKOK degeri:%d",sayi1,sayi2,EBOB,EKOK);
	
*/	

	
	
	
	//CÜMLEDE BOÞLUK BULMACA OYUNUMUZ
	
/*	
	char karakter;
	int bosluk=0;
	printf("Lutfen cumlenizi giriniz.");
	do{
		karakter=getchar();
		if(karakter==' '){
			bosluk++;
		}	
	}while(karakter!='\n'); //Enter girilene kadar'ý \n ile kontrol ederiz
	
	
	printf("Girdiginiz cumlede %d adet bosluk karakteri vardir.\n",bosluk);
*/	
	

	
	
	
	
	//SAYIYI-TERSE ÇEVÝRME
/*
	int sayi,geciciSayi,sayininTersi=0,kalan;
	
	printf("Lutfen tersi alinacak sayiyi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	while(geciciSayi!=0){
		kalan=geciciSayi%10;
		sayininTersi=sayininTersi*10+kalan;
		geciciSayi/=10;
	
	}	
	printf("%d sayinin tersi:%d",sayi,sayininTersi);
*/	

/*	geciciSayi=5489%10
	kalan=9
	sayininTersi=0*10+9=9
	geciciSayi=5489/10
	
	geciciSayi=548
	kalan=8
	sayininTersi=9*10+8=98
	geciciSayi=548/10=54
	
	geciciSayi=54
	kalan=4
	sayininTersi=98*10+4=984
	
	geciciSayi=5
	kalan=5
	sayininTersi=984*10+5=9845
*/	
	//BURADAYIZ
	//BIT-DUZEYINE CEVIRME(0-1 DUZEYINE)

/*
	int sayi,geciciSayi,i=0;
	char bitArr[32];
	
	printf("Lutfen bit duzeyine cevrilecek sayiyi giriniz:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	
	while(geciciSayi!=0){
		if(geciciSayi%2==0){
			bitArr[i]='0';
		}
		else{
			bitArr[i]='1';
		}
		i++;
		geciciSayi/=2;
	}

	printf("%d sayisinin bit karsiligi:",sayi);
	while(i>=0){
		printf("%c",bitArr[i]);
		i--;
	}

*/

/*  

16 sayýsýnýn bit gösterimi 10000
16 sayýsýný bit düzeyine dönüþtürmek için sayýyý önce
 2 ye göre modunu alýyoruz sonra 2 ye bölüyoruz
16%2=0 
8%2=0
4%2=0
2%2=0
1%2=1
0
*/		
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	
