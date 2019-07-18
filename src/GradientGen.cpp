//
//  GradientGen.cpp
//  ChemViz
//
//  Created by Jayson Haebich on 17/07/2019.
//

#include "GradientGen.h"

namespace ofxContentGen
{
    GradientGen::GradientGen( int w, int h, string name )
    {
        init( w, h, name );
    }
    
    void GradientGen::update()
    {
        fbo.begin();
        ofSetColor(colSelector[0].x*255.0,
                   colSelector[0].y*255.0,
                   colSelector[0].z*255.0);
        
        ofMesh temp;
        temp.setMode(OF_PRIMITIVE_TRIANGLES);
        temp.addVertex( ofPoint(0,0) );
        temp.addColor(ofColor(colSelector[0].x*255.0,
                              colSelector[0].y*255.0,
                              colSelector[0].z*255.0));
        temp.addVertex( ofPoint(width,0) );
        temp.addColor(ofColor(colSelector[1].x*255.0,
                              colSelector[1].y*255.0,
                              colSelector[1].z*255.0));
        temp.addVertex( ofPoint(width,height) );
        temp.addColor(ofColor(colSelector[2].x*255.0,
                              colSelector[2].y*255.0,
                              colSelector[2].z*255.0));
        
        
        temp.addVertex( ofPoint(width,height) );
        temp.addColor(ofColor(colSelector[2].x*255.0,
                              colSelector[2].y*255.0,
                              colSelector[2].z*255.0));
        
        temp.addVertex( ofPoint(0,height) );
        temp.addColor(  ofColor(colSelector[3].x*255.0,
                                colSelector[3].y*255.0,
                                colSelector[3].z*255.0));
        temp.addVertex( ofPoint(0,0) );
        temp.addColor(  ofColor(colSelector[0].x*255.0,
                                colSelector[0].y*255.0,
                                colSelector[0].z*255.0));
        temp.draw();
        
        
        fbo.end();
    }
    
    void   GradientGen::setJson( ofJson json )
    {
        for(int i = 0; i < 4; i++)
        {
            colSelector[i].x = json[i][0][0];
            colSelector[i].y = json[i][0][0];
            colSelector[i].z = json[i][0][0];
        }
    }
    
    ofJson GradientGen::getJson()
    {
        ofJson json = {
            {"name",name},
            {"width",width},
            {"height",height},
                            {
                                colSelector[0].x,
                                colSelector[0].y,
                                colSelector[0].z
                            },
                            {
                                colSelector[1].x,
                                colSelector[1].y,
                                colSelector[1].z
                            },
                            {
                                colSelector[2].x,
                                colSelector[2].y,
                                colSelector[2].z
                            },
                            {
                                colSelector[3].x,
                                colSelector[3].y,
                                colSelector[3].z
                            }
                      };
        
        return json;
    }
    void GradientGen::drawGui()
    {
    
        for(int i = 0; i < NUM_CORNERS;i++)
        {
            cout <<name<<endl;
            string label = "col"+ofToString(i) + name;
            cout <<label<<endl;
            ImGui::ColorEdit3(label.c_str(), (float*)&colSelector[i]);
        }
    }
    
}
