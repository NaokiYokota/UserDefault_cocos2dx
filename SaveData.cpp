//
//  SaveData.cpp
//
//
//  Created by albatrus on 2014/06/10.
//
//

#include "SaveData.h"
USING_NS_CC;



bool SaveData::init(){
    
    
    if (!CCNode::init()) {
        
        return false;
    }
    
    
    return false;
    
    
}


//char
void SaveData::saveInt(const char *key,int value){
    
    UserDefault *userDefalt = UserDefault::getInstance();
    userDefalt->setIntegerForKey(key, value);
    
    userDefalt ->flush();
    
}

void SaveData::saveString(const char *key,const __String *string){
    
    std::string hoge = string->_string;
    UserDefault *userDefalt = UserDefault::getInstance();
    userDefalt->setStringForKey(key, hoge);
    
    userDefalt ->flush();
    
}

void SaveData::saveBool(const char *key,bool _bolean){
    
    
    UserDefault *userDefalt = UserDefault::getInstance();
    userDefalt->setBoolForKey(key, _bolean);
    
    userDefalt ->flush();
}


#pragma mark -
#pragma mark ロード
int SaveData::loadInt(const char *key){
    
    UserDefault *userDefalt = UserDefault::getInstance();
    int _intvalue = userDefalt->getIntegerForKey(key);
    
    return _intvalue;
}

std::string SaveData::loadString(const char *key){
    
    UserDefault *userDefalt = UserDefault::getInstance();
    std::string string = userDefalt->getStringForKey(key);
    
    return string;
    
}

bool SaveData::loadBool(const char *key){
    
    UserDefault *userDefalt = UserDefault::getInstance();
    bool _boolean = userDefalt->getBoolForKey(key);
    
    return _boolean;
    
}
