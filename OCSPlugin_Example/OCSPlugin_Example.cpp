//====================================================================================
// Open Computer and Software Inventory Next Generation
// Copyleft 2007 OCS Inventory NG Team
// Web: http://www.ocsinventory-ng.org

// This code is open source and may be copied and modified as long as the source
// code is always made freely available.
// Please refer to the General Public Licence Version 2.0
// http://www.gnu.org/ or Licence.txt
//====================================================================================

// OCSPlugin_Example.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "OCSPlugin_Example.h"

CLog* m_pLogger = getOcsLogger();

OCSINVENTORY_API_EXPORTED int OCS_CALL_START_EXPORTED(){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "Start hook called from %s plugin"), __FILE__);
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_PROLOGWRITE_EXPORTED(CPrologRequest* pPrologReq){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "PrologRead hook called from %s plugin"), __FILE__);
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_PROLOGRESP_EXPORTED(CPrologResponse* pPrologResp){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "PrologResp hook called from %s plugin"), __FILE__);
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_INVENTORY_EXPORTED(CInventoryRequest* pInventory){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "Inventory hook called from %s plugin"), __FILE__);
	return PLUGIN_OK;
}

OCSINVENTORY_API_EXPORTED int OCS_CALL_END_EXPORTED(){
	m_pLogger->log( LOG_PRIORITY_DEBUG, _T( "End hook called from %s plugin"), __FILE__);
	return PLUGIN_OK;
}