#include <stdio.h>

struct MyStruct{
	char val[1];
	int num;
};
void write_struct(){
	struct MyStruct myStruct;
	FILE *file;
	myStruct.val[0] = 'a';
	myStruct.num = 15;
	file = fopen("data.bin","w");
	fwrite(&myStruct,sizeof(myStruct),1,file);
	fclose(file);
}

void read_struct(){
	FILE *file;
	struct MyStruct ptr;
	file = fopen("data.bin","r+");
	fread(&ptr,sizeof(struct MyStruct),1,file);
	printf("MyStruct.val: %c\nMyStruct.num: %d\n",ptr.val[0],ptr.num);
	fclose(file);
}

int main(){
	//write_struct();
	read_struct();
	return 0;
}

