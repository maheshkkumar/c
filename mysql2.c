/*
	Author : Mahesh Kumar
	Program : Integrating MySQL with C
*/

#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>

int main(void)
{

	static char *host = "localhost";
	static char *username = "username"; // MySQL username
	static char *password = "password"; // MySQL password
	static char *dbname = "mysql";
	
	unsigned int port = 3306; // MySQL port number will be in /etc/mysql/my.cnf
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
