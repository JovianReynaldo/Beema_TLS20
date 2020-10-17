#include <stdio.h>
#include <stdlib.h>

struct kotaku{
	int nomor, panjang, lebar, tinggi, volume;
};

int main(){
	//inisialisasi variabel n
	int n; 

	//input jumlah kotak
	printf("Masukkan jumlah kotak anda : ");
	scanf("%i",&n);

	// definisi struct kotak dengan malloc(alokasi memori)
	struct kotaku* kotak = malloc(n * sizeof(struct kotaku));

	// perulangan sebanyak jumlah n dengan variabel i sebagai n-ke
	for(int i = 1; i <= n; i++){
        //set nomor kotak
        kotak[i].nomor = i; 

		//input data
		printf("masukan panjang, lebar, tinggi kotak ke-%d secara berurutan: ", i);
		scanf("%u %u %u", &kotak[i].panjang , &kotak[i].lebar, &kotak[i].tinggi);
		
		// pemberian nilai pada variabel volume ketika tinggi tidak lebih dari 41
		if(kotak[i].tinggi < 41){
		   kotak[i].volume = kotak[i].panjang * kotak[i].lebar * kotak[i].tinggi;
			} else {
		   kotak[i].volume=0;
		}
	}


	// pesan output	
	printf("\n =============================== \n");
	printf("\nVOLUME DENGAN TINGGI DIBAWAH 41 \n");

	// data output, perulangan sebanyak jumlah n dengan variabel i sebagai n-ke
	// kemudian mencetak hasil volume ketika volume tidak bernilai 999
	for(int i = 1; i <= n ; i++){
		if(kotak[i].volume != 0 )printf("\n kotak ke %d: %d", i,kotak[i].volume);
	}


	return 0;
}
