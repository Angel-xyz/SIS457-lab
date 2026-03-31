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
			MNode<M>* tmpNode = First;
			while (tmpNode->Next != nullptr)
			{
				tmpNode = tmpNode->Next;
			}
			tmpNode->Next = NewNode;
		}
	};
	void Empty()
	{
		MNode<M>* Noode = First;
		while(Noode != nullptr)
		{
			MNode<M>* tmpNode = Noode;
			Noode = Noode->Next;
			delete tmpNode;
			tmpNode = nullptr;
		}
		First = nullptr;
	};
};
