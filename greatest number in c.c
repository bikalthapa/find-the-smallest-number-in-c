# include<stdio.h>
int main(){
	// Declaring Variables
	int a,b,c;
	
	printf("Enter Three Different Number\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c){
		printf("%d is less than %d and %d",a,b,c);
	}else if(b<a && b<c){
		printf("%d is less than %d and %d",b,a,c);
	}else{
		printf("%d is less than %d and %d",c,b,a);
	}
	return(0);
}
