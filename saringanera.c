#include <stdio.h>

int main(){
	int a,i,Checked,Checker,cl;
	int array[1000];
	
	scanf("%d",&a);
	for(i=1;i<=a;i++){ /* MENGISI ARRAY DENGAN NILAI*/
		array[i]=(1);
	}
	array[1]=-1; /*COUNTER UNTUK ANGKA 1*/
		for(Checker=1;Checker<=a;Checker++){ /* PERULANGAN FAKTOR*/
			if (array[Checker]==1){ /*DEFINISi FAKTOR*/
				for (Checked=(Checker+1);Checked<=a;Checked++) { /* PERULANGAN YANG DI CORET*/
					if (array[Checked]==1){ /*SYARAT KALO MAU DI CEK*/
						cl=Checked%Checker; /* SYARAT DI CORET*/
						if (cl==0){
							array[Checked]=(-1);/*KALO POSITIVE BERARTI DI BUNUH*/	
						}
					}	
				}
			}
			if (array[a]==-1) 
				break;
		}

	if (array[a]==1){
		printf("PRIMA");
	} else {
		printf("BUKAN PRIMA");
	}
}