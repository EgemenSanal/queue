#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int ogeler[SIZE],front = -1,rear =-1;
//eleman ekleme

void ekleme(int deger){
	if(rear == SIZE -1 )
		printf("KUYRUK DOLU\n");
	else{
		if(front == -1)
			front =0;
		rear++;
		ogeler[rear] = deger;
		printf("%d EKLENDI\n",deger);
	}
}
//elemen silme

void silme(){
	if(front == -1)
		printf("KUYRUK BOS\n");
	else{
		printf("SILINEN ELEMAN = %d\n",ogeler[front]);
		front++;
		if(front > rear)
			front = rear = -1;
	}
}
//elemanlari gosterme

void goster(){
	
	if(rear == -1)
		printf("KUYRUK BOS\n");
	else{
		int i;
		printf("KUYRUK ELEMANLARI = \n");
		for(i =front; i <= rear;i++)
			printf("%d\n",ogeler[i]);
	}
	
	
}

int main(int argc, char *argv[]) {
	
	int secim;
	int eklenenSayi;
	int silinenSayi;
	int k =1;
	while(k == 1){
	
	printf("LUTFEN ASAGIDAKI ISLEMLERDEN BIRINI SECINIZ\n1.EKLEME\n2.SILME\n3.GORUNTULEME\n4.CIKIS\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("EKLEMEK ISTEDIGINIZ SAYIYI GIRINIZ\n");
			scanf("%d",&eklenenSayi);
			ekleme(eklenenSayi);
			break;
		case 2:
			printf("SILMEK ISTEDIGINIZ SAYIYI GIRINIZ\n");
			scanf("%d",&silinenSayi);
			silme(silinenSayi);
			break;
		case 3:
			goster();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("HATALI SECIM YAPTINIZ\n");
	}
	printf("YENIDEN ISLEM YAPMAK ISTER MISINIZ?\n1-EVET 2-HAYIR\n");
	scanf("%d",&k);
	
}
	
	return 0;
}
