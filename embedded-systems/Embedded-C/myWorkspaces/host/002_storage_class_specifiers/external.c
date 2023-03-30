// import global var from main.c
extern int external_num;

void change_extern(void)
{
	// change imported var
	external_num = external_num + 20;
}
