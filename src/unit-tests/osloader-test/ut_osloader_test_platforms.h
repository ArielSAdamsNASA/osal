/*
 *  NASA Docket No. GSC-18,370-1, and identified as "Operating System Abstraction Layer"
 *
 *  Copyright (c) 2019 United States Government as represented by
 *  the Administrator of the National Aeronautics and Space Administration.
 *  All Rights Reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*================================================================================*
** File:  ut_osloader_test_platforms.h
** Owner: Tam Ngo
** Date:  November 2014
**================================================================================*/

#ifndef _UT_OSLOADER_TEST_PLATFORMS_H_
#define _UT_OSLOADER_TEST_PLATFORMS_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#ifdef _LINUX_OS_
#endif  /* _LINUX_OS_ */

#ifdef OSP_ARINC653
#endif  /* OSP_ARINC653 */

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

/*--------------------------------------------*/
#ifdef _LINUX_OS_
/*--------------------------------------------*/

#define UT_OS_GENERIC_MODULE_NAME1   "/cf/MODULE.so"
#define UT_OS_GENERIC_MODULE_NAME2   "/cf/MODULE1.so"
#define UT_OS_SPECIFIC_MODULE_NAME   "/cf/MODULE%d.so"

/*--------------------------------------------*/
#endif  /* _LINUX_OS_ */
/*--------------------------------------------*/

/*--------------------------------------------*/
#ifdef _VXWORKS_OS_
/*--------------------------------------------*/

#define UT_OS_GENERIC_MODULE_NAME1   "/cf/apps/MODULE.o"
#define UT_OS_GENERIC_MODULE_NAME2   "/cf/apps/MODULE1.o"
#define UT_OS_SPECIFIC_MODULE_NAME   "/cf/apps/MODULE%d.o"

/*--------------------------------------------*/
#endif  /* _VXWORKS_OS_ */
/*--------------------------------------------*/

/*--------------------------------------------*/
#ifdef OSP_ARINC653
/*--------------------------------------------*/

#define UT_OS_GENERIC_MODULE_NAME1   "/cf/apps/MODULE.o"
#define UT_OS_GENERIC_MODULE_NAME2   "/cf/apps/MODULE1.o"
#define UT_OS_SPECIFIC_MODULE_NAME   "/cf/apps/MODULE%d.o"

/*--------------------------------------------*/
#endif  /* OSP_ARINC653 */
/*--------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSLOADER_TEST_PLATFORMS_H_ */

/*================================================================================*
** End of File: ut_osloader_test_platforms.h
**================================================================================*/
