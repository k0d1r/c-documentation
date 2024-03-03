#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>



/*	DÝZÝLER:
	Diziler ayný veri çeþidinden olan deðiþkenlerin sýralý þekilde
	ayný isim altýnda 	tanýmlanmasýdýr.*/
	
/*	TEK BOYUTLU DÝZÝLER



	0000 baþlangýç adresi(1.eleman)(0.indeks)
	0004				 (2.eleman)(1.indeks)
	0008				 (3.eleman)(2.indeks)
	N.eleman->N-1.idekstir
*/


int main(){


/*
	//Soru: 10 elemanlýk bir dizi hafýzada kaç byte yer kaplar?
	//Cevap:
	int dizi[elemanSayýsý];
	printf("Dizinin kapladigi alan:%d byte\n",sizeof(dizi));
	
*/	







/*
	int dizi[10]={1,2,3,4,5};
	printf("Dizinin 1.elemaninin adresi:%#X \n" ,&dizi[0]);
	printf("Dizinin 2.elemaninin adresi:%#X \n" ,&dizi[1]);
	printf("Dizinin 3.elemaninin adresi:%#X \n" ,&dizi[2]);
	printf("Dizinin 4.elemaninin adresi:%#X \n" ,&dizi[3]);
	printf("Dizinin 5.elemaninin adresi:%#X \n" ,&dizi[4]);
	printf("Dizinin 6.elemaninin adresi:%#X \n" ,&dizi[5]);
*/






/*
	
	int dizi[10]={1,2,3,4,5};
	printf("Dizinin kapladigi alan:%d byte\n",sizeof(dizi));	
	printf("Dizinin 1.elemaninin adresi:%#X ve degeri:%d\n",&dizi[0],dizi[0]);
	printf("Dizinin 2.elemaninin adresi:%#X ve degeri:%d\n",&dizi[1],dizi[1]);
	printf("Dizinin 3.elemaninin adresi:%#X ve degeri:%d\n",&dizi[2],dizi[2]);
	printf("Dizinin 4.elemaninin adresi:%#X ve degeri:%d\n",&dizi[3],dizi[3]);
	printf("Dizinin 5.elemaninin adresi:%#X ve degeri:%d\n",&dizi[4],dizi[4]);
	printf("Dizinin 6.elemaninin adresi:%#X ve degeri:%d\n",&dizi[5],dizi[5]);
*/	




	

/*	
	int dizi[10];
	
	dizi[0]=1;
	dizi[1]=2;
	dizi[2]=3;
	dizi[3]=4;
	dizi[4]=5;

	printf("Dizinin 1.elemaninin adresi:%#X ve degeri:%d\n",&dizi[0],dizi[0]);
	printf("Dizinin 2.elemaninin adresi:%#X ve degeri:%d\n",&dizi[1],dizi[1]);
	printf("Dizinin 3.elemaninin adresi:%#X ve degeri:%d\n",&dizi[2],dizi[2]);
	printf("Dizinin 4.elemaninin adresi:%#X ve degeri:%d\n",&dizi[3],dizi[3]);
	printf("Dizinin 5.elemaninin adresi:%#X ve degeri:%d\n",&dizi[4],dizi[4]);

*/
	
	
	
	



/*
	int dizi[10];	
	int i;
	for(i=0;i<10;i++){
		dizi[i]=pow(i,2);
		printf("%d ",dizi[i]);
	//printf("%d. elamanin karesi: %d\n", i+1, dizi[i]);
	}

*/







//DÝZÝLER ÝLE ÝÞLEMLER YAPIYORUZ..

//DÝZÝ ELEMANLARINA RANDOM DEÐERLER ATAMA
/* 	int dizi[10];
	srand(time(NULL));
	
	int toplam=0,ortalama,i;
	
	/*
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
*/	

//DÝZÝLER ÝLE TOPLAMA DEVAM
/*	
	//printf("\n");
	for(i=0;i<10;i++){
	toplam+=dizi[i];
	printf(" %d.eleman eklendi ve yeni toplam:%d\n",i+1,toplam);
	}
*/
	
	//DÝZÝNÝN ORTALAMASI DEVAM
/*
	ortalama=toplam/10;
	printf("Dizinin ortalamasi:%d\n",ortalama);
	
*/


  //DÝZÝNÝN EN BÜYÜK EN KÜÇÜK SAYISINI BULMA
  
   
/* 
	int dizi[10];
	int toplam=0,ortalama,i,enBuyuk,enKucuk;
	//srand(time(NULL));
	//int sayiGirisi;
	//printf("Lutfen bir sayi girisi yapiniz:");
	//scanf("%d", &sayiGirisi);
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	enBuyuk=dizi[0];//enBuyuk=41
	enKucuk=dizi[0];//enKucuk=41
	printf("\n");
	for(i=0;i<10;i++){      //41 67 34 0 69 24 78 58 62 64
		if(dizi[i]>enBuyuk){//67>41 enBuyuk=67 34>67 0>67 69>67 enBuyuk=69 24>69 
							//78>69 enBuyuk=78 58>78 62>78 64>78
			enBuyuk=dizi[i];
		}
		if(dizi[i]<enKucuk){//67<41 34<41 enKucuk=34 0<34 enKucuk=0 69<0 24<0 
							//78<0 58<0 62<0 64<0
			enKucuk=dizi[i];
		}	
		toplam+=dizi[i];
		printf(" %d.eleman eklendi ve yeni toplam:%d\n",i+1,toplam);
	}
	ortalama=toplam/10;
	printf("Dizinin ortalamasi:%d\n",ortalama);
	printf("Dizinin en buyuk elemani:%d\n",enBuyuk);
	printf("Dizinin en kucuk elemani:%d\n",enKucuk);
*/	


	//DÝZÝ ELEMANLARININ TEK TEK ORTALAMA ÝLE KARÞILAÞTIRILMASI DEVAMMM
/*	
	for(i=0;i<10;i++){
		if(dizi[i]>=ortalama){
			printf("%d  sayisi, dizinin ortalamasindan buyuktur\n",dizi[i]);
		}
		else{
			printf("%d  sayisi, dizinin ortalamasindan kucuktur\n",dizi[i]);
		}	
	} 
*/
	//KULLANICININ GÝRDÝÐÝ SAYININ RANDOM ÜRETÝLEN DÝZÝ ELEMANLARINDAN
	//HANGÝLERÝNÝN KATI OLDUÐUNU BULMA
/*	
	for(i=0;i<10;i++){			
		if(dizi[i]%sayiGirisi==0){
			printf("%d sayisi kullanicinin girdigi sayinin katidir.\n",dizi[i]);
		}
	}
*/	
	
	
	
	
	
	
	
	//ÝKÝ BOYUTLU DÝZÝLER
		
	/*  0 1 2 3 ... .....9
     	10 11 12 13 ... 19
     	20 21 22 23 ... 29
	.
	.
	.
  		90 91 92 93 ... 99*/ //10. SATIR 1. SÜTUN, 10. SATIR 2.SÜTUN.... 
  		
  	//int ikiBoyutluDizi[SATIR/eleman][SÜTUN];
/*	int ikiBoyutluDizi[10][10];
	printf("Hafizada kapladigi alan:%d byte\n",sizeof(ikiBoyutluDizi));
*/	

	
/*	
	int ikiBoyutluDizi[10][10]={{0,1,2},{10,11,12},{20,21,22}};
	int i,j;
	for(i=0;i<10;i++){//satýrlar
		for(j=0;j<10;j++){
			printf("%d ",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
*/	
	
/*  	A00 A01 A02 A03 ... A09
     	A10 A11 A12 A13 ... A19
     	A20 A21 A22 A23 ... A29
	.
	.
	.
  		A90 A91 A92 A93 ... A99*/

  		
	//ÇARPIM TABLOSU
/*	
	int ikiBoyutluDizi[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			ikiBoyutluDizi[i][j]=i*j;
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
*/	

		
	
	/*  00 01 02 03 ... 09
     	10 11 12 13 ... 19
     	20 21 22 23 ... 29
	.
	.
	.
  		90 91 92 93 ... 99*/
	//çapraz 1 ler - ilk satýr 1 ler
/*	int ikiBoyutluDizi[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i==j){
				ikiBoyutluDizi[i][j]=1;
			}
			else{
				ikiBoyutluDizi[i][j]=0;
			}
		}
	}
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
			printf("%d ",ikiBoyutluDizi[i][j]);
		}
		printf("\n");
	}
*/

	
	
//ÜÇ BOYUTLU DÝZÝ
	
/*	int ucBoyutluDizi[10][10][10];
	printf("Kapladigi alan:%d",sizeof(ucBoyutluDizi));
		
*/		




	//MATRÝSLERDE TOPLAMA YAPMA
/*	
	//MATRÝSÝN KENDÝ ÝÇÝNDEKÝ ELEMANLARI TOPLAMA
	int i,j,Matris[5][5],satirToplami,sutunToplami;
	srand(time(NULL));
	printf("Matrisimiz:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			Matris[i][j]=rand()%10;
			printf("%d\t",Matris[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		satirToplami=0;
		sutunToplami=0;
		for(j=0;j<5;j++){
				//int Dizi[SATIR][SÜTUN];
			satirToplami+=Matris[i][j];//satýr sabit sütun deðiþecek
			sutunToplami+=Matris[j][i];//sütun sabit satýr deðiþecek
	}
	printf("%d. satirin  toplami:%d\n",i+1,satirToplami);
	printf("%d. sutunun  toplami:%d\n\n",i+1,sutunToplami);
}
*/	
	/*  00 01 02 03 ... 09
     	10 11 12 13 ... 19
     	20 21 22 23 ... 29
	.
	.
	.
  		90 91 92 93 ... 99*/
	
	
	//ÝKÝ MATRÝSÝN ELEMANLARINI TOPLAMA
/*	int ilkMatris[5][5],ikinciMatris[5][5],toplamMatris[5][5],i,j;
	srand(time(NULL));
	printf("Ilk Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
		}
		printf("\n");
	}
	printf("Ikinci Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ikinciMatris[i][j]=rand()%10;
			printf("%d\t",ikinciMatris[i][j]);
		}
		printf("\n");
	}
*/	
/*
	printf("Toplam Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			toplamMatris[i][j]=ilkMatris[i][j]+ikinciMatris[i][j];
			printf("%d\t",toplamMatris[i][j]);
		}
		printf("\n");
	}

*/	
	
	
	
	
	
	
	
/*	//TRANSPOZ ALMA KODU (MATRÝSÝ YAN ÇEVÝRME)
	int ilkMatris[5][5],transpozMatris[5][5],i,j;
	srand(time(NULL));
	printf("Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			ilkMatris[i][j]=rand()%10;
			printf("%d\t",ilkMatris[i][j]);
		}
		printf("\n");
	}
*/
/*
	printf("Transpoz Matris:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			transpozMatris[i][j]=ilkMatris[j][i];
			printf("%d\t",transpozMatris[i][j]);
		}
		printf("\n");
	}
*/	
	
	
	
	//DÝZÝDE ARAMA YAPMA (DOÐRUSAL ARAMA)

/*
int dizi[10],i,arananDeger,bulunmaDurumu=0;
	srand(time(NULL));
	printf("Dizi:");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nLutfen aranacak degeri giriniz:");
	scanf("%d",&arananDeger);
	for(i=0;i<10;i++){
		if(dizi[i]==arananDeger){
			bulunmaDurumu=1;
			break;
		}
	}
	if(bulunmaDurumu){
		printf("Aradiginiz deger dizide bulunuyor.");
	}
	else{
		printf("Aradiginiz deger dizide bulunmuyor");
	}
*/	
	
	
	
	
	//DÝZÝYÝ SIRAYA SOKMA - 1 (ARAYA SOKMA ALGORÝTMASI)
		
/*	7 3 5 8 2 	
	3 7 5 8 2 
	3 5 7 8 2  	
	3 5 7 8 2	
	2 3 5 7 8	
*/	
/*	7 3 5 8 2 	eleman =3
	3 7 5 8 2 	eleman =5
	3 5 7 8 2  	eleman =8
	3 5 7 8 2	eleman =2
	2 3 5 7 8	
*/

/*	int dizi[10],i,j,eleman;
	srand(time(NULL));
	printf("Sirasiz Dizi:\n");
	for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	printf("\nSirali dizi:\n");
	for(i=1;i<10;i++){
		eleman=dizi[i];//dizi[1]----->eleman=88  dizi[2]----->eleman=81
		for(j=i-1;j>=0 && eleman<=dizi[j];j--) //88<=69  81<=88  81<=69
//for(kaydýracaðým ilk eleman dizinin i-1. elemaný;
// 1.kaydýrma þartý:J>=0 daha fazla sola gitmemek için
// 2.kaydýrma þartý:dizi elemanýnýn yanýndaki elemandan daha büyük olmasý
		{
			dizi[j+1]=dizi[j];//dizi[2]=dizi[1] ---> dizi[2]=88
							  
		}
		dizi[j+1]=eleman; //  dizi[1]=88   dizi[1]=81
	}
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}
*/	
/*d[0] d[1]..................d[9]
	69 88 81 63 27 35 15 81 23 37	eleman=88
	69 88 88 63 27 35 15 81 23 37	eleman=81
	69 81 88 63 27 35 15 81 23 37	
	69 81 88 63 27 35 15 81 23 37	eleman=63
	63 69 81 88 27 35 15 81 23 37	eleman=27
	27 63 69 81 88 35 15 81 23 37	eleman=35
	27 35 63 69 81 88 15 81 23 37	eleman=15
    15 27 35 63 69 81 88 81 23 37	eleman=81 
	15 27 35 63 69 81 81 88 23 37	eleman=23
	15 23 27 35 63 69 81 81 88 37	eleman=37
	15 23 27 35 37 63 69 81 81 88 
*/	                            
                               
	                              
	                              
	//DÝZÝYÝ SIRAYA SOKMA - 2(BUBLE - KABARCIK ALGORÝTMASI)
	
	/*7 3 5 8 2 6        3 5 7 2 6 8		3 5 2 6 7 8		2 3 5 6 7 8
	  3 7 5 8 2 6		 3 5 7 2 6 8		3 2 5 6 7 8 
	  3 5 7 8 2 6		 3 5 2 7 6 8
	  3 5 7 2 8 6		 3 5 2 6 7 8
	  3 5 7 2 6 8
 	*/
 	/*
	int dizi[10],i,j;          
	srand(time(NULL));
	printf("Sirasiz Dizi:\n");
		for(i=0;i<10;i++){
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(dizi[j]>dizi[j+1]){		//dizi[0]>dizi[1] 7>3 
				int gecici=dizi[j];		//gecici=7
				dizi[j]=dizi[j+1];		//dizi[0]=3
				dizi[j+1]=gecici;		// dizi[1]=7
			}
		}
	}
	printf("\nSirali Dizi:\n");
	for(i=0;i<10;i++){
		printf("%d ",dizi[i]);
	}
	
*/


	return 0;
}















