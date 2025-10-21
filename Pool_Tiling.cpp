/*
This program find the amount of square tiles needed to tile a pool.
The dimensions of the tiles and the pool is taken.
The program then checks whether the pool can be tiled without breaking any tiles.
If the pool can be tiled with only unbroken tiles, the number of tiles is found.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the length, width, and depth of the pool in meters:";
    int x, y, z;
    cin >> x >> z >> y;

    cout << "Enter the width of the tile in centimeters: ";
    int tile_width;
    cin >> tile_width;

    x = x * 100;
    y = y * 100;
    z = z * 100;

    int x_tiles, y_tiles, z_tiles;  // number of tiles that fit in each axis
    x_tiles = x / tile_width;
    y_tiles = y / tile_width;
    z_tiles = z / tile_width;

    bool uncut_tiles = true;
    if ( x % tile_width != 0 || y % tile_width != 0 || z % tile_width != 0)
    {
        uncut_tiles = false;
    }

    if (uncut_tiles)
    {
        int floor_tile_amount = x_tiles * z_tiles;
        int xy_wall_tile_amount = x_tiles * y_tiles;
        int yz_wall_tile_amount = y_tiles * z_tiles;

        int total_tile_amount = floor_tile_amount + 2 * xy_wall_tile_amount + 2 * yz_wall_tile_amount;


        cout << "For tiling a pool with dimensions " << x / 100 << "x" << y / 100 
        << "x" << z / 100 << "meters using tiles with";
        cout << "dimensions " << tile_width << "x" << tile_width << " cm, " 
        << total_tile_amount << " tiles are needed.";
    }
    else
    {
        cout << "Tiling a pool with dimensions " << x / 10 << "x" << y / 10 
        << "x" << z / 10 << " meters using tiles with";
        cout << "dimensions " << tile_width << "x" << tile_width << " cm, ";
        cout << " is not possible without breaking the tiles!" << endl;
        
    }

   return 0;
}
