/* open the port specified by port. return file handle */
int open_port(char *port);

/* write data of size bytes to fd. return number of bytes written */
int write_data(int fd, char* data, int bytes);

/* close port specified by fd */
void close_port(int fd);
