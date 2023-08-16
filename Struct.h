#pragma once
#include"Vector3.h"

struct Sphere 
{
	Vector3 center;
	float radius;
};

//直線
struct Line 
{
	//始点
	Vector3 origin;
	//終点への差分ベクトル
	Vector3 diff;

};

//半直線
struct Ray 
{
	//始点
	Vector3 origin;
	//終点への差分ベクトル
	Vector3 diff;

};

//線分
struct Segment 
{
	//始点
	Vector3 origin;
	//終点への差分ベクトル
	Vector3 diff;

};

struct Plane 
{
	Vector3 normal; //法線
	float distance; //距離
};