#include <stdio.h>

int main() {
  int a[5] = {0};
  int n = 0, j = 0, i = 0;
  int flag_ja_imprimiu = 0;//Esta flag indica se já imprimimos na aual iteração. Para facilitar a impressão ou nao do caractere "-".
  							//Vale 1 quando já imprimimos e 0 quando não.

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
    
    flag_ja_imprimiu = 0;
    
    for (j=0; j<5; j++){
    	
    	if(i%a[j] == 0){
    		
    		printf("%d", j);
    		flag_ja_imprimiu = 1;
    		
    	}
    	
    }
    
    if(flag_ja_imprimiu != 1){
    	
    	printf("-");
    	
	}
	
	printf("\n");
    
  }

  return 0;
}
