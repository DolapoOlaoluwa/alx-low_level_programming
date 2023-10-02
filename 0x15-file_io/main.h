#ifndef MAIN_H
#define MAIN_H

#define BUF_SIZE 1024
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


void close_error(long int fd);
void dpf_error(char *readout, char *filename, int exit_c);

int _putchar(char c);

#endif	/*MAIN_H*/
