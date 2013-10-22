#include<stdio.h>    //Temel giriş - çıkış elemanlarını kullanmamızı sağlayan kütüphane.
#include<conio.h>    //Bu kütüphaneyi getch(); kodu için ekledim.
#include<Windows.h>  //Ekrandaki yazıları silmemize yarayan system("cls"); ve Sleep(2000); kodları için ekledim.
#include<cstdlib>    // Ekran arkaplanı rengi yapmak için eklediğim kütüphane.


int main() 
{
	int tercih1, tercih2;                //oturum açma ve çıkış yapmak için oluşturduğum değerleri tanımlıyorum.
	int bakiye_19891=1000;               //bakiyemize eklediğim para değerini tanımlıyorum.
	int kullaniciadi=19891, parola=1903; //hesaba giriş yapmak için kullanılacak banka numarası ve parola değerini tanımlıyorum.
	int hesapno=19890;                   //para göndermek için kullanılacak hesap numarası değerini tanımlıyorum.
	int ekleme=0, cekme=0, gonderme=0;   //hesaba para ekleme, para çekme ve başka hesaba para gönderme değerlerini tanımlıyorum.

	system("color 47"); // ekran arkaplanını kırmızı, yazıyı beyaz yapar.
	while(1) // sonsuz döngüye girmesini sağlar, ilk menüye geri döner.
	
	{
	printf("                                 T.C MERTBANK \n\n"); //Banka adı.
	printf("                                 ------------\n\n");  
    printf("1) Oturum Acmak Icin\n");                             //oturum açma seçeneğimiz,
	printf("2) Cikis Yapmak Icin\n\n");                           //çıkış yapm seçeneğimiz,

	printf("1 veya 2'ye basiniz: ");                              //seçenekleri belirler.
	scanf("%d", &tercih1);


	
	if(tercih1!=1 && tercih1!=2) // 1 veya 2'den başka şey girilirse uyarı verir.
	{
		printf("Yanlis secim yaptiniz. Lutfen 1 veya 2'ye basiniz.\a\n"); //uyarı mesajı
	}
	    switch(tercih1) //Switch-case koşul kodu. Switch içine yazılan değere göre caseler belirlenir.
	{
	case 1: // oturum açma seçeneği seçilirse,
		system("CLS"); // ekran temizlenir.
		
		{
			printf("Banka numaranizi ve parolanizi giriniz\n\n"); 
			printf("BANKA NUMARASI: ");                           //Banka numarası istenir.
			scanf("%d", &kullaniciadi);                           
			printf("PAROLA: ");                                   //Parola istenir.
			scanf("%d", &parola);	
		
		if((kullaniciadi!=19891 && parola!=1903)) //eğer banka numarası ve parola yanlış ise
		{
			printf("Hatali giris yaptiniz, hesap numaranizi ve sifrenizi kontrol edip tekrar deneyiniz\a");
		}

		if((kullaniciadi==19891 && parola==1903)) //banka numarası ve parola doğru girilmişse
		{
			system("CLS");

			do //Do-while döngümüze başlıyoruz.
			{
				if(kullaniciadi=19891) //hesap numarası doğru girilmişse karşımıza menümüz gelir
         	printf("\t\t\t SAYIN RECEP EROL GIRIS YAPTINIZ\n");
		    printf("\n");
			printf("\t\t\t        BANKA ISLEMLERI\n\n");    
			
			printf("1) Bakiye Goruntuleme\n");         //
			printf("2) Para Ekleme\n");                //
			printf("3) Para Cekme\n");                 //menümüz
			printf("4) Baska Hesaba Para Gonderme\n"); //
			printf("5) Cikis\n\n");                    //
		
			printf("1,2,3,4 veya cikmak istiyorsaniz 5'e basiniz: ");
			scanf("%d", &tercih2);
		
			if(tercih2!=1 && tercih2!=2 && tercih2!=3 && tercih2!=4 && tercih2!=5) // 1,2,3,4,5'den başka tercih yapılırsa uyarı verir
			{
				printf("Hatali giris yaptiniz. Lutfen tekrar deneyiniz..\a\n");
			}

			switch(tercih2) //Switch-case koşul kodu. Switch içine yazılan değere göre caseler belirlenir.
			{
			
			case 1: // hesabın bakiyesini görüntülemek için, case==1 olma durumu
				if(kullaniciadi=19891)
					printf("Mevcut Bakiyeniz: %d TL.\n\n", bakiye_19891);
			
					break;


			case 2: // hesaba para eklemek için, case==2 olma durumu
				printf("Eklemek Istediginiz Para Miktari (TL): "); //miktar belirlenir.
				scanf("%d", &ekleme);
					if(kullaniciadi=19891)
					{
						bakiye_19891 = bakiye_19891 + ekleme; //bakiyeye eklenilen para kadar, para miktarını arttırır
						printf("\nHesabiniza %d TL ekleniyor.\n", ekleme);
						Sleep(2000); //bu kodu diğer seçeneğe geçerken parantez içinde belirttiğim süre kadar bekletmek için kullandım.
						printf("Isleminiz basariyla gerceklestirildi.\n");
						printf("Simdiki Bakiyeniz: %d TL.\n\n", bakiye_19891);
						break;
					}
		
					
			case 3: // hesaptan para çekmek için, case==3 olma durumu
				printf("Cekeceginiz Para Miktari (TL): "); //miktar belirlenir.
				scanf("%d", &cekme);
					//if else kullanımı:
				    if(kullaniciadi=19891 && cekme<=bakiye_19891)
					{
						bakiye_19891 -= cekme; //bakiyeden çekilen para kadar, para miktarını azaltır
						printf("\nHesabinizdan %d TL cekiliyor.\n", cekme);
						Sleep(2000);
				        printf("Isleminiz basariyla gerceklestirildi.\n");
						printf("Simdiki Bakiyeniz: %d TL.\n\n", bakiye_19891);
						break;
					}
									
				
					else if(cekme>bakiye_19891) // çekmek istenilen miktar mevcut bakiyeden büyükse uyarı mesajı verir
					{
								printf("\nHesabinizdan %d TL cekiliyor. .\n", cekme);
								Sleep(2000);
								printf("\nBakiyeniz yetersiz! \a\n");
								printf("Uzgunuz isleminiz gerceklestirilemedi..\n\n");
								break;
					}
			
		
			case 4: // başka hesaba para gondermek için. case ==4 olma durumu

				printf("Para gondermek istediginiz hesap numarasi:"); //yukarıda belirlediğim hesap numarası girilir.
				scanf("%d", &hesapno);
				printf("\nLutfen bekleyiniz. Hesap numarasi kontrol ediliyor\n");
				Sleep(2000);
				
				if(hesapno!=19890) // parayı göndermek için tanımlanmayan hesap numarası girilirse
			{
				printf("Hatali giris yaptiniz. Bu hesap numarasi bankamiza kayitli degildir..\a\n\n");
				break;
			}

                if(hesapno=19890) // parayı göndereceğiniz hesap numarası doğru ise

				printf("\nHesap Sahibi : Mert Karabulut");
			    printf("\n\n");

			   
				if(hesapno=19890);
			
				{
				printf("Gondereceginiz para miktari (TL):"); //miktar belirlenir.
				scanf("%d", &gonderme);
				if(kullaniciadi=19891 && gonderme<=bakiye_19891) //banka numarası doğru ve göndermek istenilen miktar, mevcut olan bakiyeden az ise,
				{
					bakiye_19891 -= gonderme; //bakiyeden gönderilen para kadar, para miktarını azaltır
					printf("\nHesabinizdan %d TL gonderiliyor. . .\n", gonderme);
					Sleep(2000);
					printf("Isleminiz basariyla gerceklestirildi.\n");
					printf("Simdiki Bakiyeniz: %d TL.\n\n", bakiye_19891);
						break;
				}}

			   if(gonderme>bakiye_19891) // mevcut bakiyeden fazla para göndermek isterseniz, işlem gerçekleşmez
					{
								printf("\nHesabinizdan %d TL gonderiliyor. .\n", gonderme);
								Sleep(2000);
								printf("\nBakiyeniz yetersiz! \a\n");
								printf("Uzgunuz isleminiz gerceklestirilemedi..\n\n");
								break;
					}

			case 5: // oturum kapatmak için, case==5 olma durumu
				printf("Oturumunuz Kapatiliyor.");
				system("CLS");
				break;
			}
			}
			while(tercih2!=5); //Döngümüzün geçerli olma durumu. Yani tercih2 değeri 5'e eşit olmadığı sürece devam eder.
			
			break;
		}
	}	
	}
	if(tercih1==2) // Menüden çıkmak istiyorsanız, 2'ye basılıp çıkış yapılır.
		return 0;
	}	

	getch(); // Derleyicilerde ayarlar farklı olduğundan, kapanabilme ihtimaline karşı eklenmiştir.
	return 0;
}








