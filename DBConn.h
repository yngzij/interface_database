//
// Created by yang on 8/9/18.
//

#ifndef JOCK_DBCONN_H
#define JOCK_DBCONN_H

#include <mysql/mysql.h>
#include "DBConnection.h"
class DBConn {
public:
    DBConn();
    ~DBConn();
    void close();
private:
    DBConnection db;
    bool closed;
};


#endif //JOCK_DBCONN_H
