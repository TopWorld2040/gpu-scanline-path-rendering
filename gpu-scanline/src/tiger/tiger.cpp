
#include "tiger.h"

#include <math.h>
#include <string.h>

namespace Mochimazui {
	namespace Tiger {

		const char *tiger_path[240] = {
//#include "tiger_path.h"
			"M580.3,409.8c0,0-9.9-26.2-9.6-32.1c0.9,0.3,3.2,1.6,4.5,3.3c0,0,2.4,3.8,3.5,3.6c1.1-1.1,1-2.9-1.7-12.4	c0,0-10.6-33.2-0.5-20.3c0,0,6.9,8.3,3.2-7.4c-4.5-18.9-7.4-26.3-7.4-26.3s13.4,5.5-17.5-40.1l10.1,4.2c0,0-22.6-45.7-47.5-51.7	l-9.2-6.9c0,0,0.8-0.8,2.2-2.3c2.6-1.5,7.3-5,11.4-11.9c6-10.1,23.5-31.8,19.4-60.9c0,0,1.4-12.9-5.5-13.4c0,0-9.7-1.8-18,6.9	c0,0-7.8,3.7-10.6,3.2l-40.7,1.4c0,0-0.1,0-0.3,0.1c-0.2-0.1-0.3-0.2-0.6-0.4c-1.2-1.3-8.7-8.9-25.3-16c-1.9-0.9-3.9-1.8-6-2.6	c-6.7-3.2-30.2-12.6-64.2-7.8c0,0-20.5,3.7-29.5,5.8c0,0-3-0.7-3.7-1.2s-14.3-10.8-46.1-2.8c0,0-19.6,5.3-29.5,10.8	c0,0-17.5,1.4-21.7,5.1c0,0-0.2,0.2-0.6,0.5c-1.8,1.1-3.9,2.6-6.6,4.7c-3,2.4-5,4.1-6.5,5.4c-4.7,3.6-9.1,6.8-10.1,7.2	c-2.3,0.9-15.5,9.7-16.4,10.1c0,0,0,0,0.1,0c-1.4,0.6-2.6,1.1-3.5,1.2c0,0-13.4,7.4-18.5,18.9l-4.2,1.4c0,0-1.8,8.3-2.3,9.7	c0,0-5.5,4.2-6.5,10.6c0,0-10.1,6.9-9.7,12c0,0-1.8,6-2.8,11.5c0,0-8.3,5.5-7.4,8.8c0,0-8.8,16.1-7.4,24c0,0-7.4-0.5-10.6,2.3	c0,0-0.9,5.5-2.8,6c0,0-3.2,1.4-0.5,6c0,0-1.2,2.2-1.9,4c-0.8-0.1-1.7-0.1-2.6-0.2c0.6,0.1,1.5,0.2,2.6,0.3c-0.1,0.4-0.3,0.7-0.3,1	c0,0,0,0.1,0,0.3c-2.2-0.1-4.5-0.1-7-0.1c1.4,0,3.7,0.1,7,0.5c0,0.3,0,0.7-0.1,1.1c-2.8,0-5.8,0.2-9.2,0.5c1.7-0.1,4.7-0.2,9.1,0.1	c-0.1,0.4-0.2,0.8-0.4,1.2c-3.2,0.2-6.9,0.7-11.1,1.4c1.9-0.3,5.5-0.7,10.8-0.7c-0.6,1.5-1.6,3.3-3.4,5.5c0,0-7.4,21.7-5.1,27.7	c0,0,0.3,3.5-1.2,5.9c-0.5,0.4-1.1,0.9-1.6,1.5c-0.2,0-1.1,0.1-0.8,1.9c-0.1,0.6,0.1,1.3,0.6,2c0,0,0,0.1,0.1,0.1	c0.8,2,2.5,5,5.6,9.4c0,0,0.9,1.4-2.8,4.2c0,0-19.8,4.2-22.6,23.1c0,0-0.6,0.6-1.5,1.6c-3.9-54.1-23.4-54.3-24-54.3	c17.7,4.4,21.2,39.8,22.3,56.3c-1.2,1.4-2.6,3.1-4.1,5c-23-53.5-42.3-45.6-42.3-45.5c19-2.1,34.9,33.1,41,47.2	c-2,2.6-3.9,5.3-5.2,7.7c-37.4-47.9-54.4-34.8-54.4-34.7c18.8-7.4,45.2,26,53.5,36.4c-0.6,1.4-1,2.6-1,3.5c0,0.4,0,0.9,0,1.4	c-45.1-36.4-58.4-20.3-58.3-20.3c15.9-10.8,46.7,13.3,58.5,22.8c0.1,1.1,0.2,2.3,0.4,3.6c-49.1-32.8-61-15.4-60.9-15.4	c14.3-11.7,45.5,7.4,59,16.3c-32.7-10.8-39.4,2.2-39.4,2.2c8.6-9.1,26.6-5.2,41.8,0.5c0,0.2,0,0.3,0.1,0.5c0,0-0.1,1,1,2.5	c0.1,0.6,0.1,1.2,0.2,1.8c-32.1-15.8-40.6-3.5-40.6-3.5c9.5-7.8,26.5-1.9,40.8,5.5c0.1,0.7,0.2,1.5,0.3,2.2c-46.5-14.3-53,3-53,2.9	c9.4-12.6,36.2-6.3,53.4-0.8c0.4,2.1,0.8,4,1.4,5.6c-52.9-10.1-57.3,9.3-57.3,9.2c8.5-15.3,41.2-10.5,58.1-7.1	c0.1,0.2,0.2,0.4,0.3,0.5c0,0-0.2,0.7-0.4,1.9c-23.5,1.9-25.6,12.8-25.7,12.8c4-7.8,14.2-10.7,25.5-11.3c-0.3,2.3-0.4,5.5,0.1,9.4	c-30.8,5.1-31,18.7-31,18.7c3.2-10.4,17.1-15,31.3-17.1c0.6,3.1,1.6,6.6,3.4,10.2c-27.8,9.5-26.2,22.4-26.2,22.5	c1.6-10.3,13.8-16.8,26.9-21c0.6,1.1,1.3,2.3,2.1,3.4c0,0-0.5,8.3,1.4,12c0,0,4.6,9.7,10.1,10.6c4.5,0.7,14.5,4.3,25.9,5.9	c0,0,0.2,0.1,0.4,0.4c-0.2,0-0.3-0.1-0.3-0.1s3.6,9.1,5.9,14.3c1.1,2.4,5.7,7.5,10.6,12.4c0,1.3-0.1,2.7-0.5,4	c0,0-0.4,15.4-3.5,19.8c3-2.6,10.3-8.4,1.2,7.5l-5.1,21.7c0,0,14.1-12.1,17.1-12.2c-0.5,2.3-0.5,2.5-5.6,8.5l-11.5,30	c0,0,14.5-13.6,16.1-14.1c-0.9,1.4-0.6,1.4-1.7,3.2l-3.7,9.5c0,0,23.5-14.8,26.7-13c1.5,0.8-1.3,5.1-12.4,15.8c0,0,9.2-4.2,14.3-0.9	c0,0,7.8-1.4,6.9,0.5c0,0-24,12-28.1,33.2c0,0,9.7-11.5,6,0.9l0.5,13.4c0,0,1.5-6.5,2.6-7.1c1.8,2.3,1.8,5.9,1.6,25.6	c0,0,22.1-20.8,8.8,3.2v19.4c0,0,10.1-10.9,11.7-9.7c0.5,0.4-1.1,4.1-1.6,5.5c1-0.8,4.2-3.7,6.5-2.8c1.5,0.6,2.2,3.2,0.4,10.1	c0,0-0.6,4.4,0.7,5.1c1.2-0.5,1.6-1.3,3.5-6c0,0,18.5-35.3,11.5-5.1c0,0-0.9,22.1,4.6,5.1c0,0,0.5,12,11.1,20.3	c0,0-1.4-58.6,13.4-17.1l4.6,18.9c0,0,3.2-10.6,2.8-16.6c0,0,17.1-18.9,9.2,9.2c0,0,17.5-26.3,13.8-11.1c0,0-8.8,18.5-6.9,24	c0,0,19.4-40.1,20.8-42c0,0-2.3,48.9,10.1,7.4c0,0,6.5,13.8,3.2,18.9c0,0,9.2-9.2,8.3-12.9c0,0,5.3-9.5,8.5,6.2	c0,0,2.1,10.8,3.9,7.2c0,0,2.1,12.8,3.9,12.7c0.8,0,1.6-2.9,2.1-11.3c0,0,0.8-6.5-0.9-14.7c-0.9-4.5-2.6-9.6-5.6-14.4	c0,0,0.8-3.3-1.9-7.6c2.5,3.7,14.4,20.9,7-9c0,0,12.8,8.9,14.3,9.2c-0.8-2-15.7-26.8-5.5-21.2c0,0-6-12,14.8,1.8	c-11.9-12.9-5-11.4,1.2-7.5c2.6,1.7,3.7,2.5,4.7,1.5c-0.2-1.3-0.9-2.4-3.6-5.5c-4.5-4.9-5.6-5.9-5.2-8.4c2.8,0.6,5.7,3.2,14,10.7	c0,0,13.4,18.9,14.3,22.1c0,0-11.5-33.7-16.6-36.9c0,0,8-34.7,45.1-27.5c0,0,0,0,0,0c1.6,0.7,3.6,1.1,5.8,1.4c2,0.6,4.1,1.3,6.3,2.1	c0,0,7.8,19.8,12.9-1.4c0,0,14.8-7.4,27.7,24.5c0,0,4.6-15.7,3.7-18.9c0,0,7.8,1.4,6.9,0c0,0,15.2,5.1,16.6,4.2c0,0,7.8,7.8,8.3,3.7	c0,0,10.6,3.2,8.3-0.9c0,0,3.6,6.1,6.6,12.2c2,4,3.7,7.5,4,9.9l2.8-16.1l2.3,3.2c0,0,1.6-8.4,0.9-10.1c3,0.9,23.1,7.8,28.6,31.8	l2.3,9.7c0,0,6.9-17.1,5.1-21.7c0,0,6,0.9,6.5,6c0,0,4.6-26.8-0.9-33.7c0,0,5.1-0.9,6.5,3.2v-8.3c0,0,8.3,0.9,8.3-1.8	c0,0,5.1-4.6,7.4,0.9c0,0-14.3-40.6,6.9-18.5c0,0,8.3,12.5,4.2-9.2c-4.2-21.7-8.8-23.5-3.2-24c0,0,0.9-4-0.7-5.6	c-0.7-0.7-1-0.9-1.5-1.3c0.6,0.3,1.7,0.8,2.1,0.9c0.7,0.3,5.6,4.6-0.4-20.8c0,0,7.4,1.8-6.5-31.8c0,0,3.2-2.8-1.4-12.5	c0,0,9.2,5.1,12.5,3.2c0,0-0.5-1.8-4.2-6.5c0,0-24.9-63.2-1.4-37.8C574,420.5,587.7,436.1,580.3,409.8z"
		};
		const TigerStyle tiger_style[240] = {
//#include "tiger_style.h"
			{ 0xff0000, 0x000000, 0 },
		};

