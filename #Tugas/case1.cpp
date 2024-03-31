#include <iostream>

using namespace std;

int main() 
{
  // Deklarasi variabel
  string nim, nama;
  int nilaiTugas1, nilaiTugas2, nilaiTugas3, nilaiRata;

  // Input data
  cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
  cout << "Nim Siswa : ";
  cin >> nim;
  cout << "Nama Siswa : ";
  cin >> nama;
  cout << "Nilai Tugas I : ";
  cin >> nilaiTugas1;
  cout << "Nilai Tugas II : ";
  cin >> nilaiTugas2;
  cout << "Nilai Tugas III : ";
  cin >> nilaiTugas3;

  // Menghitung nilai rata-rata
  nilaiRata = (nilaiTugas1 + nilaiTugas2 + nilaiTugas3) / 3;

  // Output data
  cout << endl;
  cout << "Nim " << nim << " Siswa yang bernama " << nama << endl;
  cout << "Memperoleh nilai rata-rata " << nilaiRata << " dari hasil tugas yang diikutinya." << endl;

  return 0;
}
