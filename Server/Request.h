/**
 * Project Api
 */


#ifndef _REQUEST_H
#define _REQUEST_H

#include "AQuery.h"


class Request: public AQuery {
public: 
    
    /**
     * getMethod() returns the method of the Request
     */
    eMethod getMethod();
    
    /**
     * getUri() returns the complete Uri
     */
    string getUri();
    
    /**
     * setMethod() allows to set the method's type of the Request
     * @param eMethod
     */
    void setMethod(void eMethod);
    
    /**
     * setUri(const string&) allows to set the Uri of the Request
     * @param const string&
     */
    void setUri(void const string&);
    
    /**
     * setBody(const string &) allows to set all contents in _body
     * @param const string&
     */
    void setBody(void const string&);
private: 
    /**
     * _method is an enum type used to know the request's method
     */
    eMethod _method;
    /**
     * _uri contains the complete uri's Request
     */
    string _uri;
    /**
     * _version is the version of HTTP
     */
    HTTPVersion _version;
    /**
     * _body contains all the contents of the request
     */
    char* _body;
};

#endif //_REQUEST_H