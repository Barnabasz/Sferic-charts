///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////
#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/sizer.h>
#include <wx/combobox.h>
#include <wx/radiobut.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/choice.h>
#include <wx/event.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
private:

	public:
	wxPanel* m_panel;
	wxComboBox* m_comboBox1;
	wxRadioButton* Wersja1;
	wxRadioButton* Wersja2;
	wxStaticText* r_text;
	wxSlider* slider_r;
	wxStaticText* r_val;
	wxStaticText* fi_text;
	wxSlider* slider_fi;
	wxStaticText* fi_val;
	wxStaticText* ro_text;
	wxSlider* slider_ro;
	wxStaticText* ro_val;
	wxButton* m_button1;
	wxButton* m_button2;
	wxStaticText* xT_text;
	wxSlider* slider_xT;
	wxStaticText* xT_val;
	wxStaticText* yT_text;
	wxSlider* slider_yT;
	wxStaticText* yT_val;
	wxStaticText* zT_text;
	wxSlider* slider_zT;
	wxStaticText* zT_val;
	wxStaticText* xO_text;
	wxSlider* slider_xO;
	wxStaticText* xO_val;
	wxStaticText* yO_text;
	wxSlider* slider_yO;
	wxStaticText* yO_val;
	wxStaticText* zO_text;
	wxSlider* slider_zO;
	wxStaticText* zO_val;
	wxChoice *WxChoice;

protected:
	virtual void Scrolls_Updated(wxScrollEvent& event) { event.Skip(); }
	virtual void Choice_Updated(wxCommandEvent& event) { event.Skip(); }
	virtual void WxPanel_Repaint(wxUpdateUIEvent& event) { event.Skip(); }
	virtual void Zapisz(wxCommandEvent& event) { event.Skip(); }
	virtual void Rysuj(wxCommandEvent& event) { event.Skip(); }


public:

	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(962, 534), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame1();

};
