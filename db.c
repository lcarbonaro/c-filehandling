#include <stdio.h>
#include <mysql.h>

int main(int argc, char **argv)
{
  printf("MySQL client version: %s\n", mysql_get_client_info());
  
   MYSQL *conn;
   MYSQL_RES *res;
   MYSQL_ROW row;
   char *server = "0.0.0.0";   
   char *user = "lcarbonaro";
   char *password = ""; 
   char *database = "test";
   conn = mysql_init(NULL);
   /* Connect to database */
   if (!mysql_real_connect(conn, server,user, password, database, 0, NULL, 0)) {
      fprintf(stderr, "%s\n", mysql_error(conn));
      // exit
   }
   /* send SQL query */
   
   char *sql = "select * from test";    // was: show tables
   
   if (mysql_query(conn, sql)) {
      fprintf(stderr, "%s\n", mysql_error(conn));
      // exit
   }
   res = mysql_use_result(conn);
   /* output table name */
   printf("MySQL Tables in mysql database:\n");
   while ((row = mysql_fetch_row(res)) != NULL)
      printf("%s: %s \n", row[0],row[1]);
   /* close connection */
   mysql_free_result(res);
   mysql_close(conn);

  return 0;
}

// ref:
// http://jhrokku1022.wordpress.com/2013/09/11/codeblocks-c-in-win-7-connects-to-mysql-in-linux/ (method 2 for Code::Blocks set-up)
// note: also need to add libmysql to linker settings in code:blocks
// if compiling this manually using gcc add parms -I/usr/include/mysql -lmysqlclient (for c9)