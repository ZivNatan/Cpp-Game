/****************************************************************************************** 
 *	Chili DirectX Framework Version 11.12.17											  *	
 *	Game.cpp																			  *
 *	Copyright 2011 PlanetChili.net														  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "Game.h"

Game::Game( HWND hWnd,const KeyboardServer& kServer )
:	gfx ( hWnd ),
	kbd( kServer ),
	 x(500),
	 y(300),
	 cx(400),
	 cy(300),
	 rad(100),
	 r(255),
	 g(255),
	 bl(255)
{}


void Game::Go()
{
	gfx.BeginFrame();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::ComposeFrame()
{	
	// TODO: insert frame drawing code here	
	

	if(kbd.RightIsPressed())
	{
		cx++;
		
	}
	if(kbd.LeftIsPressed())
	{
		cx--;
	
	}
	if(kbd.UpIsPressed())
	{
		cy--;
		
	}
	if(kbd.DownIsPressed())
	{
		cy++;
		
	}
		if(kbd.SpaceIsPressed())
	{
		rad= rad+1;
	}
			if(kbd.EnterIsPressed())
	{
		rad= rad-1;
	}
	
	gfx.DrawCircle( cx,  cy, rad,  r,  g,  bl);
}