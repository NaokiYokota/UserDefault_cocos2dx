//
//  SaveData.h
//
//
//  Created by albatrus on 2014/06/10.
//
//

#ifndef __GitTutorial__SaveData__
#define __GitTutorial__SaveData__

#include "cocos2d.h"

class SaveData : public cocos2d::Node {
    
    
public:
    
    virtual  bool init();
    
    static void saveInt(const char *key,int value);
    static void saveString(const char *key,const cocos2d::__String *string);
    static void saveBool(const char *key,bool _bolean);
    
    static int loadInt(const char *key);
    static std::string loadString(const char *key);
    static bool loadBool(const char *key);
    
    
};

#endif /* defined(__GitTutorial__SaveData__) */
