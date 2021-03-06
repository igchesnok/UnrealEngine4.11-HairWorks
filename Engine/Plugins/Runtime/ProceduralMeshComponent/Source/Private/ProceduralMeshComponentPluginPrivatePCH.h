// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "CoreUObject.h"
#include "Engine.h"

// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.
#include "IProceduralMeshComponentPlugin.h"

#include "ProceduralMeshComponent.h"
#include "PhysicsEngine/BodySetup.h"

#pragma once

DECLARE_STATS_GROUP(TEXT("ProceduralMesh"), STATGROUP_ProceduralMesh, STATCAT_Advanced);
