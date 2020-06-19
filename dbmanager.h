#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QtSql>

class DBManager
{
public:
    DBManager(const QString& path);
private:
    QSqlDatabase m_db;
};

#endif // DBMANAGER_H
