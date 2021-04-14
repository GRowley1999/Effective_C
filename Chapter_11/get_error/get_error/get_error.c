#include <string.h>
#include <errno.h>

char* get_error(errno_t errnum) {
	rsize_t size = strerrlen_s(errnum) + 1;
	if (msg != NULL) {
		errno_t status = strerror_s(msg, size, errnum);
		if (status != 0) {
			strncpy_s(msg, size, "unknown error", size - 1);
		}
	}
	return msg;
}