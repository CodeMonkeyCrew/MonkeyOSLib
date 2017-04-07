/*
 * System Call for MonkeyOS
 *
 */

#ifndef MOS_SYS_LIB__H
#define MOS_SYS_LIB__H

/*
 *Given a pathname for a file, open() returns a file descriptor, a small, non-negative integer for use in subsequent system calls (read(2), write(2), lseek(2), fcntl(2), etc.).
* The file descriptor returned by a successful call will be the lowest-numbered file descriptor not currently open for the process.
 * */
#pragma SWI_ALIAS(open, 21);
int open(const char *pathname, int flags);

/*
 * write() writes up to count bytes to the file referenced by the file descriptor fd from the buffer starting at buf.
 * POSIX requires that a read() which can be proved to occur after a write() has returned returns the new data.
 * Note that not all file systems are POSIX conforming.
 */
#pragma SWI_ALIAS(write,24)
int write(int fd, const void *buf, int count);
#endif
