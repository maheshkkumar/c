#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

int main(void)
{

	static char *host = "localhost";
	static char *username = "username";
	static char *password = "password";
	static char *dbname = "mysql";
	
	unsigned int port = 3306;
	static char *unix_socket = NULL;
	unsigned int flag = 0;
	
	MYSQL *conn;
	
	conn = mysql_init(NULL);
	
	if(!conn)
	{
		fprintf(stderr, "Database initialization failed...%s [%d]\n", mysql_error(conn), mysql_errno(conn));
		exit(0);
	}
	
	if(!(mysql_real_connect(conn, host, username, passrword, dbname, port, unix_socket, flag)))
	{
		fprintf(stderr, "Database connection failed...%s [%d]\n", mysql_error(conn), mysql_errno(conn));
		exit(0);
	}
	
	printf("Connection Successful\n\n");
	mysql_close(conn);
	return EXIT_SUCCESS;
}
