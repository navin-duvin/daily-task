#include<stdio.h>
void copy(char *name){
	char *copyCat=name;
	printf("%s",copyCat);
}
void dio(void (*r)(char *),char name[]){
	r(name);
}
int main(){
	char *name="copycallback";
	void (*ptr)(char *)=copy;
	dio(ptr,name);
}
