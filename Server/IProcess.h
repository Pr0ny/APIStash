/**
 * Project Api
 */


#ifndef _IPROCESS_H
#define _IPROCESS_H

class IProcess {
public: 
    
    /**
     * @param IRequest*
     */
    bool execute(void IRequest*);
    
    void setSocket();
};

#endif //_IPROCESS_H