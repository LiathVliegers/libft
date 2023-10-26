
Makefile

cc main.c -fsanitize=address -g
this flag is to show you where the errors are :P

$(NAME): $(OBJS)
	ar rcs $@ $^
$@ = same as NAME
$^ = Dependencies


---------------------------------------------------------------------------------------------------------
JEROENS TIPS:

		compile your sourcecode with the -g flag
		gdb ./a.out
		To debug your code(also during exams! :D)

		------------------------------------------------
		#include<stdlib.h>

		void *__real_malloc(size_t size)
		{
			return (malloc(size));
		}

		void *__wrap_malloc(size_t size)
		{
			static int i = 0;
			if (i == 4)
			{
				return (NULL);
			}
			++i;
			return (__real_malloc(size));
		}

		compile your sourcecode with the -g flag
		gdb ./a.out

	(gdb) b __wrap_malloc
	b (breakpoint) = 

	Breakpoint 1, __wrap_malloc (size=88) at liath_malloc.c:11
	11              if (i == 4)
	(gdb) p i
	$1 = 0
	(gdb) n
	15              ++i;
	(gdb) n
	16              return (__real_malloc(size));
	(gdb) 

	Breakpoint 1, __wrap_malloc (size=88) at liath_malloc.c:11
	11              if (i == 4)
	(gdb) 
	15              ++i;
	(gdb) p i
	$2 = 1
	(gdb) 
	$3 = 1
	(gdb) 
	$4 = 1
	(gdb) 
	$5 = 1
	(gdb) n
	16              return (__real_malloc(size));
	(gdb) 

	Breakpoint 1, __wrap_malloc (size=88) at liath_malloc.c:11
	11              if (i == 4)
	(gdb) 
	15              ++i;
	(gdb) 
	16              return (__real_malloc(size));
	(gdb) 

	Breakpoint 1, __wrap_malloc (size=88) at liath_malloc.c:11
	11              if (i == 4)
	(gdb) 
	15              ++i;
	(gdb) p i
	$6 = 3
	(gdb) n
	16              return (__real_malloc(size));
	(gdb) 

	Breakpoint 1, __wrap_malloc (size=88) at liath_malloc.c:11
	11              if (i == 4)
	(gdb) 
	13                      return (NULL);
	(gdb) 
	17
---------------------------------------------------------------------------------------------------------





	ft_memset.c 
	ft_bzero.c 
	ft_memcpy.c 
	ft_memmove.c 
	ft_memchr.c 
	ft_memcmp.c 
	ft_strlen.c 
	ft_isalpha.c 
	ft_isdigit.c 
	ft_isalnum.c 
	ft_isascii.c 
	ft_isprint.c 
	ft_toupper.c 
	ft_tolower.c 
	ft_strchr.c 
	ft_strrchr.c 
	ft_strncmp.c 
	ft_strlcpy.c 
	ft_strlcat.c 
	ft_strnstr.c 
	ft_atoi.c 
	ft_calloc.c 
	ft_strdup.c 
	ft_substr.c 
	ft_strjoin.c 
	ft_strtrim.c 
	ft_split.c 
ft_itoa.c 
	ft_strmapi.c 
	ft_putchar_fd.c
	ft_putstr_fd.c 
	ft_putendl_fd.c
	ft_putnbr_fd.c 
	ft_striteri.c 


-------------------------------------------------------------

