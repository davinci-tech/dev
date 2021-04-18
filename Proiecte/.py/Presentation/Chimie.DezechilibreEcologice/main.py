from manim import *

class SquareToCircle(Scene):
    def construct(self):
        grid = NumberPlane()
        title = Text("Dezechilibrele Ecologice")

        self.add(grid)

        self.play(Write(title))
        self.play(
            title.scale, {"scale_factor": 0.6},
            title.to_corner, UL
        )

        self.wait()