		const unsigned int tiger_path_count = 1;
		GLuint tiger_path_base = 0;
		GLuint tiger_program = 0;

		static void initProgram()
		{
			const GLchar *source = "#extension GL_ARB_separate_shader_objects : enable\n"
				"precision highp float;\n"
				"uniform vec3 color;\n"
				"void main() {\n"
				"    gl_FragColor = vec4(color, 1.0);\n"
				"}\n";
			tiger_program = glCreateShaderProgramv(GL_FRAGMENT_SHADER, 1, &source);
		}

		void initTiger() {

			initProgram();

			unsigned int i;
			tiger_path_base = glGenPathsNV(tiger_path_count);
			for (i = 0; i < tiger_path_count; i++) {
				const char *svg_str = tiger_path[i];
				size_t svg_len = strlen(tiger_path[i]);
				GLfloat stroke_width = (GLfloat)fabs(tiger_style[i].stroke_width);

				glPathStringNV(tiger_path_base + i, GL_PATH_FORMAT_SVG_NV,
					(GLsizei)svg_len, svg_str);
				glPathParameterfNV(tiger_path_base + i, GL_PATH_STROKE_WIDTH_NV, stroke_width);
			}
		}

		static void sendColor(GLuint color, GLint ucolor)
		{
			if (ucolor == -1) {
				GLubyte red = (color >> 16) & 0xFF,
					green = (color >> 8) & 0xFF,
					blue = (color >> 0) & 0xFF;
				glColor3ub(red, green, blue);
			}
			else {
				GLfloat red = (float)((color >> 16) & 0xFF),
					green = (float)((color >> 8) & 0xFF),
					blue = (float)((color >> 0) & 0xFF);
				glUniform3f(ucolor, red / 255, green / 255, blue / 255);
			}
		}

