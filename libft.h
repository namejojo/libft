#ifndef __LIBFT__
#define __LIBFT__
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
void *content;
struct s_list *next;
}t_list;

int ft_tolower(int c);
int ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_strnstr(const char *haystack, const char *ndl, int n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int ft_strlen(char *s);
unsigned int ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int ft_strlcat(char *dst, const char *src, unsigned int size);
char *ft_strjoin(char const *s1, char const *s2);
void ft_striteri(char const *s, void (*f)(unsigned int, char*));
char *ft_strdup(const char *s);
void *ft_strchr(const char *s, int c);
int ft_atoi(char *str);
char **ft_split(char *str, char *charset);
void ft_putstr_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);
void *ft_memset(void *s, int c, unsigned int n);
void *ft_memmove(void *dest, const void *src, unsigned int n);
void *ft_memcpy(void *dest, const void *src, unsigned int n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_lstsize(t_list *lst);
t_list *ft_lstnew(void *content);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list *ft_lstlast(t_list *lst);
void ft_lstiter(t_list *lst, void (*f)(void *));
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstadd_back(t_list **lst, t_list *new);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
void *calloc(size_t nmemb, size_t size);
void ft_lstclear(t_list **lst, void (*del)(void*));

#endif