#ifndef TileCuttCore_H
#define TileCuttCore_H

#include <QString>

#include "TileCuttInfo.h"
#include "TileCuttInfo.h"

#include <gdal_priv.h>
#include <osg/Shape>

class TileCuttCore
{
public:
    TileCuttCore();
    ~TileCuttCore();

    void setSource( const QString &source );
    void getRange();
    void getHierarchy();

    void getImage( const TileCuttInfo &info );
    void saveImage( const TileCuttInfo &info );

private:
    GDALDataset *_dataset;
    QString _source;
    float _left;
    float _right;
    float _top;
    float _bottom;
    int _minHierarchy;
    int _maxHierarchy;
    osg::Image *_img;
    osg::HeightField *_dem;

};

#endif // TileCuttCore_H