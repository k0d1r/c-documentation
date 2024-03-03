#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//KENDÝ FONKSÝYONLARIMIZI YAZALIM

//Ýkiye ayrýlýr: 1-Geriye deðer döndüren fonksiyonlar (int,char,double,float)
//2- Geriye deðer döndürmeyen (void) fonksiyonlar

/*donusTuru fonksiyonAdi(alacagiParametreler){
	yapilacakÝslemler; }
*/

/*
void selamlama(){
	printf("Selam\n");
	}
int main(){ 
	selamlama();


return 0;
}
*/



/*
void selamlama(char name[20]){
	printf("Selam %s\n",name);
	}
int main(){ 
	selamlama("Bilge");


return 0;
}
*/



int toplam(int sayi1,int sayi2){ 	
	return sayi1+sayi2;
}


int main(){ 
	int sonuc=toplam(7,7);
	printf(" %d\n",sonuc);
	//printf(" %d\n",toplam(7,7));
	
return 0;
}



/*
char upper(char c){
	return c-32; //a=97 A=65
}
int main(){ 
	printf(" %c\n",upper('a'));
	
return 0;
}	
*/



//FONKSÝYON ÝMZASI
/*
void selamlama(char []);
int toplam(int,int);
char upper(char);


int main(){ 
	selamlama("Bilge");


return 0;
}

void selamlama(char name[20]){
	printf("Selam %s\n",name);
	}
*/



/*
int toplam(int,int);

int main(){ 
	int sonuc=toplam(7,7);
	printf(" %d\n",sonuc);
		
return 0;
}
int toplam(int sayi1,int sayi2){ 	
	return sayi1+sayi2;
}
*/



//LOCAL VE GLOBAL KAVRAMI 

/*
int toplam(int,int);

int main(){ 
	printf(" %d\n",toplam(7,7));
	//printf(" %d\n",sonuc);
return 0;
}
int toplam(int sayi1,int sayi2){ 	
	int sonuc=sayi1+sayi2;
	return sonuc;
}
*/

/*
int toplam(int,int);

int main(){ 
	int a;
	printf(" %d\n",sonuc);
return 0;
}
int toplam(int sayi1,int sayi2){ 
	printf(" %d\n",a);	
	int sonuc=sayi1+sayi2;
	return sonuc;
}
*/


//if bloklarý da kendi bloðunun içindekini tanýr
/*
int toplam(int,int);

int main(){ 
	if(1){
		int a;
	}
	printf(" %d\n",a);
return 0;
}
int toplam(int sayi1,int sayi2){ 
	printf(" %d\n",a);	
	int sonuc=sayi1+sayi2;
	return sonuc;
}
*/
/*
//GLOBAL DEÐÝÞKEN TANIMLAMA
int toplam(int,int);

int a=7;
int main(){ 
	if(1){
		int a;
		printf("if blogunun icindeki a= %d\n",a);
	}
		
return 0;
}
int toplam(int sayi1,int sayi2){ 
	printf(" %d\n",a);	
	int sonuc=sayi1+sayi2;
	return sonuc;
}
*/


//FONKSÝYONLARDA GLOBAL DEÐÝÞKEN
/*
int toplam(int,int);

int a=7;
int main(){ 
	printf(" %d\n",toplam(7,7));
	
return 0;
}
int toplam(int sayi1,int sayi2){ 
		
	int sonuc=sayi1+sayi2;
	printf(" %d\n",a);
	return sonuc;
	
}

*/



//RECURSIVE FONKSÝYONLAR (Kendi kendini çaðýran fonksiyonlar)
/*
int yazdir(int);

int main(){ 
	yazdir(5);
	printf("Kod burdan devam eder!");
return 0;
}
int yazdir(int sayi){
	if(sayi==0){
	return 0;
    } 
	printf(" %d\n",sayi);
	yazdir(sayi-1);
}
*/



//RECURSIVE FONKSÝYONLAR ile FAKTÖRÝYEL HESAPLAMA
/*int faktoriyel(int);

int main(){ 
	printf("%d",faktoriyel(5));
	
	
return 0;
}
int faktoriyel(int sayi){
	if(sayi==0 || sayi==1){
	return 1;
    } 
	int sonuc=sayi*faktoriyel(sayi-1);
	return sonuc;
	
	//sonuc=5*faktoriyel(4)
	//sonuc=5*4*faktoriyel(3)
	//sonuc=5*4*3*faktoriyel(2)
	//sonuc=5*4*3*2*faktoriyel(1)
	//sonuc=5*4*3*2*1=120
}
*/


