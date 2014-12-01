#include <stdio.h>

int helper(int prev_result, int num)
{
	if(prev_result == -1) return -1;
	if(prev_result == -2) return (0*10 + num);
	if(prev_result * 10 > 65535) return -1;
	else
	return ((prev_result*10) + num);
}

int main( int arg, char* argv[])
{
if( arg != 2 )
{
	fprintf(stderr, "wrong number of arguments\n");
}

char* head = argv[1];
char* current = head;

int result = -2;

while( *current != '\0' )
{
	if(*current > '9' || *current < '0')
		break; 	
	else switch(*current)
	{
	case '1': result=helper(result, 1);break;
	case '2': result=helper(result, 2);break;
	case '3': result=helper(result, 3);break;
	case '4': result=helper(result, 4);break;
	case '5': result=helper(result, 5);break;
	case '6': result=helper(result, 6);break;
	case '7': result=helper(result, 7);break;
	case '8': result=helper(result, 8);break;
	case '9': result=helper(result, 9);break;
	case '0': result=helper(result, 0);break;
	}
	current++;
}
if(result == -1) fprintf(stdout, "overflow\n");
else if(result == -2) fprintf(stdout, "wrong format\n");
else fprintf(stdout, "result: %d\n", result);
return 0;
}
