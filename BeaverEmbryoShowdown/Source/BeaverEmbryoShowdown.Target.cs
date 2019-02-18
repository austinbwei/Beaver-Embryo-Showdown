// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class BeaverEmbryoShowdownTarget : TargetRules
{
	public BeaverEmbryoShowdownTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("BeaverEmbryoShowdown");
	}
}
