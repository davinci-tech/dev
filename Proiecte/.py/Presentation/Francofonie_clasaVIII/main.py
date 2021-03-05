from manim import *

class MainScene(Scene):
  def construct(self):
    mesaj = Text("Gata")
    punct = Dot(radius=0)

    self.play(Write(mesaj))
    self.play(Transform(mesaj, punct))

class InitialScene(Scene):
  def construct(self):
    circle = Circle()
    square = Square()
    square.flip(RIGHT)
    square.rotate(-3 * TAU / 8)
    circle.set_fill(PINK, opacity=0.5)

    self.play(ShowCreation(square))
    self.play(Transform(square, circle))
    self.play(FadeOut(square))