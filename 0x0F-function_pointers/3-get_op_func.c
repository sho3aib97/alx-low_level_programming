#include "3-calc.h"

/**/

int (*get_op_func(char *s))(int, int)
{
	op_t ar[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL]
	};
	int n = 0;

	while (n < 5)
	{
		if (s && s[0] == ar[n].op[0] && !s[1])
			return (ar[n].f);
		n++;
	}
	return (NULL);
}
