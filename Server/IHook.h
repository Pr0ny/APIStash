/**
 * Project Api
 */


#ifndef _IHOOK_H
#define _IHOOK_H

class IHook {
public: 
    
    /**
     * @param IModule*
     */
    bool addModule(void IModule*);
    
    /**
     * @param IModule*
     */
    bool removeModule(void IModule*);
    
    const string& getName();
};

#endif //_IHOOK_H