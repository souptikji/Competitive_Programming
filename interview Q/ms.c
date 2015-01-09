# include <stdio.h>
				
f(int n){
if(n>0){
		f(--n);
		printf("%d\n",n*n*n);
		f(--n);
	  }
}

int main(){
int x=4;
f(x);
getchar();
getchar();
}
