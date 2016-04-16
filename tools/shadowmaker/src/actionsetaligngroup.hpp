// generated by Fast Light User Interface Designer (fluid) version 1.0303

#ifndef actionsetaligngroup_hpp
#define actionsetaligngroup_hpp
#include <FL/Fl.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include "animationset.hpp"
#include <FL/Fl_Value_Slider.H>

class ActionSetAlignGroup : public Fl_Group {
public:
  ActionSetAlignGroup(int X, int Y, int W, int H, const char *L = 0);
private:
  inline void cb_8_i(Fl_Button*, void*);
  static void cb_8(Fl_Button*, void*);
  inline void cb_2_i(Fl_Button*, void*);
  static void cb_2(Fl_Button*, void*);
  inline void cb_4_i(Fl_Button*, void*);
  static void cb_4(Fl_Button*, void*);
  inline void cb__i(Fl_Button*, void*);
  static void cb_(Fl_Button*, void*);
public:
  Fl_Value_Slider *m_VSResolution;
private:
  inline void cb_1_i(Fl_Button*, void*);
  static void cb_1(Fl_Button*, void*);
  inline void cb_3_i(Fl_Button*, void*);
  static void cb_3(Fl_Button*, void*);
  inline void cb_5_i(Fl_Button*, void*);
  static void cb_5(Fl_Button*, void*);
  inline void cb_6_i(Fl_Button*, void*);
  static void cb_6(Fl_Button*, void*);
};
#endif