/*
 *  System Call for MonkeyOS
 *  http://www.tutorialspoint.com/unix_system_calls/
 */

#ifndef MOS_SYS_LIB__H
#define MOS_SYS_LIB__H

/*FileSystem System Calls*/
#pragma SWI_ALIAS(open, 0);
int open(const char *pathname, int flags);
/**/
#pragma SWI_ALIAS(close,1)
int close(int fd);

#pragma SWI_ALIAS(write,24)
int write(int fd, const void *buf, int count);
#endif