//Seçmeli Sýralama algoritmasý 
/*  	7 3 5 8 2 9 4 15 6-->sirasiz hali
	
		2 3 5 8 7 9 4 15 6->2 ile 7 yer deðiþtirildi.
		2 3 5 8 7 9 4 15 6->-
		2 3 4 8 7 9 5 15 6->4 ile 5 yer deðiþtirildi.
		2 3 4 5 7 9 8 15 6->5 ile 8 yer deðiþtþrildi.
		2 3 4 5 6 9 8 15 7->6 ile 7 yer deðiþtirildi.
		2 3 4 5 6 7 8 15 9->7ile 9 yer deðiþtirildi.
		2 3 4 5 6 7 8 15 9->-
		2 3 4 5 6 7 8 9 15 ->9 ile 15 yer deðiþtirildi.
		2 3 4 5 6 7 8 9 15 ->son hali.
*/ /*	
int main(){
int dizi[10],i,j,indexKucukSayi,enKucukSayi;
	srand(time(NULL));
	printf("Sirasiz dizi:");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\n");
	for(i=0;i<9;i++){
		enKucukSayi=dizi[9];//enKucukSayi=6
		indexKucukSayi=9;
		for(j=i;j<9;j++){
			if(dizi[j]<enKucukSayi){//dizi[0]<6 -->yani 7<6-->hayýr  j yi artýr-->j=1 3<6 evetse aþaðý blok j=2 5<3 J=3 8<3 J=4 2<3 evet aþaðý  
				enKucukSayi=dizi[j];//enKucukSayi=3 enKucukSayi=2
				indexKucukSayi=j;//indexKucukSayi=1 indexKucukSayi=4
			}
		}
		printf("%d sayisi ile %d sayisi yer degisitirildi.\n",enKucukSayi,dizi[i]);
		dizi[indexKucukSayi]=dizi[i]; //dizi[4]=dizi[0]----> dizi[4]=7
		dizi[i]=enKucukSayi;//dizi[0]=2
	}
	printf("Sirali dizi:");
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}
return 0;
}*/



//Seçmeli Sýralama algoritmasý ný kendi fonksiyonlarýmýz ile yapalým
/*
void diziyiYazdir(int [], int);
void diziyiSirala(int [], int);
void diziyiDoldur(int [], int);

int main(){
int dizi[10],i,j,indexKucukSayi,enKucukSayi;
	int elemanSayisi=10;
	diziyiDoldur(dizi,elemanSayisi);
	printf("Sirasiz dizi:");
	diziyiYazdir(dizi,elemanSayisi);
	printf("\n");
	diziyiSirala(dizi,elemanSayisi);
	printf("Sirali dizi:");
	diziyiYazdir(dizi,elemanSayisi);
}
	
void diziyiYazdir(int dizi[], int elemanSayisi){
	int i;
	for(i=0;i<elemanSayisi;i++){
		printf("%d ",dizi[i]);
	}	
}

void diziyiSirala(int dizi[], int elemanSayisi){
int i,j,indexKucukSayi,enKucukSayi;
		for(i=0;i<elemanSayisi-1;i++){
		enKucukSayi=dizi[elemanSayisi-1];
		indexKucukSayi=elemanSayisi-1;
		for(j=i;j<elemanSayisi-1;j++){
			if(dizi[j]<enKucukSayi){
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}
		}
		printf("%d sayisi ile %d sayisi yer degisitirildi.\n",enKucukSayi,dizi[i]);
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	}
}
void diziyiDoldur(int dizi[], int elemanSayisi){
	int i;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){
		dizi[i]=rand()%100;
	}
}
*/


	


//DÝZÝDEKÝ EN BÜYÜK - EN KÜÇÜK N. ELEMANININ SAYI DEÐERÝNÝ BULMA

