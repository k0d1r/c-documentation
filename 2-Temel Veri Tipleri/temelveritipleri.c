#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>




int main(int argc,char **argv){
	
	/*
	printf("%d ",isalpha('A'));//1

	printf("%d ",isdigit('+'));//0

	printf("%d ",isdigit(5));//0

	printf("%d ",isalnum('c'));//1

	printf("%d ",isalnum('$'));//0

	printf("%d ",islower('c'));//1

	printf("%d ",isupper('s'));//0
	
	printf("\n");
	*/
	//int sayi=7;
	//short int shortSayi;
	//long int longSayi;
	//long long int longlongSayi;
	//float floatSayi=4.123456;
	//double doubleSayi=3.123456789;
	
	//printf("int'in kapladigi yer:%lu byte\n",sizeof(sayi));
	//printf("shortint'in kapladigi yer:%lu byte\n",sizeof(shortSayi));
	//printf("longint'in kapladigi yer:%lu byte\n",sizeof(longSayi));
	//printf("longlongint'in kapladigi yer:%lu byte\n",sizeof(longlongSayi));
	//printf("float'un kapladigi yer:%lu byte\n",sizeof(floatSayi));
	//printf("double'in kapladigi yer:%lu byte\n",sizeof(doubleSayi));
	
	
	//printf("Float deger:%f\n",floatSayi);
	//printf("Double deger:%13f",doubleSayi);
	
	
	
	
	/*Float Say�n�n Int'a Donusturulmesi: */
	//int sayiDonusum=(int)floatSayi;
	//printf("Float Sayinin Int'a Donusturulmus Hali=%d\n",sayiDonusum);
	
	
	/*Int Say�n�n Float'a Donusturulmesi: */
	//float sayiDonusum2=(float)sayi;
	//printf("Int Sayinin Float'a Donusturulmus Hali:%f\n",sayiDonusum2);
	
	
	
	/*Long int bir verinin alabilece�i de�er aral���*/
	//printf("Long maksimum deger:%d\n",LONG_MAX);
	//printf("Long minimum deger:%d\n",LONG_MIN);
	
	
	
	/*HEXADECIMAL VE OCTAL SAYILAR*/
	//int Int=1218;	
	//printf("10luk taban:%d\n",Int);
	//printf("16'lik taban:%X\n",Int);//4C2=16^0*2+16^1*12+16^2*4=1218 -DECIMAL DEGERI
	// printf("8'lik taban:%o\n",Int);//2302=8^0*2+8^1*0+8^2*3+8^3*2=1218 - DECIMAL DEGERI
	

	//16'LUK:
	//1 2 3 4 5 6 7 8 9 A B C D E F
	//8'L�K:
	//1 2 3 4 5 6 7	
	
	
	
	/*B�L�MSEL G�STER�M VE KISA HALLER�*/
	/*float sayiFloat=5.654321;
	printf("SayiFloat normal:%f\n",sayiFloat);
	printf("SayiFloat bilimsel:%e\n",sayiFloat);
	printf("SayiFloat bilimsel:%E\n",sayiFloat);
	printf("SayiFloat bilimsel:%g\n",sayiFloat);
*/
	
	
	
	
	

	//printf("Merhaba Dunya\n");//alt satira gecmek icin
	//printf("Merhaba \t Dunya\n");//tab kadar bo�luk b�rak�r
	//printf("Merhaba\bDunya\n");//backspace bir karakter geri siler
	//printf("'Merhaba Dunya'\n");//�ift t�rnak izin verilmiyor,tek t�rnak kullan�labilir
	//printf("\"Merhaba Dunya\"\n");// "" kullanmak istersek
	//printf("Merhaba \\ Dunya\n");// \ i�areti kullanmak i�in \\ yazman�z gereklidir
	//printf("Merhaba 5%%7 Dunya\n");// mod ifadesi i�in %% kullanabiliriz

	
	
	
	//char karakter='a';
	
	/*printf("%c karakterinin hafizada kapladigi alan:%d byte.\n",
	karakter,sizeof(karakter));
	
	printf("%c karakterinin decimal karsiligi:%d,hexadecimal karsiligi:%X\n",
	karakter,karakter,karakter);*/
	
	
	
	
	
	
	//0 d�nerse yanl�� (false), 0 d���nda d�nerse do�ru (true)

	/*alfabetik mi de�il mi? */
	//printf("karakter icin sonucu:%d\n",isalpha(karakter));
	//printf("sayi icin sonucu:%d\n",isalpha('5'));
	
	/* rakam m� de�il mi?  */
	//printf("karakter icin sonucu:%d\n",isdigit(karakter));
	//printf("sayi icin sonucu:%d\n",isdigit('5'));
	
	//ya alfabetik olmas� gerekiyor ya da rakam, di�er karakterlerde sonu� yanl�� d�ner
	//printf("karakter icin sonucu:%d\n",isalnum(karakter));
	//printf("sayi icin sonucu:%d\n",isalnum('5'));
	//printf("+ icin sonucu:%d\n",isalnum('+'));
	
	//k���k harf mi? b�y�k harf mi?
	//printf("H icin sonucu:%d\n",islower('H'));
	//printf("h icin sonucu:%d\n",islower('h'));
	//printf("H icin sonucu:%d\n",isupper('H'));
	//printf("h icin sonucu:%d\n",isupper('h'));	
	
	//k���k ve b�y�k harfe �evirme
	//printf("h icin sonucu:%c \n",toupper('h'));	
	//printf("H icin sonucu:%c \n",tolower('H'));
	
	
	//char karakterDizisi[]="1979.0123";//string ifade
	//int integerSayi;
	//float flooatSayi;
	
	
	//integerSayi=atoi(karakterDizisi);//string ifadeyi tam say�y�ya �evirir
	//flooatSayi=atof(karakterDizisi);//string ifadeyi floata �evirdi.
	
	//printf("Sayi:%d\n",integerSayi);
	//printf("Sayi:%f",flooatSayi);
	
	
	
	
	
	
	
	

	return 0;
}
