<a href="http://www.eegeo.com/">
    <img src="http://cdn2.eegeo.com/wp-content/uploads/2016/03/eegeo_logo_quite_big.png" alt="eeGeo Logo" title="eegeo" align="right" height="80px" />
</a>

# eeGeo SDK Samples

![eeGeo](http://cdn2.eegeo.com/wp-content/uploads/2016/03/readme-banner.jpg)

* [Support](#support)
* [Getting Started](#getting-started)
* [SDK Samples](#sdk-samples)
* [SDK Documentation](#sdk-documentation)
* [License](#license)

The [eeGeo SDK](http://www.eegeo.com/) is a cross-platform, OpenGL-based library for displaying beautiful, engaging 3D maps.

### What does the eeGeo mapping platform have to offer?

* Detailed 3D coverage for the whole of Canada, Great Britain, the United States, and more
* Indoor maps in full 3D
* Flexible themes, allowing you to change the style of your map
* Customisable pins and markers
* Support for custom 3D models and animation
* Compatibility with iOS, Android, Windows, and OS X
* Continuous deployment, meaning you get the latest features as they're developed

This repository demonstrates a selection of individual features of the eeGeo SDK on both iOS and Android.

## Support

If you have any questions, bug reports, or feature requests, feel free to submit to the [issue tracker](https://github.com/eegeo/eegeo-sdk-samples/issues) for this repository.

## Getting Started

1.  Clone this repo: `git clone https://github.com/eegeo/eegeo-sdk-samples.git`
2.  Obtain an [eeGeo API key](https://www.eegeo.com/developers/apikeys) and place it in the [ApiKey.h](https://github.com/eegeo/eegeo-sdk-samples/blob/master/src/Examples/ApiKey.h#L10) file.
3.  See table below to see detailed instructions for building the app.

Platform                                		| Languages
------------------------------------------------|-----------------
[Getting started on Android](/android#readme) 	| C++, Java
[Getting started on iOS](/ios#readme)           | C++, Objective-C

### eeGeo API Key 

In order to use the eeGeo 3D Maps SDK, you must sign up for a free developer account at https://www.eegeo.com/developers. After signing up, you'll be able to create an [API key](https://www.eegeo.com/developers/apikeys) for your apps. 

To run this example app, you must place the API key in the [ApiKey.h](https://github.com/eegeo/eegeo-sdk-samples/blob/master/src/Examples/ApiKey.h#L10) file.

If you are creating a new app, or integrating eeGeo 3D Maps into an existing app, the API key should be passed as the first argument to the constructor of [EegeoWorld](http://cdn1.eegeo.com/docs/mobile-sdk/class_eegeo_1_1_eegeo_world.html).

## SDK Samples

When running the application, you can use the "Next" and "Previous" buttons to cycle through the samples, or tap the name of the example to open a drop-down menu.

Each example demonstrates a different feature of the SDK. You can find the source for them all in the [src/Examples](https://github.com/eegeo/eegeo-sdk-samples/tree/master/src/Examples) directory.

For a demonstration of a complete application, see the [eeGeo Example App](https://github.com/eegeo/eegeo-example-app). It displays a variety of SDK features and is a good starting point to learn how the SDK works.

## SDK Documentation

See the [eeGeo API reference](http://cdn1.eegeo.com/docs/mobile-sdk/namespaces.html) for documentation on the individual SDK types.

## License

The eeGeo 3D Maps SDK Samples is released under the Simplified BSD License. See the [LICENSE.md](https://github.com/eegeo/eegeo-sdk-samples/blob/master/LICENSE.md) file for details.