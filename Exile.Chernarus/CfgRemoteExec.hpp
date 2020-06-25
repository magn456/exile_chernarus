class CfgRemoteExec
{
	class Functions
	{
		mode = 1;
		jip = 1;
		class ExileServer_system_network_dispatchIncomingMessage { allowedTargets=2; };	// ExileMod
		class BIS_fnc_effectKilledSecondaries					 { allowedTargets=2; };
		class bis_fnc_effectkilledairdestruction				 { allowedTargets=2; };
	};
	class Commands
	{
		mode=0;
		jip=0;
	};
};