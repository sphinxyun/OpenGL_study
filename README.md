# OpenGL Study

OpenGL 学习库

# 相关资料
## 教程地址：

  - 原教程地址：https://learnopengl.com/
  
  - 中文教程地址：https://learnopengl-cn.github.io/

## 参考网址：

  - OpenGL API doc： http://docs.gl/
  
  - GLFW： http://www.glfw.org/index.html
  
  - GLEW： http://glew.sourceforge.net/
  
  - stb: https://github.com/nothings/stb
  
  - assimp：https://github.com/assimp/assimp
  
  - OpenGL tutorial video：https://www.youtube.com/watch?v=W3gAzLwfIP0&list=PLlrATfBNZ98foTJPJ_Ev03o2oq3-GGOS2

  - Xcode GLFW & GLEW 环境配置：https://blog.csdn.net/LongZh_CN/article/details/55001345

# 目录

*注：以下各部分并非完全对应教程中的每一章节*

1. [你好，三角形](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test1)

2. [着色器](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test2)

3. [旋转三角形](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test3)

4. [旋转立方体](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test4)

5. [摄像机](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test5)

6. [基础光照](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test6)

7. [材质](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test7)

8. [光照贴图](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test8)

9. [投光物](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test9)

10. [多光源](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test10)

11. [模型](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test11)

12. [深度测试](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test12)

13. [模板测试](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test13)

14. [混合](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test14)

15. [帧缓冲](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test15)

16. [立方体贴图](https://github.com/yangruihan/OpenGL_study/tree/master/OpenGL_study/src/test/test16)

# 笔记
## 图形渲染管线（Graphics Pipeline）

指的是一堆原始图形数据途径一个输送管道，期间经过各种变化处理，最终出现在屏幕的过程

可以被划分为两个主要部分：

1. 3D坐标 -> 2D坐标
2. 2D坐标 -> 有颜色的像素

流程如下图所示：

![](README/1.png)

![](README/2.png)

## 标准化设备坐标（Normalized Device Coordinates，NDC）

![](README/3.png)
