#include <stdio.h> //library standard
#include <stdlib.h> //dalam program ini untuk konversi ke float
int main() {
    //inisialisasi variabel
	int banyak_nilai = 1;
    float nilai = 0, 
		  jumlah_nilai = 0, 
		  ratarata;
	char input_text[3]; //variabel penampung hasil input user
	
	//mencetak judul
	printf("==== PROGRAM MENGHITUNG RATA-RATA NILAI ====\n");
	printf("===== DENGAN JUMLAH YANG TAK DIKETAHUI =====\n\n");
	printf("(masukan n untuk selesai)\n");

	//perulangan
    while(1==1){
		//input nilai ke -
        printf("Masukkan nilai ke %d: ", banyak_nilai);
		scanf("%s",&input_text);  
		
		//seleksi input yang dimasukan user
		if(input_text[0] == 'n'){
			banyak_nilai--;	//batal menghitung siswa ke n
			break; //perulangan selesai
		} else {
			//konversi character menjadi float
			nilai = atof(input_text);
			
			//jumlah nilai
			jumlah_nilai = jumlah_nilai + nilai;
			banyak_nilai++;
		}
    }
	//cetak rata rata
    ratarata = jumlah_nilai / banyak_nilai;
    printf("\nRata-rata nilai siswa adalah: %.2f", ratarata);
	printf("\n============= PROGRAM SELESAI ==============\n");
    return 0;
}