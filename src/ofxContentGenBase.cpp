//
//  ofxContentGenBase.cpp
//  ChemViz
//
//  Created by Jayson Haebich on 17/07/2019.
//

#include "ofxContentGenBase.h"

namespace ofxContentGen
{
    void ofxContentGenBase::init( int w, int h)
    {
        width  = w;
        height = h;
        
        fbo.allocate(width,height);
    }
    void ofxContentGenBase::drawGui()
    {
        
    }
    
    
    ofTexture ofxContentGenBase::getTexture()
    {
        return fbo.getTexture();
    }
}
