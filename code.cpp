#include <stdio.h>
#include <conio.h>
#include<windows.h>


main(){
   int bil1, bil2,hasil = 0;
   int pilih;
   int i;
   home:

   printf("Tampilan Menu\n");
   printf(" Metode numerik Aritmatika\n");
   printf("1. Hitung tambah  bil1 + bil2\n");
   printf("2. Hitung kurang  bil1 - bil2\n");
   printf("3. Hitung kali    bil1 * bil2\n");
   printf("4. Hitung pangkat bil1 ^ bil2\n");
   printf("5. Hitung F(x) = 2x^2-4x+1\n");
   printf("6. keluar\n");
   printf("Pilih : ");scanf(" %d",&pilih);
   if(pilih==1){
      goto tambah;
   }
      else if(pilih==2){
       	goto kurang;
      }
         else if(pilih==3){
             goto kali;
         }
            else if(pilih==4){
               goto pangkat;
            }
               else if(pilih==5){
               	  goto fungsi;
               }
                  else if (pilih==6){
               	     goto exit;
                  }
               	      else{
            		printf("salah mas !");
               	      }
	getch();
   		tambah:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&bil1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&bil2);
   			hasil = bil1 + bil2;
   			printf("hasil : %d",hasil);
   			getch();
   			goto home;
   		kurang:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&bil1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&bil2);
   			hasil = bil1 - bil2;
   			printf("hasil : %d",hasil);
   			getch();
  		 	goto home;
   		kali:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&bil1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&bil2);
  			hasil = bil1 * bil2;
  			printf("hasil : %d",hasil);
   			getch();
   			goto home;
   		pangkat:
   			printf("Masukan Nilai bil1 : ");scanf("%d",&bil1);
   			printf("Masukan Nilai bil2 : ");scanf("%d",&bil2);
   			hasil = bil1;
   			for(i=1;i<bil2;i++){
   			hasil = hasil * bil1;
   		}
   			printf("hasil : %d",hasil);
   			getch();
   			goto home;
   		fungsi:
   			printf("Masukan Nilai bil1 :");scanf("%d",&bil1);
   			printf("Masukan Nilai bil2 :");scanf("%d",&bil2);
   			for(i=bil1;i<=bil2;i++){
      			hasil = (2*(i*i))-((4*i)+1);
      		printf("hasil : %d\n",hasil);
   }
   			getch();
   			goto home;
exit:
return 0;
}

