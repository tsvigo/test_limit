#include <QCoreApplication>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <QDebug>
#include <limits>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
// ULLONG_MAX = 18446744073709551615
//    LLONG_MAX = 9223372036854775807
//       LLONG_MIN = -9223372036854775808
    long long x=9223372036854775806;//9223372036854775807;
    long long y=9223372036854775806;//9223372036854775807;
      qDebug() <<x+y; // -2
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  //  long long d;
 //   long long f;

    if (
          x < std::numeric_limits <long long>::max () && x > std::numeric_limits <long long>::min () &&
      y < std::numeric_limits <long long>::max () && y > std::numeric_limits <long long>::min () &&
                y+x < std::numeric_limits <long long>::max () && y+x > std::numeric_limits <long long>::min ()

          )
  //  f = d;
          qDebug() <<x+y;
    else
  //  throw "out of range";
        qDebug() <<"out of range";
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return a.exec();
}
