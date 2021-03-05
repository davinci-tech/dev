from manim import *
import json

from rich.console import get_windows_console_features

info = json.load(open(".\\Notes\\Plan.json", "r"))

class MainScene(Scene):
  def construct(self):
    mesaj = Text(info["slides"][0]["title"])
    punct = Dot(radius=0)
    fundal = Rectangle(color = config['background_color'], width = config['frame_width'], height = config['frame_height'])

    fundal.set_fill("#fcf403", opacity = 1)

    self.play(Write(mesaj))
    self.play(Transform(mesaj, punct))
    self.play(GrowFromCenter(fundal))
    self.play(ApplyMethod(fundal.set_fill, "#000000", opacity = 0))

    self.remove(mesaj, punct, fundal)

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