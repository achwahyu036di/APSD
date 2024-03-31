#include <iostream>

using namespace std;

int main() 
{
  string nama;
  int keaktifan, tugas, ujian;

  // Memasukkan data siswa
  cout << "Menghitung Nilai Akhir" <<endl;
  cout << "Nama Siswa : ";
  cin >> nama;
  cout << "Nilai Keaktifan : ";
  cin >> keaktifan;
  cout << "Nilai Tugas : ";
  cin >> tugas;
  cout << "Nilai Ujian : ";
  cin >> ujian;

  // Menghitung nilai murni
  float nilai_murni_keaktifan = keaktifan * 0.2;
  float nilai_murni_tugas = tugas * 0.5;
  float nilai_murni_ujian = ujian * 0.3;

  // Menghitung nilai akhir
  float nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
  // Menampilkan hasil
  cout << endl;
  cout << "Siswa yang bernama " << nama << endl;
  cout << "Dengan Nilai Persentasi Yang dihasilkan." << endl;
  cout << "Nilai Keaktifan * 20% : " << nilai_murni_keaktifan << endl;
  cout << "Nilai Tugas * 50% : " << nilai_murni_tugas << endl;
  cout << "Nilai Ujian * 30% : " << nilai_murni_ujian << endl;
  cout << "Jadi Siswa yang bernama " << nama << " memperoleh nilai akhir sebesar " << nilai_akhir << endl;

  return 0;
}
