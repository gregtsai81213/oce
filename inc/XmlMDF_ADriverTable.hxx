// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_ADriverTable_HeaderFile
#define _XmlMDF_ADriverTable_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XmlMDF_ADriverTable.hxx>

#include <XmlMDF_TypeADriverMap.hxx>
#include <MMgt_TShared.hxx>
#include <Handle_XmlMDF_ADriver.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Type.hxx>
class XmlMDF_ADriver;
class XmlMDF_TypeADriverMap;
class Standard_Type;


//! A driver table is an object building links between
//! object types and object drivers. In the
//! translation process, a driver table is asked to
//! give a translation driver for each current object
//! to be translated.
class XmlMDF_ADriverTable : public MMgt_TShared
{

public:

  
  //! Creates a mutable ADriverTable from XmlMDF.
  Standard_EXPORT XmlMDF_ADriverTable();
  
  //! Sets a translation driver: <aDriver>.
  Standard_EXPORT   void AddDriver (const Handle(XmlMDF_ADriver)& anHDriver) ;
  
  //! Gets a map of drivers.
  Standard_EXPORT  const  XmlMDF_TypeADriverMap& GetDrivers()  const;
  
  //! Gets a driver <aDriver> according to <aType>
  //!
  //! Returns True if a driver is found; false otherwise.
  Standard_EXPORT   Standard_Boolean GetDriver (const Handle(Standard_Type)& aType, Handle(XmlMDF_ADriver)& anHDriver)  const;




  DEFINE_STANDARD_RTTI(XmlMDF_ADriverTable)

protected:




private: 


  XmlMDF_TypeADriverMap myMap;


};







#endif // _XmlMDF_ADriverTable_HeaderFile
