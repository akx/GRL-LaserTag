#ifndef OF_GEOM
#define OF_GEOM

#include "ofConstants.h"

#define  	CIRC_RESOLUTION		    22				// 22 pts for a circle...


// bg color
float * ofBgColorPtr();
void ofBackground(int r, int g, int b);

// user's access to settings (bgAuto, corner mode):
void 	ofSetBackgroundAuto(bool bManual);		// default is true
void 	ofSetRectMode(int mode);		// set the mode, either to OF_RECTMODE_CORNER or OF_RECTMODE_CENTER

// OF's access to settings (bgAuto, origin, corner mode):
bool 	ofbClearBg();
int 	ofGetRectMode();				// default is OF_RECTMODE_CORNER



// geometry 
void ofTriangle(float x1,float y1,float x2,float y2,float x3, float y3);
void ofCircle(float x,float y, float radius);
void ofEllipse(float x, float y, float width, float height);
void ofLine(float x1,float y1,float x2,float y2);
void ofRect(float x1,float y1,float w, float h);
void ofSetCircleResolution(int res);  		// if there 22 is a problem, you can change it here

void ofCurve(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
void ofBezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);


// drawing options
void ofNoFill();
void ofFill();

// color options
void ofSetColor(int r, int g, int b); // 0-255
void ofSetColor(int r, int g, int b, int a); // 0-255
void ofSetColor(int hexColor); // hex, like web 0xFF0033;

// transparency
void ofEnableAlphaBlending();  // this just turns on and off opengl blending, the common mode
void ofDisableAlphaBlending();

// smooth 
void ofEnableSmoothing();
void ofDisableSmoothing();

// bitmapped type
// ** note, this uses glDrawPixels and may be S L 0 W on some graphics cards
void ofDrawBitmapString(string textString, float x, float y);

// screen coordinate things...
void ofSetupScreen();


void ofCurveVertex(float x, float y);
void ofBezierVertex(float x1, float y1, float x2, float y2, float x3, float y3);

	

// for polygons
void ofSetPolyMode(int mode);	
void ofBeginShape();
void ofVertex(float x, float y);
void ofEndShape(bool bClose = false);
void ofNextContour(bool bClose = false);  // for multi contour shapes!

#endif
