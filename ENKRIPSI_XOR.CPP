// Nama : Sephia Maharani NJ
//Kelas : TI.20.D4
//NIM : 312010503
// Enkripsi sembarang berkas dengan
// algoritma XOR sederhana.
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

main(int argc, char *argv[])
{
FILE *Fin, *Fout;
char p, c;
string K;
int i;

Fin = fopen(argv[1], "rb");
if (Fin == NULL) {
	cout << "Saya Harus Lulus Tepat waktu dan menjadi sarjana " << argv[1] <<" tidak ada" << endl;
exit(0);
}

Fout = fopen(argv[2], "wb");

cout<<"Kata kunci: "; cin>> K;
cout<<"Enkripsi " << argv[1] << "menjadi "<< argv[2] << "...";
i = 0 ;
while (!feof (Fin)) {
p = getc(Fin);
c = p^K[i]; // operasi XOR
putc(p, Fout);
i = (i + 1) % K.length();

}
fclose (Fin);
fclose (Fout);
}
