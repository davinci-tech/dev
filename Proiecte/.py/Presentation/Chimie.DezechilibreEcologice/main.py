from imports import *


class Poluarea(Scene):
    def construct(self):
        formula = Tex(r"NH_3 + SO_2 \")        

    def ex(self):
        self.camera.background_color = GRAY
        intro_and_c1 = Tex("Imaginaţi-vă o lume în care ", "cerul este ", "gri")
        c2 = Text("clima este extrema")
        c3 = Text("foamea este prezentă")
        c4 = Text("omenirea este bolnavă")
        c5 = Text("speranţa de viaţă a scăzut dramatic")
        MyBackground = Rectangle(
            height=self.camera.frame_height, width=self.camera.frame_width, fill_color = "#FFFFFF", fill_opacity = 1
        )
        MyBackground2 = Rectangle(
            height=self.camera.frame_height, width=self.camera.frame_width, fill_color = GRAY, fill_opacity = 1
        )

        self.add(MyBackground)
        self.play(
            FadeIn(intro_and_c1[0].set_color(BLACK)),
            FadeIn(intro_and_c1[1].set_color(BLACK)),
        )
        self.play(FadeIn(intro_and_c1[2].set_color(GRAY)))
        self.play(Transform(MyBackground, MyBackground2))
