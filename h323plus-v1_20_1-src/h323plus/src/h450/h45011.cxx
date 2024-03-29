//
// h45011.cxx
//
// Code automatically generated by asnparse.
//

#ifdef P_USE_PRAGMA
#pragma implementation "h45011.h"
#endif

#include <ptlib.h>
#include "h450/h45011.h"

#define new PNEW


#if ! H323_DISABLE_H45011



#ifndef PASN_NOPRINTON
const static PASN_Names Names_H45011_H323CallIntrusionOperations[]={
        {"callIntrusionRequest",43}
       ,{"callIntrusionGetCIPL",44}
       ,{"callIntrusionIsolate",45}
       ,{"callIntrusionForcedRelease",46}
       ,{"callIntrusionWOBRequest",47}
       ,{"callIntrusionSilentMonitor",116}
       ,{"callIntrusionNotification",117}
};
#endif
//
// H323CallIntrusionOperations
//

H45011_H323CallIntrusionOperations::H45011_H323CallIntrusionOperations(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Enumeration(tag, tagClass, 117, FALSE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_H45011_H323CallIntrusionOperations,7
#endif
    )
{
}


H45011_H323CallIntrusionOperations & H45011_H323CallIntrusionOperations::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * H45011_H323CallIntrusionOperations::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_H323CallIntrusionOperations::Class()), PInvalidCast);
#endif
  return new H45011_H323CallIntrusionOperations(*this);
}


//
// CICapabilityLevel
//

H45011_CICapabilityLevel::H45011_CICapabilityLevel(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Integer(tag, tagClass)
{
}


H45011_CICapabilityLevel & H45011_CICapabilityLevel::operator=(int v)
{
  SetValue(v);
  return *this;
}


H45011_CICapabilityLevel & H45011_CICapabilityLevel::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * H45011_CICapabilityLevel::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CICapabilityLevel::Class()), PInvalidCast);
#endif
  return new H45011_CICapabilityLevel(*this);
}


//
// CIProtectionLevel
//

H45011_CIProtectionLevel::H45011_CIProtectionLevel(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Integer(tag, tagClass)
{
}


H45011_CIProtectionLevel & H45011_CIProtectionLevel::operator=(int v)
{
  SetValue(v);
  return *this;
}


H45011_CIProtectionLevel & H45011_CIProtectionLevel::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * H45011_CIProtectionLevel::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIProtectionLevel::Class()), PInvalidCast);
#endif
  return new H45011_CIProtectionLevel(*this);
}



#ifndef PASN_NOPRINTON
const static PASN_Names Names_H45011_CIStatusInformation[]={
      {"callIntrusionImpending",0}
     ,{"callIntruded",1}
     ,{"callIsolated",2}
     ,{"callForceReleased",3}
     ,{"callIntrusionComplete",4}
     ,{"callIntrusionEnd",5}
};
#endif
//
// CIStatusInformation
//

H45011_CIStatusInformation::H45011_CIStatusInformation(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Choice(tag, tagClass, 6, TRUE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_H45011_CIStatusInformation,6
#endif
)
{
}


BOOL H45011_CIStatusInformation::CreateObject()
{
  choice = (tag <= e_callIntrusionEnd) ? new PASN_Null() : NULL;
  return choice != NULL;
}


PObject * H45011_CIStatusInformation::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIStatusInformation::Class()), PInvalidCast);
#endif
  return new H45011_CIStatusInformation(*this);
}


#ifndef PASN_NOPRINTON
const static PASN_Names Names_H45011_CallIntrusionErrors[]={
        {"notBusy",1009}
       ,{"temporarilyUnavailable",1000}
       ,{"notAuthorized",1007}
};
#endif
//
// CallIntrusionErrors
//

H45011_CallIntrusionErrors::H45011_CallIntrusionErrors(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Enumeration(tag, tagClass, 1009, FALSE
#ifndef PASN_NOPRINTON
    ,(const PASN_Names *)Names_H45011_CallIntrusionErrors,3
#endif
    )
{
}


H45011_CallIntrusionErrors & H45011_CallIntrusionErrors::operator=(unsigned v)
{
  SetValue(v);
  return *this;
}


PObject * H45011_CallIntrusionErrors::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CallIntrusionErrors::Class()), PInvalidCast);
#endif
  return new H45011_CallIntrusionErrors(*this);
}


//
// ArrayOf_MixedExtension
//

H45011_ArrayOf_MixedExtension::H45011_ArrayOf_MixedExtension(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * H45011_ArrayOf_MixedExtension::CreateObject() const
{
  return new H4504_MixedExtension;
}


H4504_MixedExtension & H45011_ArrayOf_MixedExtension::operator[](PINDEX i) const
{
  return (H4504_MixedExtension &)array[i];
}


PObject * H45011_ArrayOf_MixedExtension::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_ArrayOf_MixedExtension::Class()), PInvalidCast);
#endif
  return new H45011_ArrayOf_MixedExtension(*this);
}