/*
void diziyiYazdir(int [], int );
void diziyiSirala(int [], int );
void diziyiDoldur(int [], int);
int enBuyukNDeger(int [],int,int);
int enKucukNDeger(int [],int,int);
int main(int argc,char**argv){
	int elemanSayisi=10,kullaniciGirisi;
	int dizi[elemanSayisi];//eleman sayýsýnýa göre dizi oluþturma
	int buyukN,kucukN;//Dönen deðerleri tutmak için
	diziyiDoldur(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	printf("\nLutfen en buyuk ve en kucuk kacinci sayiyi istediginizi giriniz:");
	scanf("%d",&kullaniciGirisi);
	buyukN=enBuyukNDeger(dizi,elemanSayisi,kullaniciGirisi);
	kucukN=enKucukNDeger(dizi,elemanSayisi,kullaniciGirisi);
	printf("\nDizinin en buyuk %d. degeri : %d\n",kullaniciGirisi,buyukN);
	printf("Dizinin en kucuk %d. degeri : %d\n",kullaniciGirisi,kucukN);
	

	return 0;
}
void diziyiSirala(int dizi[], int elemanSayisi){
	int i,j,indexKucukSayi,enKucukSayi;
	for(i=0;i<elemanSayisi-1;i++){
		enKucukSayi=dizi[elemanSayisi-1];
		indexKucukSayi=elemanSayisi-1;
		for(j=i;j<elemanSayisi-1;j++){
			if(dizi[j]<enKucukSayi){
				enKucukSayi=dizi[j];
				indexKucukSayi=j;
			}
		}
		dizi[indexKucukSayi]=dizi[i];
		dizi[i]=enKucukSayi;
	}	
}
void diziyiDoldur(int dizi[],int elemanSayisi){
	int i;
	srand(time(NULL));
	for(i=0;i<elemanSayisi;i++){
		dizi[i]=rand()%100;
	}
}
void diziyiYazdir(int dizi[], int elemanSayisi){
	int i;
	for(i=0;i<elemanSayisi;i++){
		printf("%d ",dizi[i]);
	}	
}
int enBuyukNDeger(int dizi[],int elemanSayisi,int NDeger){
	diziyiSirala(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	return dizi[elemanSayisi-NDeger];
	
	
}
int enKucukNDeger(int dizi[],int elemanSayisi,int NDeger){
	diziyiSirala(dizi,elemanSayisi);
	return dizi[NDeger-1];
	
}
*/


//Ünlü sayýsý kaç adet bulma
/*void unluSayisiBelirleme(char []);

int main(int argc,char **argv){
	char kullaniciGirisi[20];
	puts("Lutfen unlu sayisi sayilacak kelime veya cumleyi giriniz:");
	gets(kullaniciGirisi);
	unluSayisiBelirleme(kullaniciGirisi);
	return 0;
		
}
void unluSayisiBelirleme(char kullaniciGirisi[]){
	int i=0,j;//unluHARF sayacým
	char unluHarfler[]={'a','e','i','u','o','\0'};
	int unluHarfSayilari[]={0,0,0,0,0};
	while(kullaniciGirisi[i]!='\0'){//oruç tutacaðým
		for(j=0;j<5;j++){
			if(kullaniciGirisi[i]==unluHarfler[j]){//o eþitmi a ya j yi artýr
				break;
			}
		}
		unluHarfSayilari[j]+=1;
		i++;//UNUTMAYIN.
	}
	for(i=0;i<5;i++){
		printf("%c karakteri %d adet gecmektedir.\n",unluHarfler[i],unluHarfSayilari[i]);
	}	
}*/


//FÝBONACCÝ SERÝSÝ ÜRETME
/*
int fibonacci(int);

int main(int argc,char **argv){
	
	int i,ustLimit;
	puts("Lutfen seri icin bir ust limit giriniz!");
	scanf("%d",&ustLimit);
	for(i=0;i<ustLimit;i++){
		printf("%d ",fibonacci(i));
	}
	
	return 0;
}
int fibonacci(int sayi){
	if(sayi==0 || sayi==1){
		return sayi;
	}
	else{
		return fibonacci(sayi-1)+fibonacci(sayi-2);//fibonacci(1)+fibonacci(0)=1
	   //fibonacci(2)+fibonacci(1)=	fibonacci(1)+fibonacci(0)+fibonacci(1)=2
	   //fibonacci(4)=fibonacci(3)+fibonacci(2)=fibonacci(2)+fibonacci(1)+fibonacci(1)+fibonacci(0)=2
											 //=fibonacci(1)+fibonacci(0)+fibonacci(1)+fibonacci(1)+fibonacci(0)
											 //=fibonacci(1)*3=3
	}
}

*/


/*
int ikiliArama(int [],int,int,int);

int main(int argc,char **argv){
	int dizi[]={1,3,5,8,10,15,20,30,40,52};
	int sonuc=ikiliArama(dizi,0,9,40);
	if(sonuc!=-1){
		printf("Aranan deger bulundu.");
	}
	else{
		printf("Aranan deger bulunamadi.");
	}
	return 0;
}
int ikiliArama(int dizi[],int sol_index,int sag_index,int arananDeger){
	
	if(sag_index>=sol_index){
		int ortanca_index=(sol_index+sag_index)/2;	
		if(dizi[ortanca_index]==arananDeger){
			return 1;
		}
		if(dizi[ortanca_index]>arananDeger){
			return ikiliArama(dizi,sol_index,ortanca_index-1,arananDeger);
		}
		return ikiliArama(dizi,ortanca_index+1,sag_index,arananDeger);
	
	}
	return -1;//bulunamadi 	
}
*/





















