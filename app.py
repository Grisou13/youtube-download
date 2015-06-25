#!/usr/bin/python
# -*- coding: UTF-8 -*-
from kivy.app import App
from kivy.uix.gridlayout import GridLayout
from kivy.uix.popup import Popup
from kivy.uix.button import Button
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.label import Label
from kivy.app import App
from kivy.clock import Clock
from kivy.uix.textinput import TextInput

class DownloadScreen(GridLayout):

    def __init__(self, **kwargs):
        super(DownloadScreen, self).__init__(**kwargs)
        self.cols = 2
        self.padding = 10
        self.add_widget(Label(text='Video Url'))
        self.username = TextInput(multiline=False)
        self.add_widget(self.username)
        def callback(instance):
            print('My button <%s>' % (instance))
        btn = Button(text='Download')
        btn.bind(on_press=callback)
        self.add_widget(btn)
        self.ClickBtn = Button(text="Click",
                             on_release=self.callpopup)
        self.add_widget(self.ClickBtn)
    def callpopup(self, event):
       dlg = MessageBox(titleheader="Titel Header", message="Any Message", options={"YES": "printyes()", "NO": "printno()"})
       print "Messagebox shows as kivy popup and we wait for the \nuser action and callback to go to either routine"

    def printyes(self):
       # routine for going yes
       print "You chose the Yes routine"

    def printno(self):
       # routine for going no
       print "You chose the No routine"

class MainApp(App):

    def build(self):
        return DownloadScreen()
#http://stackoverflow.com/questions/21894192/creation-of-an-input-dialog-using-kivy
class MessageBox(DownloadScreen):
    def __init__(self, titleheader="Title", message="Message", options={"OK": "self.ok()", "NO": "self.no()"}):

        def popup_callback(instance):
            "callback for button press"
            # print('Popup returns:', instance.text)
            self.retvalue = instance.text
            self.popup.dismiss()

        self.retvalue = None
        self.options = options
        box = BoxLayout(orientation='vertical')
        box.add_widget(Label(text=message, font_size=20))
        b_list =  []
        buttonbox = BoxLayout(orientation='horizontal')
        for b in options:
            b_list.append(Button(text=b, size_hint=(1,.35), font_size=20))
            b_list[-1].bind(on_press=popup_callback)
            buttonbox.add_widget(b_list[-1])
        box.add_widget(buttonbox)
        self.popup = Popup(title=titleheader, content=box, size_hint=(None, None), size=(400, 400))
        self.popup.open()
        self.popup.bind(on_dismiss=self.OnClose)

    def OnClose(self, event):
        self.popup.unbind(on_dismiss=self.OnClose)
        self.popup.dismiss()
        if self.retvalue != None:
            command = "super(MessageBox, self)."+self.options[self.retvalue]
            # print "command", command
            exec command
if __name__ == '__main__':
    MainApp().run()