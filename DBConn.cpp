//
// Created by yang on 8/9/18.
//

#include <cstdlib>
#include "DBConn.h"

DBConn::~DBConn() {
    if(!closed){
        try {
            db.close();
        }catch (int){
            std::abort();
        }

    }
}

void DBConn::close() {
    db.close();
    closed=true;
}

DBConn::DBConn() {
    db=DBConnection::create("localhost","root","123456","work");

}


