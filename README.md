# Libft
42's Libft project. For personal use as Git submodule in other projects.


Extra functions are:

ft_splitcount.c - counts number of substrings delimited by char c.

ft_sublen.c - counts length of substring until char c delimiter.

ft_strnlen.c - copycat of strnlen internal c function.

ft_strndup.c - copycat of strndup internal function.

ft_numlen.c - counts number of characters in an int.

ft_iswhitespace - checks whether a character is any of: " ", "\t", "\r", "\n", "\v", "\f".

ft_whitespaceend - returns a pointer to the character after the end of whitespace in the given string.

ft_outputstr - faster version of ft_putstr. Only uses one write call.

ft_alen - counts length of void array.

get_next_line - reads one line at a time from up to 2048 file descriptors. From the original 42 get_next_line project, put here for ease of use.



FILE_HELPER:

Extre functionality to help read from files and convert them into t_read struct. Create 2d matrices from a t_read. Useful for graphics projects in creating map matrices from a file.


STRUCTS:

typedef struct	s_line
{
	struct s_line	*next;
	struct s_line	*prev;
	char			*str;
}				t_line;

typedef struct	s_read
{
	int				w;
	int				h;
	char			**matrix;
	struct s_line	*lines;
	
}				t_read;