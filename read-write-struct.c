#include <stdio.h>

// create a struct model with 2 properties
struct MyStruct{
	char val[1];
	int num;
};

void write_struct(){
	struct MyStruct myStruct;
	FILE *file;
	myStruct.val[0] = 'a';
	myStruct.num = 15; // create a struct instace and set values
	file = fopen("data.bin","w"); 
	 // with fwrite command write binary data to opened file 
	fwrite(&myStruct,sizeof(myStruct),1,file); // params: pointer struct, size of buffer or struct, count of objects, file
	fclose(file); // that's all!
}

void read_struct(){
	FILE *file;
	struct MyStruct ptr; // create a struct
	file = fopen("data.bin","r+");
	// with fread command read binary data from opened file 
	fread(&ptr,sizeof(MyStruct),1,file); // params: pointer struct, size of buffer or struct, count of objects, file
	printf("MyStruct.val: %c\nMyStruct.num: %d\n",ptr.val[0],ptr.num);
	fclose(file);
}

int main(){
	//write_struct();
	read_struct();
	return 0;
}