//
// CIRequestArg
//

H45011_CIRequestArg::H45011_CIRequestArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIRequestArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+20) << "ciCapabilityLevel = " << setprecision(indent) << m_ciCapabilityLevel << '\n';
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIRequestArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIRequestArg), PInvalidCast);
#endif
  const H45011_CIRequestArg & other = (const H45011_CIRequestArg &)obj;

  Comparison result;

  if ((result = m_ciCapabilityLevel.Compare(other.m_ciCapabilityLevel)) != EqualTo)
    return result;
  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIRequestArg::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ciCapabilityLevel.GetObjectLength();
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIRequestArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ciCapabilityLevel.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIRequestArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ciCapabilityLevel.Encode(strm);
  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIRequestArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIRequestArg::Class()), PInvalidCast);
#endif
  return new H45011_CIRequestArg(*this);
}


//
// CIRequestRes
//

H45011_CIRequestRes::H45011_CIRequestRes(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_resultExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIRequestRes::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+22) << "ciStatusInformation = " << setprecision(indent) << m_ciStatusInformation << '\n';
  if (HasOptionalField(e_resultExtension))
    strm << setw(indent+18) << "resultExtension = " << setprecision(indent) << m_resultExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIRequestRes::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIRequestRes), PInvalidCast);
#endif
  const H45011_CIRequestRes & other = (const H45011_CIRequestRes &)obj;

  Comparison result;

  if ((result = m_ciStatusInformation.Compare(other.m_ciStatusInformation)) != EqualTo)
    return result;
  if ((result = m_resultExtension.Compare(other.m_resultExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIRequestRes::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ciStatusInformation.GetObjectLength();
  if (HasOptionalField(e_resultExtension))
    length += m_resultExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIRequestRes::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ciStatusInformation.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_resultExtension) && !m_resultExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIRequestRes::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ciStatusInformation.Encode(strm);
  if (HasOptionalField(e_resultExtension))
    m_resultExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIRequestRes::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIRequestRes::Class()), PInvalidCast);
#endif
  return new H45011_CIRequestRes(*this);
}


//
// CIGetCIPLOptArg
//

H45011_CIGetCIPLOptArg::H45011_CIGetCIPLOptArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIGetCIPLOptArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIGetCIPLOptArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIGetCIPLOptArg), PInvalidCast);
#endif
  const H45011_CIGetCIPLOptArg & other = (const H45011_CIGetCIPLOptArg &)obj;

  Comparison result;

  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIGetCIPLOptArg::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIGetCIPLOptArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIGetCIPLOptArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIGetCIPLOptArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIGetCIPLOptArg::Class()), PInvalidCast);
#endif
  return new H45011_CIGetCIPLOptArg(*this);
}


//
// CIGetCIPLRes
//

H45011_CIGetCIPLRes::H45011_CIGetCIPLRes(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 2, TRUE, 0)
{
  m_resultExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIGetCIPLRes::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+20) << "ciProtectionLevel = " << setprecision(indent) << m_ciProtectionLevel << '\n';
  if (HasOptionalField(e_silentMonitoringPermitted))
    strm << setw(indent+28) << "silentMonitoringPermitted = " << setprecision(indent) << m_silentMonitoringPermitted << '\n';
  if (HasOptionalField(e_resultExtension))
    strm << setw(indent+18) << "resultExtension = " << setprecision(indent) << m_resultExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIGetCIPLRes::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIGetCIPLRes), PInvalidCast);
#endif
  const H45011_CIGetCIPLRes & other = (const H45011_CIGetCIPLRes &)obj;

  Comparison result;

  if ((result = m_ciProtectionLevel.Compare(other.m_ciProtectionLevel)) != EqualTo)
    return result;
  if ((result = m_silentMonitoringPermitted.Compare(other.m_silentMonitoringPermitted)) != EqualTo)
    return result;
  if ((result = m_resultExtension.Compare(other.m_resultExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIGetCIPLRes::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ciProtectionLevel.GetObjectLength();
  if (HasOptionalField(e_silentMonitoringPermitted))
    length += m_silentMonitoringPermitted.GetObjectLength();
  if (HasOptionalField(e_resultExtension))
    length += m_resultExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIGetCIPLRes::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ciProtectionLevel.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_silentMonitoringPermitted) && !m_silentMonitoringPermitted.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_resultExtension) && !m_resultExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIGetCIPLRes::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ciProtectionLevel.Encode(strm);
  if (HasOptionalField(e_silentMonitoringPermitted))
    m_silentMonitoringPermitted.Encode(strm);
  if (HasOptionalField(e_resultExtension))
    m_resultExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIGetCIPLRes::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIGetCIPLRes::Class()), PInvalidCast);
