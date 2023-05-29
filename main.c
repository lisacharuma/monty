#include "monty.h"
#include "string.h"

carry_value val = {NULL, NULL, NULL, 0};
/**
 * main - entry point
 * @argc: arguments count
 * @argv: args array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	char *line_c;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
		usage_error();
	file = fopen(argv[1], "r");
	val.file = file;
	if (!file)
		file_open_error(file);
	while (read_line > 0)
	{
		line_c = NULL;
		read_line = getline(*line_c, &size, *file);
		val.line_c = line_c;
		count++;
		if (read_line > 0)
			execute_op(line_c, &stack, count, file);
		free(line_c);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
