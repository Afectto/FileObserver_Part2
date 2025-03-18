#ifndef ISIZECALCULATIONSTRATEGY_H
#define ISIZECALCULATIONSTRATEGY_H

#include <QMap>
#include <QDebug>
#include <QPair>
#include <QString>


// Интерфейс стратегии для расчета размера директории
class ISizeCalculationStrategy {
public:
    virtual ~ISizeCalculationStrategy() = default;
    virtual QVector<QPair<QString, QString>> calculate(const QString &path) = 0;
};
#endif // ISIZECALCULATIONSTRATEGY_H
