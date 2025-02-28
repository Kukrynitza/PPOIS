import time
from typing import TypedDict
from diploma_project import DiplomaProject
from human import Human


class DiplomaProjectDict(TypedDict):
    presentation: int
    report: int


class Student(Human):
    __diploma_project = DiplomaProject()

    def add_student(self):
        self.add_human()
        print(f"Студент {self._last_name} {self._first_name} {self._surname} добавлен!")

    def create_presentation(self):
        art = r"""
       __..._   _...__
  _..-"      `Y`      "-._
  \ Once upon |           /
  \\  a time..|          //
  \\\         |         ///
   \\\ _..---.|.---.._ ///
    \\`_..---.Y.---.._`//
     '`               `'
        """
        print(art)
        time.sleep(2)
        self.__diploma_project.presentation_create()

    def presentation_revision(self):
        self.__diploma_project.presentation_revision()

    def report_revision(self):
        self.__diploma_project.report_revision()

    def create_report(self):
        art = r"""
(\ 
\'\ 
 \'\     __________  
 / '|   ()_________)
 \ '/    \ ~~~~~~~~ \
   \       \ ~~~~~~   \
   ==).      \__________\
  (__)       ()__________)
        """
        print(art)
        time.sleep(2)
        self.__diploma_project.report_create()

    def get_diploma_project(self) -> DiplomaProjectDict:
        return self.__diploma_project.get_diploma_project()

    def set_mark(self, mark: int):
        self.__diploma_project.set_mark(mark)

    def get_mark(self) -> int:
        return self.__diploma_project.get_mark()
