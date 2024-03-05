# ShaderLoader

## Használata

Hozzunk léte egy Shadert. Amennyiben a 2 file ugyan olyan névvel van ellátva, akkor a következő képpen tudjuk használni:

``` cpp
Shader shader = Shader("skeleton");
gpuProgram.create(shader.vertex(), shader.fragment(), "outColor");
```

Ha különböző nevek esetén pedig:

``` cpp
Shader shader = Shader("skeleton1", "skeleton2");
gpuProgram.create(shader.vertex(), shader.fragment(), "outColor");
```

## Tippek

A shaderek írásához, módosításához érdemes visual studio code-ot használni a következő extensionokkel:
* [Shader languages support for VS Code](https://marketplace.visualstudio.com/items?itemName=slevesque.shader)
* [GLSL Lint](https://marketplace.visualstudio.com/items?itemName=dtoplak.vscode-glsllint)
  * Ehhez töltsük le a glslang validátort [link](https://github.com/KhronosGroup/glslang)
  * Majd `glslangValidatorPath` property-nek adjuk meg a validátor elérési útját

### glslangValidatorPath beállítása 

#### 1.

![image](https://github.com/Zsupi/ShaderLoader/assets/73688652/516373c6-d6bd-476e-9272-37f81b290a20)

#### 2.

![image](https://github.com/Zsupi/ShaderLoader/assets/73688652/3123fdb2-2273-4c8d-a233-acbe25d2458b)
