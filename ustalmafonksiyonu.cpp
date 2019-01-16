#include <stdio.h>
int ustalma(int taban, int ust){
    int sonuc=1;
    for(int i=1;i<=ust;i++){
        sonuc=sonuc*taban;
    }
    return sonuc;
}

int main()
{
	int taban,ust;
	printf("Lutfen bir taban girin>");
	scanf("%d",&taban);
	printf("Lutfen bir ust girin>");
	scanf("%d",&ust);
    printf("Islem sonucu=%d\n",(ustalma(taban,ust)));
}
