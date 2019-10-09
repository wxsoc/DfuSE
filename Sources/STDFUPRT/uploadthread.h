/******************** (C) COPYRIGHT 2018 STMicroelectronics ********************
* Company            : STMicroelectronics
* Author             : MCD Application Team
* Description        : STMicroelectronics Device Firmware Upgrade Extension Demo
* Version            : V3.0.6
* Date               : 01-June-2018
********************************************************************************
* THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
* AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
* INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
* CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
* INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
********************************************************************************
* FOR MORE INFORMATION PLEASE CAREFULLY READ THE LICENSE AGREEMENT FILE
* "SLA0044.txt"
*******************************************************************************/

#ifndef _UPLOAD_THREAD_H_
#define _UPLOAD_THREAD_H_

class CUploadThread : public CDFUThread {
public:
	CUploadThread(PDFUThreadContext pContext);
	virtual ~CUploadThread();
private:
	virtual	BOOL	RunThread();
	BOOL			m_bComplexStateMachine;
};
#endif
