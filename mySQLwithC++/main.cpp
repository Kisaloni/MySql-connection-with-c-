#include <iostream>
#include<windows.h>
#include<mysql.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    MYSQL *conn;
    conn=mysql_init(0);
    conn=mysql_real_connect(conn,"localhost","root","K11@mysqltoor","hello_world",0, NULL,0);
    if(conn)
    {
        printf("Connected");
    }
    else
    {
        printf("Not Connected");
    }
    return 0;
}
