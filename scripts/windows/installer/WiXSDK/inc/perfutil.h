#pragma once
//-------------------------------------------------------------------------------------------------
// <copyright file="perfutil.h" company="Outercurve Foundation">
//   Copyright (c) 2004, Outercurve Foundation.
//   This software is released under Microsoft Reciprocal License (MS-RL).
//   The license and further copyright text can be found in the file
//   LICENSE.TXT at the root directory of the distribution.
// </copyright>
// 
// <summary>
//    Performance helper functions.
// </summary>
//-------------------------------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

// structs


// functions
void DAPI PerfInitialize(
    );
void DAPI PerfClickTime(
    __out_opt LARGE_INTEGER* pliElapsed
    );
double DAPI PerfConvertToSeconds(
    __in const LARGE_INTEGER* pli
    );

#ifdef __cplusplus
}
#endif
