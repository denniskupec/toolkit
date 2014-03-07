#pragma once

#include <hydrogen/sdk.h>

namespace hydrogen {
	class interfaces {
	public:
		ICvar *cvar;

		RE::CEngineClient *engine;
		RE::CEngineTraceClient *trace;
		RE::CIVDebugOverlay *overlay;
		IVModelInfo *model;
		RE::CHLClient *client;
		RE::CClientEntityList *entityList;

		interfaces() {
			this->client	 = reinterpret_cast< RE::CHLClient * >( getInterface( "client.dll", "VClient" ) );
			this->overlay	 = reinterpret_cast< RE::CIVDebugOverlay * >( getInterface( "engine.dll", "VDebugOverlay" ) );
			this->entityList = reinterpret_cast< RE::CClientEntityList * >( getInterface( "client.dll", "VClientEntityList" ) );
			this->engine     = reinterpret_cast< RE::CEngineClient * >( getInterface( "engine.dll", "VEngineClient" ) );
			this->trace		 = reinterpret_cast< RE::CEngineTraceClient * >( getInterface( "engine.dll", "EngineTraceClient" ) );
			this->model  	 = reinterpret_cast< IVModelInfo *>( getInterface( "engine.dll", "VModelInfoClient" ) );
		}

	private:
		void *getInterface( const char* pszDllName, const char* pszInterfaceName ) {
			void *Interface;

			CreateInterfaceFn DllInterface = reinterpret_cast< CreateInterfaceFn >( GetProcAddress( GetModuleHandleA( pszDllName ), "CreateInterface" ) );
	
			for( int i = 0; i < 100; i++ ) {
				char pszInterface[ 1024 ];

				if( i < 10 ) {
					sprintf( pszInterface, "%s00%i", pszInterfaceName, i );
				}

				if( i > 9 ) {
					sprintf( pszInterface, "%s0%i", pszInterfaceName, i );
				}

				Interface = DllInterface( pszInterface, 0 );

				if( Interface != NULL ) {
					break;
				}
			}
			return( Interface );
		}
	};
};