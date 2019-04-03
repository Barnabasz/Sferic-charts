///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxVERTICAL);

	m_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	bSizer2->Add(m_panel, 1, wxEXPAND | wxALL, 5);


	bSizer1->Add(bSizer2, 4, wxEXPAND, 5);

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer(wxVERTICAL);

	/*m_comboBox1 = new wxComboBox(this, wxID_ANY, wxT("Funkcje"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
	m_comboBox1->Append(wxT("Funkcja1"));
	m_comboBox1->Append(wxT("Funckja2"));
	m_comboBox1->Append(wxT("Funkcja3"));
	m_comboBox1->Append(wxT("Funkcja4"));
	bSizer3->Add(m_comboBox1, 0, wxALL | wxEXPAND, 5);*/

	wxString WxChoiceChoices[] = { _("Funkcja1"), _("Funkcja2"), _("Funkcja3"), _("Funkcja4") };
	int WxChoiceNChoices = sizeof(WxChoiceChoices) / sizeof(wxString);
	WxChoice = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, WxChoiceNChoices, WxChoiceChoices, 0);
	WxChoice->SetSelection(0);
	bSizer3->Add(WxChoice, 0, wxALL | wxEXPAND, 5);

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer(wxHORIZONTAL);

	Wersja1 = new wxRadioButton(this, wxID_ANY, wxT("Tryb 1"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer7->Add(Wersja1, 1, wxALL, 5);

	Wersja2 = new wxRadioButton(this, wxID_ANY, wxT("Punkty"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer7->Add(Wersja2, 1, wxALL, 5);


	bSizer3->Add(bSizer7, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer(wxHORIZONTAL);

	r_text = new wxStaticText(this, wxID_ANY, wxT("r: "), wxDefaultPosition, wxDefaultSize, 0);
	r_text->Wrap(-1);
	bSizer4->Add(r_text, 0, wxALL, 5);

	slider_r = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer4->Add(slider_r, 1, wxALL, 5);

	r_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	r_val->Wrap(-1);
	bSizer4->Add(r_val, 0, wxALL, 5);


	bSizer3->Add(bSizer4, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer(wxHORIZONTAL);

	fi_text = new wxStaticText(this, wxID_ANY, wxT("fi: "), wxDefaultPosition, wxDefaultSize, 0);
	fi_text->Wrap(-1);
	bSizer5->Add(fi_text, 0, wxALL, 5);

	slider_fi = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer5->Add(slider_fi, 1, wxALL, 5);

	fi_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	fi_val->Wrap(-1);
	bSizer5->Add(fi_val, 0, wxALL, 5);


	bSizer3->Add(bSizer5, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer(wxHORIZONTAL);

	ro_text = new wxStaticText(this, wxID_ANY, wxT("ro:"), wxDefaultPosition, wxDefaultSize, 0);
	ro_text->Wrap(-1);
	bSizer6->Add(ro_text, 0, wxALL, 5);

	slider_ro = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer6->Add(slider_ro, 1, wxALL, 5);

	ro_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	ro_val->Wrap(-1);
	bSizer6->Add(ro_val, 0, wxALL, 5);


	bSizer3->Add(bSizer6, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer(wxHORIZONTAL);

	m_button1 = new wxButton(this, wxID_ANY, wxT("Rysuj"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer8->Add(m_button1, 0, wxALL, 5);

	m_button2 = new wxButton(this, wxID_ANY, wxT("Zapisz"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer8->Add(m_button2, 0, wxALL, 5);


	bSizer3->Add(bSizer8, 1, 0, 5);

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer(wxHORIZONTAL);

	xT_text = new wxStaticText(this, wxID_ANY, wxT("Translacja X: "), wxDefaultPosition, wxDefaultSize, 0);
	xT_text->Wrap(-1);
	bSizer9->Add(xT_text, 0, wxALL, 5);

	slider_xT = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer9->Add(slider_xT, 1, wxALL, 5);

	xT_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	xT_val->Wrap(-1);
	bSizer9->Add(xT_val, 0, wxALL, 5);


	bSizer3->Add(bSizer9, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer(wxHORIZONTAL);

	yT_text = new wxStaticText(this, wxID_ANY, wxT("Translacja Y:"), wxDefaultPosition, wxDefaultSize, 0);
	yT_text->Wrap(-1);
	bSizer10->Add(yT_text, 0, wxALL, 5);

	slider_yT = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer10->Add(slider_yT, 1, wxALL, 5);

	yT_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	yT_val->Wrap(-1);
	bSizer10->Add(yT_val, 0, wxALL, 5);


	bSizer3->Add(bSizer10, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer(wxHORIZONTAL);

	zT_text = new wxStaticText(this, wxID_ANY, wxT("Translacja Z:"), wxDefaultPosition, wxDefaultSize, 0);
	zT_text->Wrap(-1);
	bSizer11->Add(zT_text, 0, wxALL, 5);

	slider_zT = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer11->Add(slider_zT, 1, wxALL, 5);

	zT_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	zT_val->Wrap(-1);
	bSizer11->Add(zT_val, 0, wxALL, 5);


	bSizer3->Add(bSizer11, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer(wxHORIZONTAL);

	xO_text = new wxStaticText(this, wxID_ANY, wxT("Ox: "), wxDefaultPosition, wxDefaultSize, 0);
	xO_text->Wrap(-1);
	bSizer12->Add(xO_text, 0, wxALL, 5);

	slider_xO = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer12->Add(slider_xO, 1, wxALL, 5);

	xO_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	xO_val->Wrap(-1);
	bSizer12->Add(xO_val, 0, wxALL, 5);


	bSizer3->Add(bSizer12, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer(wxHORIZONTAL);

	yO_text = new wxStaticText(this, wxID_ANY, wxT("Oy: "), wxDefaultPosition, wxDefaultSize, 0);
	yO_text->Wrap(-1);
	bSizer13->Add(yO_text, 0, wxALL, 5);

	slider_yO = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer13->Add(slider_yO, 1, wxALL, 5);

	yO_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	yO_val->Wrap(-1);
	bSizer13->Add(yO_val, 0, wxALL, 5);


	bSizer3->Add(bSizer13, 1, wxEXPAND, 5);

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer(wxHORIZONTAL);

	zO_text = new wxStaticText(this, wxID_ANY, wxT("Oz: "), wxDefaultPosition, wxDefaultSize, 0);
	zO_text->Wrap(-1);
	bSizer14->Add(zO_text, 0, wxALL, 5);

	slider_zO = new wxSlider(this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL);
	bSizer14->Add(slider_zO, 1, wxALL, 5);

	zO_val = new wxStaticText(this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0);
	zO_val->Wrap(-1);
	bSizer14->Add(zO_val, 0, wxALL, 5);


	bSizer3->Add(bSizer14, 1, wxEXPAND, 5);


	bSizer1->Add(bSizer3, 1, wxEXPAND, 5);


	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);


	m_panel->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(MyFrame1::WxPanel_Repaint), NULL, this);
	m_button1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::Rysuj), NULL, this);
	m_button2->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::Zapisz), NULL, this);



	slider_r->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_r->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_fi->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_fi->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_ro->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_ro->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_xT->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xT->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_yT->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yT->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_zT->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zT->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_xO->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_xO->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_yO->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_yO->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	slider_zO->Connect(wxEVT_SCROLL_TOP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_BOTTOM, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_LINEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_PAGEUP, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);
	slider_zO->Connect(wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MyFrame1::Scrolls_Updated), NULL, this);

	WxChoice->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(MyFrame1::Choice_Updated), NULL, this);
	Wersja1->Connect(wxEVT_RADIOBUTTON, wxCommandEventHandler(MyFrame1::Choice_Updated), NULL, this);
	Wersja2->Connect(wxEVT_RADIOBUTTON, wxCommandEventHandler(MyFrame1::Choice_Updated), NULL, this);

	
}

MyFrame1::~MyFrame1()
{
}
