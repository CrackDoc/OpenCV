#ifndef OpenCVExport_h__
#define OpenCVExport_h__

#if defined(WIN32)
#ifdef OpenCV_EXPORTS
#define OpenCV_EXPORT __declspec(dllexport)
#else
#define  OpenCV_EXPORT __declspec(dllimport)
#endif

#pragma warning( disable: 4251 )

#elif __linux__
#define OpenCV_EXPORT

#else
#define OpenCV_EXPORT 
#endif
#endif // OpenCVExport_h__
