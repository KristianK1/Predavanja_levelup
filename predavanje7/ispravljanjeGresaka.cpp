#include <stdio.h>  //1
int main(void)
{
	int c, s = 0;  //2
	while (1) {  //3
		scanf("%d", &c);
		if (10 < c && c < 20)  //4
			++s;
		else if (c == 0) //5
			break;
	}
	return 0;
}
