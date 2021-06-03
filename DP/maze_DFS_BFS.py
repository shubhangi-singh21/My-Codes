//Bfs is faster if the destination is present closer to the start
//This is because BFS checks for nodes level wise
//Dfs is faster if the destination is present far away from the start
//This is because DFs explores the deepest nodes for each of the starting neighbour nodes

import collections

class solution:
    def DFS(self, maze, start, destination):
        if start[0] == destination[0] and start[1] == destination[1]:
            return True
        dirs = [(0,1), (0,-1), (1,0), (-1,0)]
        x,y = start[0], start[1]
        for dx,dy in dirs:
            nx = x
            ny = y
            while 0 <= nx + dx < len(maze) and 0 <= ny + dy < len(maze) and maze[nx + dx][ny + dy] != 1:
                nx += dx
                ny += dy
            if maze[nx][ny] != 0:
                continue
            maze[nx][ny] = 2
            if self.DFS(maze, (nx,ny), destination):
                return True
            return False

    def BFS(self, maze, start, destination):
        dirs = [(0,1), (0,-1), (1,0), (-1,0)]
        queue = collections.deque([(start[0], start[1])])
        while queue:
            x, y = queue.popleft()
            if x == destination[0] and y == destination[1]:
                return True
            for dx, dy in dirs:
                nx = x
                ny = y
                while 0 <= nx + dx < len(maze) and 0 <= ny + dy < len(maze) and maze[nx + dx][ny + dy] != 1:

                    nx += dx
                    ny += dy
                if maze[nx][ny] != 0:
                    continue
                maze[nx][ny] = 2
                queue.append((nx,ny))
        return False
        
sol = solution()
sol1 = solution()
print(sol.DFS([[0,0,1,0,0], [0,0,0,0,0], [0,0,0,1,0], [1,1,0,1,1], [0,0,0,0,0]], [0, 4], [4, 4]))
print(sol.BFS([[0,0,1,0,0], [0,0,0,0,0], [0,0,0,1,0], [1,1,0,1,1], [0,0,0,0,0]], [0, 4], [4, 4]))
print(sol1.DFS([[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]],[0,4],[3,2]))
print(sol1.BFS([[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]],[0,4],[3,2]))
