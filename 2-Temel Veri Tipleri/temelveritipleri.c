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
	
	
	
	
	/*Float Sayýnýn Int'a Donusturulmesi: */
	//int sayiDonusum=(int)floatSayi;
	//printf("Float Sayinin Int'a Donusturulmus Hali=%d\n",sayiDonusum);
	
	
	/*Int Sayýnýn Float'a Donusturulmesi: */
	//float sayiDonusum2=(float)sayi;
	//printf("Int Sayinin Float'a Donusturulmus Hali:%f\n",sayiDonusum2);
	
	
	
	/*Long int bir verinin alabileceði deðer aralýðý*/
	//printf("Long maksimum deger:%d\n",LONG_MAX);
	//printf("Long minimum deger:%d\n",LONG_MIN);
	
	
	
	/*HEXADECIMAL VE OCTAL SAYILAR*/
	//int Int=1218;	
	//printf("10luk taban:%d\n",Int);
	//printf("16'lik taban:%X\n",Int);//4C2=16^0*2+16^1*12+16^2*4=1218 -DECIMAL DEGERI
	// printf("8'lik taban:%o\n",Int);//2302=8^0*2+8^1*0+8^2*3+8^3*2=1218 - DECIMAL DEGERI
	

	//16'LUK:
	//1 2 3 4 5 6 7 8 9 A B C D E F
	//8'LÝK:
	//1 2 3 4 5 6 7	
	
	
	
	/*BÝLÝMSEL GÖSTERÝM VE KISA HALLERÝ*/
	/*float sayiFloat=5.654321;
	printf("SayiFloat normal:%f\n",sayiFloat);
	printf("SayiFloat bilimsel:%e\n",sayiFloat);
	printf("SayiFloat bilimsel:%E\n",sayiFloat);
	printf("SayiFloat bilimsel:%g\n",sayiFloat);
*/
	
	
	
	
	

	//printf("Merhaba Dunya\n");//alt satira gecmek icin
	//printf("Merhaba \t Dunya\n");//tab kadar boþluk býrakýr
	//printf("Merhaba\bDunya\n");//backspace bir karakter geri siler
	//printf("'Merhaba Dunya'\n");//çift týrnak izin verilmiyor,tek týrnak kullanýlabilir
	//printf("\"Merhaba Dunya\"\n");// "" kullanmak istersek
	//printf("Merhaba \\ Dunya\n");// \ iþareti kullanmak için \\ yazmanýz gereklidir
	//printf("Merhaba 5%%7 Dunya\n");// mod ifadesi için %% kullanabiliriz

	
	
	
	//char karakter='a';
	
	/*printf("%c karakterinin hafizada kapladigi alan:%d byte.\n",
	karakter,sizeof(karakter));
	
	printf("%c karakterinin decimal karsiligi:%d,hexadecimal karsiligi:%X\n",
	karakter,karakter,karakter);*/
	
	
	
	
	
	
	//0 dönerse yanlýþ (false), 0 dýþýnda dönerse doðru (true)

	/*alfabetik mi deðil mi? */
	//printf("karakter icin sonucu:%d\n",isalpha(karakter));
	//printf("sayi icin sonucu:%d\n",isalpha('5'));
	
	/* rakam mý deðil mi?  */
	//printf("karakter icin sonucu:%d\n",isdigit(karakter));
	//printf("sayi icin sonucu:%d\n",isdigit('5'));
	
	//ya alfabetik olmasý gerekiyor ya da rakam, diðer karakterlerde sonuç yanlýþ döner
	//printf("karakter icin sonucu:%d\n",isalnum(karakter));
	//printf("sayi icin sonucu:%d\n",isalnum('5'));
	//printf("+ icin sonucu:%d\n",isalnum('+'));
	
	//küçük harf mi? büyük harf mi?
	//printf("H icin sonucu:%d\n",islower('H'));
	//printf("h icin sonucu:%d\n",islower('h'));
	//printf("H icin sonucu:%d\n",isupper('H'));
	//printf("h icin sonucu:%d\n",isupper('h'));	
	
	//küçük ve büyük harfe çevirme
	//printf("h icin sonucu:%c \n",toupper('h'));	
	//printf("H icin sonucu:%c \n",tolower('H'));
	
	
	//char karakterDizisi[]="1979.0123";//string ifade
	//int integerSayi;
	//float flooatSayi;
	
	
	//integerSayi=atoi(karakterDizisi);//string ifadeyi tam sayýyýya çevirir
	//flooatSayi=atof(karakterDizisi);//string ifadeyi floata çevirdi.
	
	//printf("Sayi:%d\n",integerSayi);
	//printf("Sayi:%f",flooatSayi);
	
	
	
	
	
	
	
	

	return 0;
}
