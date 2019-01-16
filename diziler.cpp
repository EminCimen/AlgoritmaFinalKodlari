#include <stdio.h>
int main(){
	int sicaklik[7];
	for(int i=0;i<7;i++){
		printf("Lutfen sicaklik giriniz>");
		scanf("%d",&sicaklik[i]);
	}
	int toplam=0;
	
	for(int i=0;i<7;i++){
		toplam=toplam+sicaklik[i];
	}
	
	int ortalama=toplam/7;
		for(int i=0;i<7;i++){
			if(ortalama>sicaklik[i])
			printf("Ortalamadan kucuk sicaklik %d\n",sicaklik[i]);
		}
}
