#ifndef WORLDTOSCREEN_H
#define WORLDTOSCREEN_H
#include <osg/Vec3d>
#include <osg/Vec3>
#include <osgViewer/View>

class myMatrixTransform
{
public:
    myMatrixTransform();

    osg::Vec3d WorldToScreen(osgViewer::View* view,osg::Vec3 worldpoint);
    osg::Vec3d screen2World(osgViewer::View* viewer, osg::Vec3 screenPoint);
    osg::Vec3d world2Screen(osgViewer::View* viewer, osg::Vec3 worldPoint);
    osg::Vec3d world2Camera(osgViewer::View* viewer, osg::Vec3 worldPoint);
    osg::Vec3d camera2World(osgViewer::View* viewer, osg::Vec3 cameraPoint);
    osg::Vec3d screen2Camera(osgViewer::View* viewer, osg::Vec3 screenPoint);
    osg::Vec3d camera2Screen(osgViewer::View* viewer, osg::Vec3 cameraPoint);

    static void Transform_Point (double out[4], const double m[16], const double in[4]);
};

#endif // WORLDTOSCREEN_H
