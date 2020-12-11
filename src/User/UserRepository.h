#ifndef USERREPOSITORY_H
#define USERREPOSITORY_H

#include <QSqlQuery>
#include <QVariant>
#include "base/Repository/Repository.h"
#include "src/User/User.h"
#include "utils/ListPackage/LinkedListt/LinkedListt.h"
#include "utils/DatabaseConnection/DatabaseConnection.h"

class UserRepository : public Repository<User>
{

private:
    static UserRepository* _userRepository;
    QSqlQuery* query;
    UserRepository();

public:
    static UserRepository* initUserRepository();
    ~UserRepository();
    User parse(QSqlQuery *);
    Listt<User>* findAll();

};

#endif // USERREPOSITORY_H