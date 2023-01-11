#include <stdio.h>
#include <string.h>

// Definisikan struct Mahasiswa
struct Mahasiswa {
  char nama[100];
  float ipk;
};

// Fungsi untuk menukar dua struct Mahasiswa
void swap(struct Mahasiswa *A, struct Mahasiswa *B) {
  struct Mahasiswa temp = *A;
  *A = *B;
  *B = temp;
}

// Fungsi untuk mencetak semua Mahasiswa
void print_mahasiswa(struct Mahasiswa *mahasiswa, int size) {
  for (int i = 0; i < size; i++) {
    printf("Nama: %s\n", mahasiswa[i].nama);
    printf("IPK: %.2f\n", mahasiswa[i].ipk);
  }
}

int main(void) {
  // Buat array of Mahasiswa dengan minimal 5 Mahasiswa
  struct Mahasiswa mahasiswa[5] = {
    {"Anna", 3.9},
    {"Budi", 3.6},
    {"Cindy", 3.5},
    {"Doni", 3.8},
    {"Elly", 3.7}
  };

  while (1) {
    // Tampilkan menu
    printf("Pilih menu:\n");
    printf("1. Sort mahasiswa berdasarkan Nama (ascending)\n");
    printf("2. Sort mahasiswa berdasarkan IPK (ascending)\n");
    printf("3. Keluar dari Program\n");
    printf("Masukkan pilihan Anda: ");

   int pilihan;
scanf("%d", &pilihan);

if (pilihan == 1) {
  // Sort mahasiswa berdasarkan Nama (ascending)
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (strcmp(mahasiswa[i].nama, mahasiswa[j].nama) > 0) {
        swap(&mahasiswa[i], &mahasiswa[j]);
      }
    }
  }

  // Cetak semua mahasiswa
  printf("Data mahasiswa setelah diurutkan berdasarkan Nama (ascending):\n");
  print_mahasiswa(mahasiswa, 5);
} else if (pilihan == 2) {
  // Sort mahasiswa berdasarkan IPK (ascending)
  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (mahasiswa[i].ipk > mahasiswa[j].ipk) {
        swap(&mahasiswa[i], &mahasiswa[j]);
      }
    }
  }

  // Cetak semua mahasiswa
  printf("Data mahasiswa setelah diurutkan berdasarkan IPK (ascending):\n");
  print_mahasiswa(mahasiswa, 5);
} else if (pilihan == 3) {
  // Keluar dari program
  printf("Terima kasih telah menggunakan program ini!\n");
  return 0;
} else {
  printf("Pilihan tidak valid, silakan masukkan pilihan kembali.\n");
}
}

return 0;
}