#endif
  return new H45011_CIGetCIPLRes(*this);
}


//
// CIIsOptArg
//

H45011_CIIsOptArg::H45011_CIIsOptArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIIsOptArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIIsOptArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIIsOptArg), PInvalidCast);
#endif
  const H45011_CIIsOptArg & other = (const H45011_CIIsOptArg &)obj;

  Comparison result;

  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIIsOptArg::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIIsOptArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIIsOptArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIIsOptArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIIsOptArg::Class()), PInvalidCast);
#endif
  return new H45011_CIIsOptArg(*this);
}


//
// CIIsOptRes
//

H45011_CIIsOptRes::H45011_CIIsOptRes(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_resultExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIIsOptRes::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_resultExtension))
    strm << setw(indent+18) << "resultExtension = " << setprecision(indent) << m_resultExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIIsOptRes::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIIsOptRes), PInvalidCast);
#endif
  const H45011_CIIsOptRes & other = (const H45011_CIIsOptRes &)obj;

  Comparison result;

  if ((result = m_resultExtension.Compare(other.m_resultExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIIsOptRes::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_resultExtension))
    length += m_resultExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIIsOptRes::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_resultExtension) && !m_resultExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIIsOptRes::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_resultExtension))
    m_resultExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIIsOptRes::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIIsOptRes::Class()), PInvalidCast);
#endif
  return new H45011_CIIsOptRes(*this);
}


//
// CIFrcRelArg
//

H45011_CIFrcRelArg::H45011_CIFrcRelArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIFrcRelArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+20) << "ciCapabilityLevel = " << setprecision(indent) << m_ciCapabilityLevel << '\n';
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIFrcRelArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIFrcRelArg), PInvalidCast);
#endif
  const H45011_CIFrcRelArg & other = (const H45011_CIFrcRelArg &)obj;

  Comparison result;

  if ((result = m_ciCapabilityLevel.Compare(other.m_ciCapabilityLevel)) != EqualTo)
    return result;
  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIFrcRelArg::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ciCapabilityLevel.GetObjectLength();
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIFrcRelArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ciCapabilityLevel.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIFrcRelArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ciCapabilityLevel.Encode(strm);
  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIFrcRelArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIFrcRelArg::Class()), PInvalidCast);
#endif
  return new H45011_CIFrcRelArg(*this);
}


//
// CIFrcRelOptRes
//

H45011_CIFrcRelOptRes::H45011_CIFrcRelOptRes(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_resultExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIFrcRelOptRes::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_resultExtension))
    strm << setw(indent+18) << "resultExtension = " << setprecision(indent) << m_resultExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIFrcRelOptRes::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIFrcRelOptRes), PInvalidCast);
#endif
  const H45011_CIFrcRelOptRes & other = (const H45011_CIFrcRelOptRes &)obj;

  Comparison result;

  if ((result = m_resultExtension.Compare(other.m_resultExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIFrcRelOptRes::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_resultExtension))
    length += m_resultExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIFrcRelOptRes::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_resultExtension) && !m_resultExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIFrcRelOptRes::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_resultExtension))
    m_resultExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIFrcRelOptRes::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIFrcRelOptRes::Class()), PInvalidCast);
#endif
  return new H45011_CIFrcRelOptRes(*this);
}


//
// CIWobOptArg
//

H45011_CIWobOptArg::H45011_CIWobOptArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIWobOptArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIWobOptArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIWobOptArg), PInvalidCast);
#endif
  const H45011_CIWobOptArg & other = (const H45011_CIWobOptArg &)obj;

  Comparison result;

  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIWobOptArg::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIWobOptArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIWobOptArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIWobOptArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIWobOptArg::Class()), PInvalidCast);
#endif
  return new H45011_CIWobOptArg(*this);
}


//
// CIWobOptRes
//

H45011_CIWobOptRes::H45011_CIWobOptRes(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_resultExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CIWobOptRes::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_resultExtension))
    strm << setw(indent+18) << "resultExtension = " << setprecision(indent) << m_resultExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CIWobOptRes::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CIWobOptRes), PInvalidCast);
#endif
  const H45011_CIWobOptRes & other = (const H45011_CIWobOptRes &)obj;

  Comparison result;

  if ((result = m_resultExtension.Compare(other.m_resultExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CIWobOptRes::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_resultExtension))
    length += m_resultExtension.GetObjectLength();
  return length;
}


