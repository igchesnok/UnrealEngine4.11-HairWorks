// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "K2Node.h"
#include "K2Node_AssignmentStatement.generated.h"

UCLASS(MinimalAPI)
class UK2Node_AssignmentStatement : public UK2Node
{
	GENERATED_UCLASS_BODY()


	// Name of the Variable pin for this node
	static FString VariablePinName;
	// Name of the Value pin for this node
	static FString ValuePinName;

	// Begin UEdGraphNode interface
	virtual void AllocateDefaultPins() override;
	virtual FString GetTooltip() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual bool CanPasteHere(UEdGraph const* TargetGraph, UEdGraphSchema const* Schema) const override;
	// End UEdGraphNode interface

	// Begin UK2Node interface
	virtual void PostReconstructNode() override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	virtual class FNodeHandlingFunctor* CreateNodeHandler(class FKismetCompilerContext& CompilerContext) const override;
	virtual void GetMenuActions(TArray<UBlueprintNodeSpawner*>& ActionListOut) const override;
	virtual FText GetMenuCategory() const override;
	// End UK2Node interface

	/** Get the Then output pin */
	BLUEPRINTGRAPH_API UEdGraphPin* GetThenPin() const;
	/** Get the Variable input pin */
	BLUEPRINTGRAPH_API UEdGraphPin* GetVariablePin() const;
	/** Get the Value input pin */
	BLUEPRINTGRAPH_API UEdGraphPin* GetValuePin() const;
};

