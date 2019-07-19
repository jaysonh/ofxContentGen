//
//  ofxContentGenBase.cpp
//  ChemViz
//
//  Created by Jayson Haebich on 17/07/2019.
//

#include "ofxContentGenBase.h"

namespace ofxContentGen
{
    void ofxContentGenBase::init( int w, int h, string n)
    {
        width  = w;
        height = h;
        name   = n;
        cout << "1" << endl; 
	fbo.allocate(width,height);
        cout << "2"<<endl; 
    } 
    ofFbo ofxContentGenBase::getFbo()
    {
        return fbo;
    }
    
    ofTexture ofxContentGenBase::getTexture()
    {
        return fbo.getTexture();
    }
}
