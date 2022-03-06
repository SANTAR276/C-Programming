#include <stdio.h>
#include <string.h>
#include <assert.h>


void copy(char *dest, char *src){
	assert(dest != NULL);			// asserts program if dest is NULL
	assert(src != NULL);			// asserts program if src is NULL

	strcpy(dest, src);
}

int main(){

	char s1[100];
	char *s2 = "Hello World";

	copy(s1, s2);					// this command works because neither s1 nor s2 is NULL

	copy(NULL, s2);					// asserts this command because dest is NULL

	return 0;

}
