static void fun1(void){
	char *cp = 0;
	*cp = '!';
}

int main(int argc, char **argv){
	fun1();
	return 0;
}
