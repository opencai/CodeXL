//=====================================================================
// Copyright 2016 (c), Advanced Micro Devices, Inc. All rights reserved.
//
/// \author AMD Developer Tools Team
/// \file osDebugLogParser.h
///
//=====================================================================

//------------------------------ osDebugLogParser.h ------------------------------

#ifndef __OSDEBUGLOGPARSER_H
#define __OSDEBUGLOGPARSER_H

// Local:
#include <AMDTOSWrappers/Include/osOSWrappersDLLBuild.h>


// ----------------------------------------------------------------------------------
// Class Name:           osDebugLogParser
// General Description:
//   Parses debug log files, generated by osDebugLog.
//
// Author:      AMD Developer Tools Team
// Creation Date:        24/11/2005
// ----------------------------------------------------------------------------------
class OS_API osDebugLogParser
{
public:
    osDebugLogParser();
    virtual ~osDebugLogParser();

private:
};



#endif //__OSDEBUGLOGPARSER_H