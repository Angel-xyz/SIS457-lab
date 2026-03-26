// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

template <typename M>
struct MNode
{
	M Data;
	MNode<M>* Next;

	MNode(M MyData) : Data(MyData), Next(nullptr) {}
};

template <typename M>
class NAVE_LAB_SIS457_API CustomMazeArray
{
private:
	MNode<M>* First;
public:
	CustomMazeArray() : First(nullptr) {}

	~CustomMazeArray()
	{
		Empty();
	}

	void append(M NewData)
	{
		MNode<M>* NewNode = new MNode<M>(NewData);

		if (First == nullptr)
		{
			First = NewNode;
		}
		else
		{
			for (MNode<M>* tmpNode = First; tmpNode != nullptr; tmpNode = tmpNode->Next)
			{
				if (tmpNode->Next == nullptr)
				{
					tmpNode = NewNode;
					NewNode = nullptr;
				}
			}
		}
	};
	void Empty()
	{
		MNode<M>* Noode = First->Next;
		while(Noode != nullptr)
		{
			MNode<M>* tmpNode = Noode;
			Noode = Noode->Next;
			delete(tmpNode);
		}
		First = nullptr;
	};
};
