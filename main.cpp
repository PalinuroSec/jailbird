#include "jailbird.h"
#include <QApplication>
#include <QRegExp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jailbird w;
    w.show();

    return a.exec();
}

namespace engine {

    //this function accepts the target as input and returns 0 if
    //it corresponds to a domain name
    bool validate_target(const QString &target)
    {
        // first regexp for domains validation
        QRegExp rexpdom("^([a-zA-Z0-9\\-\\.]+\\.){1,6}[a-zA-Z]{2,6}$");
        rexpdom.setPatternSyntax(QRegExp::RegExp);

        //second regexp for ipv4 validation
        QRegExp rexp4("^^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
        rexp4.setPatternSyntax(QRegExp::RegExp);

        //third regexp for ipv6 validation
        QRegExp rexp6("(([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,7}:|([0-9a-fA-F]{1,4}:){1,6}:[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,5}(:[0-9a-fA-F]{1,4}){1,2}|([0-9a-fA-F]{1,4}:){1,4}(:[0-9a-fA-F]{1,4}){1,3}|([0-9a-fA-F]{1,4}:){1,3}(:[0-9a-fA-F]{1,4}){1,4}|([0-9a-fA-F]{1,4}:){1,2}(:[0-9a-fA-F]{1,4}){1,5}|[0-9a-fA-F]{1,4}:((:[0-9a-fA-F]{1,4}){1,6})|:((:[0-9a-fA-F]{1,4}){1,7}|:)|fe80:(:[0-9a-fA-F]{0,4}){0,4}%[0-9a-zA-Z]{1,}|::(ffff(:0{1,4}){0,1}:){0,1}((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])|([0-9a-fA-F]{1,4}:){1,4}:((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9]))");
        rexp6.setPatternSyntax(QRegExp::RegExp);

        return (rexpdom.exactMatch(target) or rexp4.exactMatch(target) or rexp6.exactMatch(target));
    }
}
