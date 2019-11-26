#include <iostream>
#include <cmath>
#include <new>          // ::operator new[]
using namespace std;

//create the size of the grid
	int xGrid, yGrid;
//create an array so as to store the vertices
	void createVertices (xGrid, yGrid) {
		int *vertices = new int[(xGrid + 1) * (yGrid + 1)];
	}
//create an array so as to store the triangles
void createTriangles (xGrid, yGrid) {
        int *triangles = new int[3];
		triangles[0] = 0;
		triangles[1] = xGrid + 1;
		triangles[2] = 1;
	}
//create an array so as to allocate the points of the square unity		
void createSquare (xGrid, yGrid) {
		
	int *triangles = new int[6];
		triangles[0] = 0;
		triangles[1] = xSize + 1;
		triangles[2] = 1;
		triangles[3] = 1;
		triangles[4] = xSize + 1;
		triangles[5] = xSize + 2;		
}
//create the first row of the grid	

 void createfirstrowGrid (xGrid, yGrid) {
	int *triangles = new int[xGrid * 6];
		for (int ti = 0, vi = 0, x = 0; x < xGrid; x++, ti += 6, vi++) {
			triangles[ti] = vi;
			triangles[ti + 3] = triangles[ti + 2] = vi + 1;
			triangles[ti + 4] = triangles[ti + 1] = vi + xGrid + 1;
			triangles[ti + 5] = vi + xGrid + 2;
		}
//create the entire grid
 void createfirstrowGrid (xGrid, yGrid) {			
		int *triangles = new int[xGrid * yGrid * 6];
		for (int ti = 0, vi = 0, y = 0; y < yGrid; y++, vi++) {
			for (int x = 0; x < xGrid; x++, ti += 6, vi++) {
			triangles[ti] = vi;
			triangles[ti + 3] = triangles[ti + 2] = vi + 1;
			triangles[ti + 4] = triangles[ti + 1] = vi + xGrid + 1;
			triangles[ti + 5] = vi + xGrid + 2;
			}
		
		

		vertices = new Vector3[(xSize + 1) * (ySize + 1)];
		for (int i = 0, y = 0; y <= ySize; y++) {
			for (int x = 0; x <= xSize; x++, i++) {
				vertices[i] = new Vector3(x, y);
			}
		}
		mesh.vertices = vertices;

		int[] triangles = new int[xSize * ySize * 6];
		for (int ti = 0, vi = 0, y = 0; y < ySize; y++, vi++) {
			for (int x = 0; x < xSize; x++, ti += 6, vi++) {
				triangles[ti] = vi;
				triangles[ti + 3] = triangles[ti + 2] = vi + 1;
				triangles[ti + 4] = triangles[ti + 1] = vi + xSize + 1;
				triangles[ti + 5] = vi + xSize + 2;
			}
		}
		mesh.triangles = triangles;
	}	
			
	private void Generate () {
		…
		mesh.triangles = triangles;
		mesh.RecalculateNormals();
	}
	
	
	vertices = new Vector3[(xSize + 1) * (ySize + 1)];
		Vector2[] uv = new Vector2[vertices.Length];
		for (int i = 0, y = 0; y <= ySize; y++) {
			for (int x = 0; x <= xSize; x++, i++) {
				vertices[i] = new Vector3(x, y);
				uv[i] = new Vector2(x / xSize, y / ySize);
			}
		}
		mesh.vertices = vertices;
		mesh.uv = uv;		
			
		uv[i] = new Vector2((float)x / xSize, (float)y / ySize);
		
			vertices = new Vector3[(xSize + 1) * (ySize + 1)];
		Vector2[] uv = new Vector2[vertices.Length];
		Vector4[] tangents = new Vector4[vertices.Length];
		Vector4 tangent = new Vector4(1f, 0f, 0f, -1f);
		for (int i = 0, y = 0; y <= ySize; y++) {
			for (int x = 0; x <= xSize; x++, i++) {
				vertices[i] = new Vector3(x, y);
				uv[i] = new Vector2((float)x / xSize, (float)y / ySize);
				tangents[i] = tangent;
			}
		}
		mesh.vertices = vertices;
		mesh.uv = uv;
		mesh.tangents = tangents;
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
