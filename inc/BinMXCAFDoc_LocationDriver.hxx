// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMXCAFDoc_LocationDriver_HeaderFile
#define _BinMXCAFDoc_LocationDriver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_BinMXCAFDoc_LocationDriver.hxx>

#include <BinTools_LocationSetPtr.hxx>
#include <BinMDF_ADriver.hxx>
#include <Handle_CDM_MessageDriver.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Standard_Boolean.hxx>
#include <BinObjMgt_RRelocationTable.hxx>
#include <BinObjMgt_SRelocationTable.hxx>
class CDM_MessageDriver;
class TDF_Attribute;
class BinObjMgt_Persistent;
class TopLoc_Location;



class BinMXCAFDoc_LocationDriver : public BinMDF_ADriver
{

public:

  
  Standard_EXPORT BinMXCAFDoc_LocationDriver(const Handle(CDM_MessageDriver)& theMsgDriver);
  
  Standard_EXPORT virtual   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT virtual   Standard_Boolean Paste (const BinObjMgt_Persistent& theSource, const Handle(TDF_Attribute)& theTarget, BinObjMgt_RRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT virtual   void Paste (const Handle(TDF_Attribute)& theSource, BinObjMgt_Persistent& theTarget, BinObjMgt_SRelocationTable& theRelocTable)  const;
  
  Standard_EXPORT   Standard_Boolean Translate (const BinObjMgt_Persistent& theSource, TopLoc_Location& theLoc, BinObjMgt_RRelocationTable& theMap)  const;
  
  //! Translate transient location to storable
  Standard_EXPORT   void Translate (const TopLoc_Location& theLoc, BinObjMgt_Persistent& theTarget, BinObjMgt_SRelocationTable& theMap)  const;
  
      void SetSharedLocations (const BinTools_LocationSetPtr& theLocations) ;




  DEFINE_STANDARD_RTTI(BinMXCAFDoc_LocationDriver)

protected:




private: 


  BinTools_LocationSetPtr myLocations;


};


#include <BinMXCAFDoc_LocationDriver.lxx>





#endif // _BinMXCAFDoc_LocationDriver_HeaderFile
