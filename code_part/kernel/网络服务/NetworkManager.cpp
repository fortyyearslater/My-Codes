#include "Stdafx.h"
#include "NetworkManager.h"


//网络管理

//构造函数
CNetworkManager::CNetworkManager()
{

}

//析构函数
CNetworkManager::~CNetworkManager()
{

}

//基础接口
//接口查询
VOID *  CNetworkManager::QueryInterface(REFGUID Guid, DWORD dwQueryVer)
{
	QUERYINTERFACE(IWHNetwork, Guid, dwQueryVer);
	QUERYINTERFACE_IUNKNOWNEX(IWHNetwork, Guid, dwQueryVer);
	return NULL;
}

DWORD CNetworkManager::ConversionAddr(LPCTSTR pszAddress)
{
	return 0;
}
//获取地址
DWORD CNetworkManager::GetLocalNetworkIP(DWORD dwAddrList[], DWORD dwMaxCount)
{
	return 0;
}
//性能查询
//枚举代理
bool  CNetworkManager::EnumProxyServerType(WORD wIndex, tagProxyDescribe & ProxyTypeDescribe)
{
	return false;
}

//代理测试
BYTE  CNetworkManager::ProxyServerTesting(BYTE ProxyServerType, const tagProxyServer & ProxyServerInfo)
{
	return false;
}

//////////////////////////////////////////////////////////////////////////

////建立对象函数
//extern "C" __declspec(dllexport) void *  CreateNetworkManager(const GUID & Guid, DWORD dwInterfaceVer)
//{
//	//建立对象
//	CNetworkManager * pNetworkManager = NULL;
//	try
//	{
//		pNetworkManager = new CNetworkManager();
//		if (pNetworkManager == NULL) throw TEXT("创建失败");
//		void * pObject = pNetworkManager->QueryInterface(Guid, dwInterfaceVer);
//		if (pObject == NULL) throw TEXT("接口查询失败");
//		return pObject;
//	}
//	catch (...) {}
//
//	//清理对象
//	SafeDelete(pNetworkManager);
//	return NULL;
//}
DECLARE_CREATE_MODULE(NetworkManager)
//////////////////////////////////////////////////////////////////////////
