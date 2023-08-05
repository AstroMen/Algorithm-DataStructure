# Graph

## UnionFindSet
* 某国家有N个小岛组成，经过多年的基础设施积累，若干岛屿之间建立了若干桥梁。
* 先重新完善该国的行政区划，规定只要有桥梁连接的岛屿则归属同一个城市(可以通过其他岛屿中转)，问该国一共多少个城市？
* 求给定图G的连通分量的数目。

## ArticulationPoint
* 给定某无向连通图G，若删除某结点X已经  与X相邻接的所有边，图G变成非连通图，  则结点X称为图G的割点。
* 问：给定某图的邻接矩阵或邻接表，如何计算该图的所有割点？

![image](https://github.com/AstroMen/Algorithm-DataStructure/blob/master/Graph/ArticulationPoint.JPG)

## ArticulationEdge
* 给定某无向连通图G，若删除某边E，则图G变成非连通图，则边E称为图G的割边。
* 问：给定某图的邻接矩阵或邻接表，如何计算该图的所有割边？


