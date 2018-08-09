//
// Created by yang on 8/9/18.
//


#include "DBConnection.h"
#include <string>
#include <iostream>


using std::string;

void DBConnection::close() {
    DBConnection dbConnection=DBConnection::init();
    mysql_close(dbConnection.connection);

}


DBConnection DBConnection::create(string host, string user, string pwd, string dbName) {
    DBConnection dbConnection=DBConnection::init();
    dbConnection.connection = mysql_init(nullptr);
    dbConnection.connection = mysql_real_connect(dbConnection.connection, host.c_str(),
                     user.c_str(), pwd.c_str(), dbName.c_str(), 0, nullptr, 0);
    if (dbConnection.connection == nullptr) {
        std::cout << "Error:" << mysql_error(dbConnection.connection);
        exit(1);
    }
    return dbConnection;
}

DBConnection DBConnection::init() {
    static DBConnection dbConnection;
    return dbConnection;
}

