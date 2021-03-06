// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS_ClearMode_HeaderFile
#define _AIS_ClearMode_HeaderFile

#include <Standard_PrimitiveTypes.hxx>

//! Declares which entities in an opened local context
//! are to be cleared of mode settings. Temporary
//! graphic presentations such as those for sub-shapes,
//! for example, are only created for the selection
//! process. By means of these enumerations, they can
//! be cleared from local context.
enum AIS_ClearMode
{
AIS_CM_All,
AIS_CM_Interactive,
AIS_CM_Filters,
AIS_CM_StandardModes,
AIS_CM_TemporaryShapePrs
};

#endif // _AIS_ClearMode_HeaderFile
