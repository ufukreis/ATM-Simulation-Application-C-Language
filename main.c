#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* ATM kart no: 10
	ATM banka sifresi: 3461
	*/
	printf("ATM SISTEMI-UFUK REIS\n\n\n");
	char m;
	char cevap;
	char musteriadi[4]="Ufuk";
	int sifre=3461,sifr,kartno=10,a,bakiye=3200,yat,cek,gonder,borc=900,odeme,gonderno,fat,p;
	for(;;) // þifre giriþi için sonsuz döngü.
	{ 
	printf("Lutfen kartinizi takiniz veya kart numaranizi giriniz:");
	scanf("%d",&kartno);
	if(kartno!=10){
		printf("yanlis numara girisi veya yanlis kart girisi\n");
	
		
		continue;
		
	}
	else{
		printf("\n Numaraniz Dogrulanmaktadir...");
		    Sleep(2000);
		    system("CLS");
		    printf("\n Numaraniz Dogrudur.\n\n");
		    Sleep(2000);
		system("CLS");
		
	}
	
	
	    printf("Lutfen kart sifrenizi giriniz: ");
	    scanf("%d",&sifr);
	    fflush(stdin); //veri girisi sonrasý alan bosaltma.
	    if(sifr!=sifre) //sifre  kontrolu.
	    {	 
		    printf("\n Yanlis Sifre Girisi.\n");
		    Sleep(2000);
	            printf(" Lutfen Tekrar Deneyiniz.\n");
	            Sleep(2000);
		    system("CLS");
		    continue; //donguye tekrar donus.
            }

	    else //sifre esit ise.
	    {   
		    printf("\n Kullanici Sifreniz Dogrulanmaktadir...");
		    Sleep(2000);
		    system("CLS");
		    printf("\n Kullanici Sifreniz Dogrudur.\n\n");
		    
		    system("CLS");
		    printf("\nHosgeldiniz, Sayin ");
		    printf("%c\n",puts(musteriadi)); //musterinin taktigi kartýn kayýtlý oldugu isim.
		    	    
		}
		
		
		do
		    { 
			Menu: //goto fonksiyonu için kullandým.
			printf(" BANKA MENUSU\n");
			printf(" ************\n\n");
			printf(" 1-Hesap Bakiyesi\n");
			printf(" 2-Hesaba Para Yatirma\n");
			printf(" 3-Hesaptan Para Cekme\n");
			printf(" 4-Para Gonderme\n");
			printf(" 5-Kredi Karti Borcu Odeme\n");
			printf(" 6-Cikis\n");
			printf("\n Luften Rakam Girerek Yapacaginiz Islemi Seciniz: ");
			scanf("%d",&a);
			fflush(stdin);
			printf("\n");
			switch(a)
			{  					
				case 1: 
					system("CLS");
					printf("\n Hesap Bakiyesi");
					printf("\n *****************************");
					printf("\n\n Hesabinizda Bulunan Bakiye: %d TL \n",bakiye);
					printf("\n\n");
					break;

				case 2: 
					system("CLS");
					printf("\n Hesaba Para Yatirma");
					printf("\n *******************");
					printf("\n\n Lutfen Hesabiniza Yatirmak Istediginiz Tutari Giriniz:");
					scanf("%d",&yat);
					bakiye=bakiye+yat;
					
					printf("Isleminiz Gerceklestiriliyor...\n");
					Sleep(2000);
					printf("Makbuz Ister Misiniz?(Y/N)\n");
					m=getch(); 
					if(m=='Y'||m=='y'){
						printf("EFOR AVM ATM AKSARAY\n\n ISLEM: PARA YATIRMA\n HESAP NUMARASI:10\n KOMISYON TUTARI:0\n TUTAR:%d\n",yat);
						printf(" Hesabiniza Yatirdiginiz Tutar: %d TL \n",yat);
					printf(" Guncel Bakiye: %d TL \n",bakiye);
					}
					else{
							printf(" Hesabiniza Yatirdiginiz Tutar: %d TL \n",yat);
					printf(" Guncel Bakiye: %d TL \n",bakiye);
						
					}
					
					printf("\n\n");
					break;

				case 3: 
					while(1)
					{	
						system("CLS");
						printf("\n Hesaptan Para Cekme");
						printf("\n *******************");
						printf("\n\n Lutfen Hesabinizdan Cekmek Istediginiz Tutari Giriniz:");
						scanf("%d",&cek);
						printf("Isleminiz Gerceklestiriliyor. Lutfen Bekleyiniz.\n");
						Sleep(2000);
						printf("Once Kartinizi Sonra Paranizi Aliniz.\n");
						Sleep(2000);
						if(cek<=bakiye)
						{ 
							bakiye=bakiye-cek;
							printf(" Hesabinizdan Cekilen Tutar: %d TL \n",cek);
							printf(" Hesabinizda Kalan Tutar: %d TL \n",bakiye);
							break;
						}

						else
						{ 
							printf("\n Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Cekilecek Tutari Tekrar Giriniz.\n\n");
							Sleep(2000);
							continue;
						}
					}
					printf("\n\n");
					break;

				case 4: 
					while(1)
					{	
						system("CLS");
						printf("\n Para Gonderme");
						printf("\n *************");
						printf("\n\n Gondermek Istediginiz Hesap nosunu giriniz:");
						scanf("%d",&gonderno);
						printf("\n\n Hesabinizdan Gonderilecek Tutari Giriniz:");
						scanf("%d",&gonder);
						
						if(bakiye>=gonder)
						{ 
							bakiye=bakiye-gonder;
							printf(" Hesabinizdan %d Hesabina Gonderilen Tutar: %d TL \n",gonderno,gonder);
							printf(" Hesabinizda Kalan Tutar: %d TL \n",bakiye);
							break;
						}
						else 
						{   
							printf("\n");
							printf(" Bakiyeniz Yetersiz.\n");
							printf(" Hesabinizdan Gonderilecek Tutari Tekrar Giriniz.\n");
							Sleep(2000);
							continue;
						}

					}
					printf("\n\n");
					break;
                case 5: 
					while(1)
					{	
						system("CLS");
						printf("\n Kredi Karti Borcu Odeme");
						printf("\n ***********************");
						printf("\n Kredi Karti Borcunuz: %d",borc);
						printf("\n\n Odemek Istediginiz Tutari Giriniz:");
						scanf("%d",&odeme);
						if(borc>=odeme)
						{ 
							borc=borc-odeme;
							printf(" Hesabiniza Yapilan Odeme Tutari: %d TL \n",odeme);
							printf(" Hesabinizda Kalan Borc Tutari: %d TL \n",borc);
							break;
						}
						else 
						{   
							printf("\n");
							printf("Borc Tutarinizdan Fazla Odeme Yaptiniz.\n");
							printf("Fazla Tutar Iade Ediliyor...\n");
							odeme=odeme-borc;
							Sleep(2000);
							printf("Paranizi Almayi Unutmayiniz.\n");
							Sleep(2000);
							printf("Iade Edilen Tutar: %d",odeme);
							
							break;
							
						}

					}
					printf("\n\n");
					break;
							
				case 6: 
					system("CLS");
					printf("\n");
					break;
       
					default: 
					system("CLS");
					printf("\n Yanlis Giris. Lutfen Tekrar Deneyiniz.\n");
					printf("\n");
					goto Menu; 
					break;
			} 
			printf(" Baska Islem Yapmak Istiyor Musunuz? (Y/N)");
			cevap=getch(); 
			system("CLS");
			printf("\n");
		}
		while(cevap=='Y' || cevap=='y');
		if(cevap=='N' || cevap=='n'){
		printf("Bizi Tercih Ettiginiz Icin Tesekkurler.\n");
		printf("Kartinizi Almayi Unutmayiniz.");
		
		} 
		break;
	      }
	
	return 0;
}
