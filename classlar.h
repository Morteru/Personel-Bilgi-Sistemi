using namespace std;
class Personel 
{
public:
	class Akademik{
	public:
		class Programcilik  {
		private:
			int maas;
			string ad, soyad, bolum;
			
		public:
			bool t = true;
			bool f = false;
			Programcilik(string ad = "Bos", string soyad = "Bos", string bolum = "Bos", int maas = -999) {
				this->ad = ad;
				this->soyad = soyad;
				this->bolum = bolum;
				this->maas = maas;
			}
			void kayitsil() {
				this->ad = "Bos";
				this->soyad = "Bos";
				this->bolum = "Bos";
				this->maas = -999;
				cout << "Istenilen kayit basarili bir sekilde silinmistir" << endl;
			}
			void verigoster(int a) const {
				int b = a + 1;
				cout << b << " Nolu kayit : " << " Ad: " << this->ad << " Soyad: " << this->soyad << " Bolum: " << this->bolum << " Maas: " << this->maas << endl;
			}
			bool dene() {
				if (this->ad == "Bos") {
					return t;
				}
				else {
					return f;
				}
			}
		};
		class Fen {
		private:
			int maas;
			string ad, soyad, bolum;
			
		public:
			bool t = true;
			bool f = false;
			Fen(string ad = "Bos", string soyad = "Bos", string bolum = "Bos", int maas = -999) {
				this->ad = ad;
				this->soyad = soyad;
				this->bolum = bolum;
				this->maas = maas;
			}
			void kayitsil() {
				this->ad = "Bos";
				this->soyad = "Bos";
				this->bolum = "Bos";
				this->maas = -999;
				cout << "Istenilen kayit basarili bir sekilde silinmistir" << endl;
			}
			void verigoster(int a) const {
				int b = a + 1;
				cout << b << " Nolu kayit : " << " Ad: " << this->ad << " Soyad: " << this->soyad << " Bolum: " << this->bolum << " Maas: " << this->maas << endl;
			}
			bool dene() {
				if (this->ad == "Bos") {
					return t;
				}
				else {
					return f;
				}
			}
		};
		class Mimarlik {
		private:
			int maas;
			string ad, soyad, bolum;
			
		public:
			bool t = true;
			bool f = false;
			Mimarlik(string ad = "Bos", string soyad = "Bos", string bolum = "Bos", int maas = -999) {
				this->ad = ad;
				this->soyad = soyad;
				this->bolum = bolum;
				this->maas = maas;
			}
			void kayitsil() {
				this->ad = "Bos";
				this->soyad = "Bos";
				this->bolum = "Bos";
				this->maas = -999;
				cout << "Istenilen kayit basarili bir sekilde silinmistir" << endl;
			}
			void verigoster(int a) const {
				int b = a + 1;
				cout << b << " Nolu kayit : " << " Ad: " << this->ad << " Soyad: " << this->soyad << " Bolum: " << this->bolum << " Maas: " << this->maas << endl;
			}
			bool dene() {
				if (this->ad == "Bos") {
					return t;
				}
				else {
					return f;
				}
			}
		};
	};
	class Idari {
	private:
		int maas;
		string ad, soyad, bolum;
		
	public:
		bool t = true;
		bool f = false;
		Idari(string ad = "Bos", string soyad = "Bos", string bolum = "Bos", int maas = -999) {
			this->ad = ad;
			this->soyad = soyad;
			this->bolum = bolum;
			this->maas = maas;
		}
		void kayitsil() {
			this->ad = "Bos";
			this->soyad = "Bos";
			this->bolum = "Bos";
			this->maas = -999;
			cout << "Istenilen kayit basarili bir sekilde silinmistir" << endl;
		}
		void verigoster(int a) const {
			int b = a + 1;
			cout << b << " Nolu kayit : " << " Ad: " << this->ad << " Soyad: " << this->soyad << " Bolum: " << this->bolum << " Maas: " << this->maas << endl;
		}
		bool dene() {
			if (this->ad == "Bos") {
				return t;
				cout << "t" << endl;
			}
			else {
				cout << "f" << endl;
				return f;
			}
		}
	};
};