		static void drawTigerLayer(int layer, int filling, int stroking, GLuint program)
		{
			const struct TigerStyle *style = &tiger_style[layer];
			GLuint fill_color = style->fill_color;
			GLuint stroke_color = style->stroke_color;
			GLfloat stroke_width = style->stroke_width;
			GLint ucolor = -1;

			if (program) {
				glUseProgram(program);
				ucolor = glGetUniformLocation(program, "color");
			}

			// Should this path be filled?
			if (filling && stroke_width >= 0) {
				sendColor(fill_color, ucolor);
				glStencilFillPathNV(tiger_path_base + layer, GL_COUNT_UP_NV, 0x1F);
				glCoverFillPathNV(tiger_path_base + layer, GL_BOUNDING_BOX_NV);
			}
			else {
				// Negative stroke_width means "stroke only" (no fill)
			}

			// Should this path be stroked?
			if (stroking && stroke_width != 0) {
				const GLint reference = 0x1;
				sendColor(stroke_color, ucolor);
				glStencilStrokePathNV(tiger_path_base + layer, reference, 0x1F);
				glCoverStrokePathNV(tiger_path_base + layer, GL_BOUNDING_BOX_NV);
			}
			else {
				// Zero stroke widths means "fill only" (no stroke)
			}
			if (program) {
				glUseProgram(0);
			}
		}

		void drawTiger(int filling, int stroking)
		{
			unsigned int i;
			for (i = 0; i < tiger_path_count; i++) {
				//drawTigerLayer(i, filling, stroking, tiger_program);
				drawTigerLayer(i, filling, stroking, 0);
			}
		}

	}
}