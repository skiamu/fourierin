# fourierin
Guillermo Basulto-Elias  
January 26, 2016  

This is a package in `R` to numerically calculate Fourier integrals. Specifically, integrals of the type.

<!--
$$
I \left[f(t), a, b;r, s \right]
  = \left[ \frac{|s|}{(2\pi)^{1 - r}}\right]^{n/2}
  \int_{a_1}^{b_1}\int_{a_2}^{b_2}\cdots\int_{a_n}^{b_n}
  f(t)e^{\imath s \langle w, t\rangle} \text{d}t,
$$
-->

<img src="http://www.sciweavers.org/tex2img.php?eq=I%20%5Cleft%5Bf%28t%29%2C%20a%2C%20b%3Br%2C%20s%20%5Cright%5D%0A%20%20%3D%20%5Cleft%5B%20%5Cfrac%7B%7Cs%7C%7D%7B%282%5Cpi%29%5E%7B1%20-%20r%7D%7D%5Cright%5D%5E%7Bn%2F2%7D%0A%20%20%5Cint_%7Ba_1%7D%5E%7Bb_1%7D%5Cint_%7Ba_2%7D%5E%7Bb_2%7D%5Ccdots%5Cint_%7Ba_n%7D%5E%7Bb_n%7D%0A%20%20f%28t%29e%5E%7B%5Cimath%20s%20%5Clangle%20w%2C%20t%5Crangle%7D%20%5Ctext%7Bd%7Dt%2C&bc=White&fc=Black&im=png&fs=12&ff=arev&edit=0" align="center" border="0" alt="I \left[f(t), a, b;r, s \right]  = \left[ \frac{|s|}{(2\pi)^{1 - r}}\right]^{n/2}  \int_{a_1}^{b_1}\int_{a_2}^{b_2}\cdots\int_{a_n}^{b_n}  f(t)e^{\imath s \langle w, t\rangle} \text{d}t," width="496" height="53" />

where,
$a = (a_1, \ldots, a_n)$, 
