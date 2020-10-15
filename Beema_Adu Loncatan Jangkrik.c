#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int X1, X2;
int V1, V2;
int syarat1, syarat2, syarat3;
int hasil1, hasil2;
int jumlah_lompatan = 1;
int status;
	
int cek_lompatan();	
	
int main(){
	
	//input data
	printf("masukan x1, v1, x2, v2: ");
	scanf("%u %u %u %u", &X1, &V1, &X2, &V2);

	syarat1 = 0 <= X1 && X1 < X2 && X2 <= (int) pow(10,3);
	syarat2 = 0 <= V1 && V1 <= (int) pow(10,3);
	syarat3 = 0 <= V2 && V2 <= (int) pow(10,3);

	hasil1 = X1+V1;
	hasil2 = X2+V2;
	
	
	if( syarat1 && syarat2 && syarat3 ){
		cek_lompatan();		
		
		if(status == 1){
			printf("YES");
		} else if (status == 0){
			printf("NO");
		}
	} else {
		printf("syarat tidak terpenuhi");
	}
	
	
	return 0;
}

int cek_lompatan(){
	while(1==1) {
		if(hasil1==hasil2){
			status = 1;
			break;
		} else if (hasil1>=hasil2 || V2 >= V1){
			status = 0;
			break;
		}
		
		jumlah_lompatan++;
		hasil1 = hasil1+V1;
		hasil2 = hasil2+V2;

	}
	
	return 0;
}