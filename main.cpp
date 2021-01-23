#include <iostream>
#include <fstream>
#include "classlar.h"

using namespace std;

int main()
{
	const int total = 10;
	Personel::Akademik::Programcilik prog[total];
	Personel::Akademik::Fen fen[total];
	Personel::Akademik::Mimarlik mimar[total];
	Personel::Idari idari[total];
	int idarisayi = 0;
	int programsayi = 0;
	int fensayi = 0;
	int mimarsayi = 0;
	while (1) {
		bool k = true;
		int secim, maas , id;
		string ad, soyad, bolum;
		int z = 0;
		cout << "Lutfen bir islem seciniz" << endl;
		cout << "1 ) Kayit Olustur" << endl;
		cout << "2 ) Kayit Sil" << endl;
		cout << "3 ) Bilgi Goruntule" << endl;
		cin >> secim;
		switch (secim) {
		case 1:
			secim = 0;
			system("cls");
			cout << "Lutfen bir birim seciniz: "<< endl;
			cout << "1) Akademik" << endl;
			cout << "2) Idari" << endl;
			cout << "3) Ana Menuye Don" << endl;
			cin >> secim;
			switch (secim)
			{
			case 1:
				secim = 0;
				system("cls");
				cout << "Lutfen bir fakulte seciniz: " << endl;
				cout << "1) Programcilik Fakultesi" << endl;
				cout << "2) Fen Fakultesi" << endl;
				cout << "3) Mimarlik Fakultesi" << endl;
				cout << "4) Ana Menuye Don" << endl;
				cin >> secim;
				switch (secim)
				{
				case 1:
					system("cls");
					cout << "Programcilik Fakultesi Personel Bilgi Girisi Yapiniz => AD | SOYAD | MAAS" << endl;
					cin >> ad >> soyad >> maas;
					if (programsayi > 0) {
						for (int m = 0; m < programsayi; m++) {
							if (prog[m].dene() == true) {
								prog[m] = Personel::Akademik::Programcilik(ad, soyad, "Programcilik Fakultesi", maas);
								k = !k;
							}
						}
						if (k) {
							prog[programsayi] = Personel::Akademik::Programcilik(ad, soyad, "Programcilik Fakultesi", maas);
							programsayi++;
						}
					}
					else {
						prog[programsayi] = Personel::Akademik::Programcilik(ad, soyad, "Programcilik Fakultesi", maas);
						programsayi++;
					}
					break;
				case 2:
					system("cls");
					cout << "Programcilik Fakultesi Personel Bilgi Girisi Yapiniz => AD | SOYAD | MAAS" << endl;
					cin >> ad >> soyad >> maas;
					if (fensayi > 0) {
						for (int m = 0; m < fensayi; m++) {
							if (fen[m].dene() == true) {
								fen[m] = Personel::Akademik::Fen(ad, soyad, "Fen Fakultesi", maas);
								k = !k;
							}
						}
						if (k) {
							fen[fensayi] = Personel::Akademik::Fen(ad, soyad, "Fen Fakultesi", maas);
							fensayi++;
						}
					}
					else {
						fen[fensayi] = Personel::Akademik::Fen(ad, soyad, "Fen Fakultesi", maas);
						fensayi++;
					}
					break;
				case 3:
					system("cls");
					cout << "Programcilik Fakultesi Personel Bilgi Girisi Yapiniz => AD | SOYAD | MAAS" << endl;
					cin >> ad >> soyad >> maas;
					if (mimarsayi > 0) {
						for (int m = 0; m < mimarsayi; m++) {
							if (mimar[m].dene() == true) {
								mimar[m] = Personel::Akademik::Mimarlik(ad, soyad, "Mimarlik Fakultesi", maas);
								k = !k;
							}
						}
						if (k) {
							mimar[mimarsayi] = Personel::Akademik::Mimarlik(ad, soyad, "Mimarlik Fakultesi", maas);
							mimarsayi++;
						}
					}
					else {
						mimar[mimarsayi] = Personel::Akademik::Mimarlik(ad, soyad, "Mimarlik Fakultesi", maas);
						mimarsayi++;
					}
					break;
				case 4:
					break;
				default:
					system("cls");
					cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
					cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
					cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
					cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
					cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
					break;
				}
				break;
			case 2:
				system("cls");
				cout << "Programcilik Fakultesi Personel Bilgi Girisi Yapiniz => AD | SOYAD | MAAS" << endl;
				cin >> ad >> soyad >> maas;
				if (idarisayi > 0) {
					for (int m = 0; m < idarisayi; m++) {
						if (idari[m].dene() == true) {
							idari[idarisayi] = Personel::Idari(ad, soyad, "Idari Birim", maas);
							k = !k;
						}
					}
					if (k) {
						idari[idarisayi] = Personel::Idari(ad, soyad, "Idari Birim", maas);
						idarisayi++;
					}
				}
				else {
					idari[idarisayi] = Personel::Idari(ad, soyad, "Idari Birim", maas);
					idarisayi++;
				}
				break;
			case 3:
				break;
			default:
				system("cls");
				cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
				cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
				cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
				cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
				cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
				break;
			}
			break;
		case 2:
			system("cls");
			secim = 0;
			cout << "Silinecek Alan Seciniz" << endl;
			cout << "1) Programcilik Fakultesi" << endl;
			cout << "2) Fen Fakultesi" << endl;
			cout << "3) Mimarlik Fakultesi" << endl;
			cout << "4) Idari Birim" << endl;
			cin >> secim;
			switch (secim)
			{
			case 1:
				system("cls");
				cout << "Programcilik Fakultesinden silinmesini istediginiz personel id sini giriniz: ";
				cin >> id;
				id--;
				prog[id].kayitsil();
				break;
			case 2:
				system("cls");
				cout << "Fen Fakultesinden silinmesini istediginiz personel id sini giriniz: ";
				cin >> id;
				id--;
				fen[id].kayitsil();
				break;
			case 3:
				system("cls");
				cout << "Mimarlik Fakultesinden silinmesini istediginiz personel id sini giriniz: ";
				cin >> id;
				id--;
				mimar[id].kayitsil();
				break;
			case 4:
				system("cls");
				cout << "Idari Biriminden silinmesini istediginiz personel id sini giriniz: ";
				cin >> id;
				id--;
				idari[id].kayitsil();
				break;
			default:
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "Personel Listesi" << endl;
			cout << "Programcilik Fakultesi" << endl << endl;
			cout << "--------------------------------------------------" << endl;
			for (size_t i = 0; i < total; i++) {
				prog[i].verigoster(i);
			}
			cout << endl;
			cout << "Fen Fakultesi" << endl << endl;
			cout << "--------------------------------------------------" << endl;
			for (size_t i = 0; i < total; i++) {
				fen[i].verigoster(i);
			}
			cout << endl;
			cout << "Mimarlik Fakultesi" << endl << endl;
			cout << "--------------------------------------------------" << endl;
			for (size_t i = 0; i < total; i++) {
				mimar[i].verigoster(i);
			}
			cout << endl;
			cout << "Idari Birim" << endl << endl;
			cout << "--------------------------------------------------" << endl;
			for (size_t i = 0; i < total; i++) {
				idari[i].verigoster(i);
			}
			cout << endl;
			break;
		default:
			system("cls");
			cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
			cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
			cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
			cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
			cout << "Yanlis islem sectiniz tekrar deneyiniz." << endl;
			break;
		}
	}
}
