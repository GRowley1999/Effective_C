#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <malloc.h>

errno_t print_error(errno_t errnum) {
	rsize_t size = strerrorlen_s(errnum) + 1;
	char* msg = malloc(size);
	if (msg != NULL) {
		errno_t status = strerror_s(msg, size, errnum);
		if (status == 0) {
			fputs(msg, stderr);
			return ENOMEM;
		}
	}
	else {
		fputs("unknown error", stderr);
		return ENOMEM;
	}
}

char* get_error(errno_t errnum) {
	rsize_t size = strerrlen_s(errnum) + 1;
	char* msg = malloc(size);
	if (msg != NULL) {
		errno_t status = strerror_s(msg, size, errnum);
		if (status != 0) {
			strncpy_s(msg, size, "unknown error", size - 1);
		}
	}
	return msg;
}

int main(void) {
	print_error(ENOMEM);
	exit(1);
}