//
// Created by yang on 8/9/18.
//

#ifndef JOCK_DBCONNECTION_H
#define JOCK_DBCONNECTION_H

#include <string>

#include <mysql/mysql.h>
using std::string;


class DBConnection {
public:
    static DBConnection init();
    static  DBConnection create(string host,string user,string pwd,string dbName);
    void close();
private:
    MYSQL *connection;
};




#endif //JOCK_DBCONNECTION_H
