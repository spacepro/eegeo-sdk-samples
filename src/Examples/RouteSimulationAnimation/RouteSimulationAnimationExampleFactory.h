//
//  RouteSimulationAnimationExampleFactory.h
//  ExampleApp
//
//  Created by Scott on 21/05/2014.
//  Copyright (c) 2014 eeGeo. All rights reserved.
//

#ifndef __ExampleApp__RouteSimulationAnimationExampleFactory__
#define __ExampleApp__RouteSimulationAnimationExampleFactory__

#include "IExampleFactory.h"
#include "IExample.h"
#include "EegeoWorld.h"

namespace Examples
{
    class RouteSimulationAnimationExampleFactory : public IExampleFactory
    {
        Eegeo::EegeoWorld& m_world;
        Eegeo::Camera::GlobeCamera::GlobeCameraController& m_globeCameraController;
        
    public:
        RouteSimulationAnimationExampleFactory(Eegeo::EegeoWorld& world,
                                               Eegeo::Camera::GlobeCamera::GlobeCameraController& globeCameraController);
        
        IExample* CreateExample() const;
    };
}

#endif /* defined(__ExampleApp__RouteSimulationAnimationExampleFactory__) */