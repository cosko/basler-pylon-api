/*
 * UniZG - FER
 * University of Zagreb (http://www.unizg.hr/)
 * Faculty of Electrical Engineering and Computing (http://www.fer.unizg.hr/)
 * Unska 3, HR-10000 Zagreb, Croatia
 * 
 * (c) 2015-2021 UniZG, Zagreb. All rights reserved.
 * (c) 2015-2021 FER, Zagreb. All rights reserved.
 */

/*!
  \file   BatchAcquisitionStdAfx.h
  \brief  Use this file to include precompiled headers.

  \author Tomislav Petkovic
  \date   2021-04-21
*/


#ifndef __BATCHACQUISITIONSTDAFX_H
#define __BATCHACQUISITIONSTDAFX_H

#pragma once

#define WIN32_LEAN_AND_MEAN

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#endif /* _DEBUG */


#include <windows.h>

#include "BatchAcquisitionTargetVer.h"


/* Microsoft libraries. */

#pragma warning(push)
#pragma warning(disable: 4995)

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <process.h>
#include <math.h>

#include <cassert>
#include <cfloat>
#include <cmath>
#include <vector>
#include <list>
#include <string>
#include <queue>
#include <map>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <numeric>

#include <DXGI.h>
#include <D2D1.h>
#include <D3D11.h>
#include <Dwrite.h>

#include <Wincodec.h>
#include <Mmsystem.h>
#include <Windowsx.h>
#include <Shobjidl.h>
#include <xmllite.h>

#pragma warning(pop)

#pragma comment(lib, "DXGI.lib")
#pragma comment(lib, "D2D1.lib")
#pragma comment(lib, "D3D11.lib")

#pragma comment(lib, "Windowscodecs.lib")
#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "xmllite.lib")



/* Teledyne DALSA Sapera LT SDK */
#ifdef HAVE_SAPERA_SDK

#pragma warning(push)
#pragma warning(disable: 4005)

#include <sapclassbasic.h>
#include <corapi.h>

#pragma warning(pop)

#else

#include <strsafe.h>

#endif /* HAVE_SAPERA_SDK */



/* PointGrey/FLIR FlyCapture2 SDK */
#ifdef HAVE_FLYCAPTURE2_SDK

#pragma warning(push)
#pragma warning(disable: 4005)

#include <FlyCapture2.h>

#pragma warning(pop)

#define USE_FLYCAPTURE2_GUI
#ifdef USE_FLYCAPTURE2_GUI
#include <FlyCapture2GUI.h>
#endif /* USE_FLYCAPTURE2_GUI */

#endif /* HAVE_FLYCAPTURE2_SDK */



/* Basler Pylon SDK */
#ifdef HAVE_PYLON_SDK

// Note that PylonIncludes.h automatically adds libs required for linking.
#include <pylon/PylonIncludes.h>

#endif /* HAVE_PYLON_SDK */



/* PointGrey/FLIR Spinnaker SDK */
//#define HAVE_SPINNAKER_SDK
#ifdef HAVE_SPINNAKER_SDK

#include <Spinnaker.h>

#ifdef DEBUG

#pragma comment(lib, "Spinnaker_v140.lib")

#else

#pragma comment(lib, "Spinnakerd_v140.lib")

#endif /* DEBUG */

#endif /* HAVE_SPINNAKER_SDK */



/* OpenCV 4.5.2 */

//#if defined(DEBUG) && defined(free)
#pragma push_macro("free")
#define OpenCV_C2059_C4003_WORKAROUND
#undef free
//#endif

#include <opencv2/opencv.hpp>

#ifdef OpenCV_C2059_C4003_WORKAROUND
#pragma pop_macro("free")
#endif /* OpenCV_C2059_C4003_WORKAROUND */


/* VTK 9.0 */
#include <vtkAutoInit.h>
VTK_MODULE_INIT(vtkRenderingOpenGL2);
VTK_MODULE_INIT(vtkInteractionStyle);
VTK_MODULE_INIT(vtkRenderingFreeType);

#include <vtkActor.h>
#include <vtkBox.h>
#include <vtkCallbackCommand.h>
#include <vtkCamera.h>
#include <vtkCellArray.h>
#include <vtkCellPicker.h>
#include <vtkCommand.h>
#include <vtkContourFilter.h>
#include <vtkDataArray.h>
#include <vtkDataSetMapper.h>
#include <vtkDoubleArray.h>
#include <vtkErrorCode.h>
#include <vtkFloatArray.h>
#include <vtkInteractorStyleTrackballCamera.h> 
#include <vtkImageCast.h>
#include <vtkImageData.h>
#include <vtkLine.h>
#include <vtkLineRepresentation.h>
#include <vtkLineWidget.h>
#include <vtkLineWidget2.h>
#include <vtkLookupTable.h>
#include <vtkMaskPoints.h>
#include <vtkOutlineFilter.h>
#include <vtkPlaneSource.h>
#include <vtkPointData.h>
#include <vtkPointHandleRepresentation3D.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkPolyLine.h>
#include <vtkQuad.h>
#include <vtkPolygon.h>
#include <vtkProperty.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkTextActor.h>
#include <vtkTextProperty.h>
#include <vtkTextRenderer.h>
#include <vtkTexture.h>
#include <vtkTimeStamp.h>
#include <vtkUnsignedCharArray.h>
#include <vtkUnsignedShortArray.h>
#include <vtkUnstructuredGrid.h>
#include <vtkSliderWidget.h>
#include <vtkSliderRepresentation2D.h>
#include <vtkSurfaceReconstructionFilter.h>
#include <vtkObjectFactory.h>
#include <vtkVertexGlyphFilter.h>
#include <vtkSmartPointer.h>
#include <vtkVRMLExporter.h>
#include <vtkX3DExporter.h>
#include <vtkOBJExporter.h>
#include <vtkSTLWriter.h>

#endif /* !__BATCHACQUISITIONSTDAFX_H */