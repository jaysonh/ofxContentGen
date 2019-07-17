//
//  GradientGen.h
//  ChemViz
//
//  Created by Jayson Haebich on 17/07/2019.
//

#pragma once
#include "ofxContentGen.h"

namespace ofxContentGen
{
    class GradientGen : public ofxContentGenBase
    {
    public:
        
        void update();
        
    private:
        static const int NUM_CORNERS = 4;
        
        ofColor col[NUM_CORNERS];
        
    };
}
