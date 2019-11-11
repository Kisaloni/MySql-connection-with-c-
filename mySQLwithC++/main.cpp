#include <iostream>
#include<windows.h>
#include<mysql.h>
using namespace std;

void exeQuery(MYSQL *conn);

int main()
{
    cout << "Hello world!" << endl;
    MYSQL *conn;
    conn=mysql_init(0);
    conn=mysql_real_connect(conn,"localhost","root","PASSWORD","DB_NAME",0, NULL,0);
    if(conn)
    {
        printf("Connected");
        exeQuery(conn);
    }
    else
    {
        printf("Not Connected");
    }
    return 0;
}


void exeQuery(MYSQL *conn)
{
    string q="create table my_table(name varchar(10),age int)";
    const char *query=q.c_str();
    mysql_query(conn,query);
}
