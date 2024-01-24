#include<stdio.h>
#include<stdlib.h>

struct  object{
	char *memchunk;
	unsigned int in_use;
};

struct object obj; 

int main() {
	obj.memchunk = NULL;
	obj.in_use = 0;
	char command[6] = {};
	scanf("%5s",command);	// read some cmd...
	if (command[0] == '\x00')
		return 0;

	for (int i=0; i<5, command[i]!='\x00'; i++)	// execute cmd... 
	{
			// 122ï¼
		if (command[i] == '1') 
		{
			obj.memchunk = (char *)malloc(32);
			obj.in_use = 1;
		} 
		else if (command[i] == '2') 
		{
			free(obj.memchunk);
			obj.in_use = 0;
		} 
		else if (command[i] == '3')
		{
			obj.memchunk = realloc(obj.memchunk, 64);
			if (!obj.in_use)
				obj.in_use = 1;
		}
	}	
	return 0;
}
