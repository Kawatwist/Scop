<h1>Summary</h1>
<h3>
<ul>
  <li>Resume</li>
  <li>Installation</li>
  <li>Compillation</li>
  <li>Usage</li>
  <li>Input</li>
  <li>Screenshot</li>
</ul>
</h3>
<br>
<h3>Resume</h3>
<b>
This is a 42's project<br>
The objectif is to learn OpenGL<br>
No parsing library is authorized, we need to used ours :
 <ul><li>TgaReader : Parsing Texture</li>
  <li>ObjReader : Parsing Obj modeles</li>
  <li>MtlReader : Parsing Material (extension of ObjReader)</li></ul>
</b><br>
<h3>Installation</h3>
Need to install 
<ul> 
    <li>brew install glfw
    <li>brew install glew
    <li>brew install pkg-config
 </ul>
 <h3>Compillation</h3>
 <ul>
    <li>make        (Compile sublibs and the binary)
    <li>make clean  (Remove all object file)
    <li>make fclean (Remove object file and binary)
 </ul>
 <h4>Compillation Error</h4>
        <b>If the program doesn't compile properly : </b>
        <ul>
          <li>Clear the repository with make fclean</li>
          <li>Be sure the framework is properly install</li>
          </ul>
 <h3>Usage</h3>
 <b><i>./scop [Path .Obj file]</i></b>
 More parameters can be used to add some Obj on the scene<br>
 If no mtl file is defined the scop will use a basic texture
 <h3>Input</h3>
 <table>
      <tr>
        <td>Key : </td>
        <td>Mouvement : </td>
      </tr>
      <tr>
        <td>[W]</td>
        <td>Camera : Forward</td>
      </tr>
      <tr>
        <td>[S]</td>
        <td>Camera : Backward</td>
      </tr>
      <tr>
        <td>[A]</td>
        <td>Camera : Left</td>
      </tr>
      <tr>
        <td>[D]</td>
        <td>Camera : Right</td>
      </tr>
      <tr>
        <td>[R]</td>
        <td>Object : Rotate</td>
      </tr>
      <tr>
        <td>[P]</td>
        <td>Mode Polygon</td>
      </tr>
      <tr>
        <td>[SPACE]</td>
        <td>Unlock the window grab cursor</td>
      </tr>
      <tr>
        <td>[MOUSE]</td>
        <td>Camera : Direction</td>
      </tr>
 </table>
 <h3>Screenshot</h3>
 <b>Modeles by Yoru skins</b><br>
  https://sketchfab.com/3d-models/pentakill-jinx-league-of-legends-custom-skin-2a89df3515ea4c738795a40218c95b31
 <b>Render by Scop</b>
 <img src="https://raw.https://github.com/Kawatwist/Scop/tree/master/Screenshot/Jinx_pentakill.png">
<br><br>
 <b>Modeles by vrchris</b><br>
  https://sketchfab.com/3d-models/de-dust2-cs-map-056008d59eb849a29c0ab6884c0c3d87
 <b>Render by Scop</b>
 <img src="https://raw.https://github.com/Kawatwist/Scop/tree/master/Screenshot/de_dust.png">
