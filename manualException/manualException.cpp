#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar di prodi TI UMY" << endl;
		//throw 0.5; //melemparkan sebuuah integer maka
		cout << "Pertanyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan dieksekusi
		cout << " Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		// Jika selain integer maka block ini akan diesekusi /
			cout << "Default Pengecualian dieksekusi" << endl;
	}
	return 0;
}