BOOL H45011_CIWobOptRes::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_resultExtension) && !m_resultExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CIWobOptRes::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_resultExtension))
    m_resultExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CIWobOptRes::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CIWobOptRes::Class()), PInvalidCast);
#endif
  return new H45011_CIWobOptRes(*this);
}


//
// CISilentArg
//

H45011_CISilentArg::H45011_CISilentArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 2, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CISilentArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+20) << "ciCapabilityLevel = " << setprecision(indent) << m_ciCapabilityLevel << '\n';
  if (HasOptionalField(e_specificCall))
    strm << setw(indent+15) << "specificCall = " << setprecision(indent) << m_specificCall << '\n';
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CISilentArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CISilentArg), PInvalidCast);
#endif
  const H45011_CISilentArg & other = (const H45011_CISilentArg &)obj;

  Comparison result;

  if ((result = m_ciCapabilityLevel.Compare(other.m_ciCapabilityLevel)) != EqualTo)
    return result;
  if ((result = m_specificCall.Compare(other.m_specificCall)) != EqualTo)
    return result;
  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CISilentArg::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ciCapabilityLevel.GetObjectLength();
  if (HasOptionalField(e_specificCall))
    length += m_specificCall.GetObjectLength();
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CISilentArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ciCapabilityLevel.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_specificCall) && !m_specificCall.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CISilentArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ciCapabilityLevel.Encode(strm);
  if (HasOptionalField(e_specificCall))
    m_specificCall.Encode(strm);
  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CISilentArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CISilentArg::Class()), PInvalidCast);
#endif
  return new H45011_CISilentArg(*this);
}


//
// CISilentOptRes
//

H45011_CISilentOptRes::H45011_CISilentOptRes(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_resultExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CISilentOptRes::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  if (HasOptionalField(e_resultExtension))
    strm << setw(indent+18) << "resultExtension = " << setprecision(indent) << m_resultExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CISilentOptRes::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CISilentOptRes), PInvalidCast);
#endif
  const H45011_CISilentOptRes & other = (const H45011_CISilentOptRes &)obj;

  Comparison result;

  if ((result = m_resultExtension.Compare(other.m_resultExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CISilentOptRes::GetDataLength() const
{
  PINDEX length = 0;
  if (HasOptionalField(e_resultExtension))
    length += m_resultExtension.GetObjectLength();
  return length;
}


BOOL H45011_CISilentOptRes::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (HasOptionalField(e_resultExtension) && !m_resultExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CISilentOptRes::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  if (HasOptionalField(e_resultExtension))
    m_resultExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CISilentOptRes::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CISilentOptRes::Class()), PInvalidCast);
#endif
  return new H45011_CISilentOptRes(*this);
}


//
// CINotificationArg
//

H45011_CINotificationArg::H45011_CINotificationArg(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 1, TRUE, 0)
{
  m_argumentExtension.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
}


#ifndef PASN_NOPRINTON
void H45011_CINotificationArg::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+22) << "ciStatusInformation = " << setprecision(indent) << m_ciStatusInformation << '\n';
  if (HasOptionalField(e_argumentExtension))
    strm << setw(indent+20) << "argumentExtension = " << setprecision(indent) << m_argumentExtension << '\n';
  strm << setw(indent-1) << setprecision(indent-2) << "}";
}
#endif


PObject::Comparison H45011_CINotificationArg::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, H45011_CINotificationArg), PInvalidCast);
#endif
  const H45011_CINotificationArg & other = (const H45011_CINotificationArg &)obj;

  Comparison result;

  if ((result = m_ciStatusInformation.Compare(other.m_ciStatusInformation)) != EqualTo)
    return result;
  if ((result = m_argumentExtension.Compare(other.m_argumentExtension)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX H45011_CINotificationArg::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ciStatusInformation.GetObjectLength();
  if (HasOptionalField(e_argumentExtension))
    length += m_argumentExtension.GetObjectLength();
  return length;
}


BOOL H45011_CINotificationArg::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ciStatusInformation.Decode(strm))
    return FALSE;
  if (HasOptionalField(e_argumentExtension) && !m_argumentExtension.Decode(strm))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void H45011_CINotificationArg::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ciStatusInformation.Encode(strm);
  if (HasOptionalField(e_argumentExtension))
    m_argumentExtension.Encode(strm);

  UnknownExtensionsEncode(strm);
}


PObject * H45011_CINotificationArg::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(H45011_CINotificationArg::Class()), PInvalidCast);
#endif
  return new H45011_CINotificationArg(*this);
}


#endif // if ! H323_DISABLE_H45011


// End of h45011.cxx
