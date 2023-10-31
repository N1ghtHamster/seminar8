#include <stdio.h>

void read_file(char *buffer, char *filename_read)
{
	FILE *fp = fopen(filename_read, "r");
    if(fp)
    {
        while((fgets(buffer, 3, fp))!= NULL)
        fclose(fp);
    }
}

void write_file(char *str, char *filename_write)
{
	FILE *fp = fopen(filename_write, "w");
    fputs(str, fp);
    fclose(fp);
}

int find_cell(int row, int col, int m[8][8])
{
	int tmp;
	tmp = m[row][col];
	return tmp;
}

int main(void)
{
	int m[8][8] = {
					{1,0,1,0,1,0,1,0},
					{0,1,0,1,0,1,0,1},
					{1,0,1,0,1,0,1,0},
					{0,1,0,1,0,1,0,1},
					{1,0,1,0,1,0,1,0},
					{0,1,0,1,0,1,0,1},
					{1,0,1,0,1,0,1,0},
					{0,1,0,1,0,1,0,1}};
    char * filename_read = "data.txt";
    char * filename_write = "input.txt";
    char buffer[3];
    read_file(buffer, filename_read);
    int cell = find_cell(buffer[0] - 65, buffer[1] - 49, m);
    printf("%s\n", buffer);
    cell == 0 ? write_file("WHITE", filename_write) : write_file("BLACK", filename_write);
    return 0;
}
