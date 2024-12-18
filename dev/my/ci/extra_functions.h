// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// altermap codigo aqui

void CambiaMapa(nx,ny,nt) {
	// Tile to be changed is _x, _y
	// Remember that if you call update_tile,
	// _x and _y are destroyed, so you should
	// save them elsewhere if you need.

	// Vanilla code does this:
	/*
	#asm
		xor a
		ld  (__t), a
		ld  (__n), a
		call _update_tile
	#endasm
	*/

	_x = nx;
	_y = ny;
	_t = nt;
	_n = behs [_t];
	update_tile();
}