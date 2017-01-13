/**
 * Project Api
 */


#ifndef _AQUERY_H
#define _AQUERY_H

#include "IQuery.h"


class AQuery: public IQuery {
private: 
    /**
     * HTTPVersion is the version of HTTP used.
     */
    HTTPVersion _version;
    /**
     * _socket contains the Query's Socket
     */
    ISocket* _socket;
    /**
     * _header is the Query's header
     */
    map<string&; string&> _header;
};

#endif //_AQUERY_H