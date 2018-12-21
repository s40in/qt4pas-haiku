#ifndef QLCLNETWORKCOOKIEJAR_H
#define QLCLNETWORKCOOKIEJAR_H

#include <QNetworkCookie>

class QLCLNetworkCookieJar  : public QNetworkCookieJar {

public:

  //==================================================================================== 
  QLCLNetworkCookieJar(QObject *parent = 0) : QNetworkCookieJar(parent) {
  };

  //==================================================================================== 
  void setRawCookies(const char* rawCookies) {
    setAllCookies(QNetworkCookie::parseCookies(QByteArray(rawCookies)));
  }

  //==================================================================================== 
  void getRawCookies(QByteArray * rawCookies) {
    foreach (QNetworkCookie cookie, allCookies()) {
      *rawCookies += cookie.toRawForm() + QByteArray(" \n ");
    }   
  }

};

#endif
