# fourierin
Guillermo Basulto-Elias  
January 26, 2016  

This is a package to numerically calculate Fourier integrals. Specifically, integrals of the type

$$
I \left[f(\boldsymbol{t}), \boldsymbol{a}, 
  \boldsymbol{b};r, s \right]
  = \left[ \frac{|s|}{(2\pi)^{1 - r}}\right]^{n/2}
  \int_{a_1}^{b_1}\int_{a_2}^{b_2}\cdots\int_{a_n}^{b_n}
  f(\boldsymbol{t})\exp\left(\imath t\right)
$$

Hola.

<!-- begin MathToWeb -->
<!-- (your LaTeX) $I \left[f(\boldsymbol{t}), \boldsymbol{a}, 
  \boldsymbol{b};r, s \right]
  = \left[ \frac{|s|}{(2\pi)^{1 - r}}\right]^{n/2}
  \int_{a_1}^{b_1}\int_{a_2}^{b_2}\cdots\int_{a_n}^{b_n}
  f(\boldsymbol{t})\exp\left(\imath t\right)$ -->
<math xmlns="http://www.w3.org/1998/Math/MathML">
<mrow>
	<mi>I</mi>
	<mrow>
		<mo rspace="0.3em" lspace="0em" stretchy="true" fence="true" form="prefix">[</mo>
		<mi>f</mi>
		<mrow>
			<mo form="prefix">(</mo>
			<mi mathvariant="bold">t</mi>
			<mo form="postfix">)</mo>
		</mrow>
		<mo>,</mo>
		<mi mathvariant="bold">a</mi>
		<mo>,</mo>
		<mi mathvariant="bold">b</mi>
		<mo>;</mo>
		<mi>r</mi>
		<mo>,</mo>
		<mi>s</mi>
		<mo rspace="0em" lspace="0.3em" stretchy="true" fence="true" form="postfix">]</mo>
	</mrow>
	<mo>=</mo>
	<msup>
		<mrow>
			<mo rspace="0.3em" lspace="0em" stretchy="true" fence="true" form="prefix">[</mo>
			<mfrac linethickness="1">
				<mrow>
					<mo>|</mo>
					<mi>s</mi>
					<mo>|</mo>
				</mrow>
				<mrow>
					<msup>
						<mrow>
							<mo form="prefix">(</mo>
							<mn>2</mn>
							<mi>&#x003C0;</mi>
							<mo form="postfix">)</mo>
						</mrow>
						<mrow>
							<mn>1</mn>
							<mo>-</mo>
							<mi>r</mi>
						</mrow>
					</msup>
				</mrow>
			</mfrac>
			<mo rspace="0em" lspace="0.3em" stretchy="true" fence="true" form="postfix">]</mo>
		</mrow>
		<mrow>
			<mi>n</mi>
			<mo>&#x0002F;</mo>
			<mn>2</mn>
		</mrow>
	</msup>
	<mstyle displaystyle="true">
		<munderover>
			<mo>&#x0222B;</mo>
			<mrow>
				<msub>
					<mi>a</mi>
					<mn>1</mn>
				</msub>
			</mrow>
			<mrow>
				<msub>
					<mi>b</mi>
					<mn>1</mn>
				</msub>
			</mrow>
		</munderover>
	</mstyle>
	<mstyle displaystyle="true">
		<munderover>
			<mo>&#x0222B;</mo>
			<mrow>
				<msub>
					<mi>a</mi>
					<mn>2</mn>
				</msub>
			</mrow>
			<mrow>
				<msub>
					<mi>b</mi>
					<mn>2</mn>
				</msub>
			</mrow>
		</munderover>
	</mstyle>
	<mo>&#x022EF;</mo>
	<mstyle displaystyle="true">
		<munderover>
			<mo>&#x0222B;</mo>
			<mrow>
				<msub>
					<mi>a</mi>
					<mi>n</mi>
				</msub>
			</mrow>
			<mrow>
				<msub>
					<mi>b</mi>
					<mi>n</mi>
				</msub>
			</mrow>
		</munderover>
	</mstyle>
	<mi>f</mi>
	<mrow>
		<mo form="prefix">(</mo>
		<mi mathvariant="bold">t</mi>
		<mo form="postfix">)</mo>
	</mrow>
	<mi>exp</mi>
	<mrow>
		<mo rspace="0.3em" lspace="0em" stretchy="true" fence="true" form="prefix">(</mo>
		<mo>&#x00131;</mo>
		<mi>t</mi>
		<mo rspace="0em" lspace="0.3em" stretchy="true" fence="true" form="postfix">)</mo>
	</mrow>
</mrow>
</math>
<!-- end MathToWeb -->
