#pragma once
#include "vecmat.h"

/**
@file
Subclass of MyFrame1, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include

#include <wx/filedlg.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>


struct Point {
	float x, y, z;
	Point(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
};

struct Color {
	int R, G, B;
	Color(int _R, int _G, int _B) : R(_R), G(_G), B(_B) {}
};

struct Segment {
	Point point;
	Color color;
	float condition;
	Segment(Point _point, Color _color) : point(_point), color(_color) {}
};

/** Implementing MyFrame1 */
class GUIMyFrame : public MyFrame1
{
	protected:
		void WxPanel_Repaint( wxUpdateUIEvent& event );
		void Scrolls_Updated( wxScrollEvent& event );
		void Choice_Updated(wxCommandEvent& event);
		 //void Zapisz(wxCommandEvent& event);
		void Rysuj(wxCommandEvent& event);
	public:
		/** Constructor */
		GUIMyFrame( wxWindow* parent );
	//// end generated class members
		//TYCH FUNKCJI NIE RUSZAJ BO TO PRZEKSZTALCENIA I SA GIT
		Matrix4 Translacja(double x, double y, double z);
		Matrix4 RotacjaX(double kat);
		Matrix4 RotacjaY(double kat);
		Matrix4 RotacjaZ(double kat);
		Matrix4 RotacjaCalosc(double kat_x, double kat_y, double kat_z);
		void Normalizuj(Vector4 &vec);
		Matrix4 Perspektywa();
		Matrix4 Dopasowanie(double w, double h);
		void Koloroj(int i, int j);
		//TUTAJ RYSUJE KOLECZKA
		void WstawPunkty(Matrix4 & mac, wxDC *dc);
		void RysujOsie(Matrix4 & mac, wxDC *dc, float szerokosc, float wysokosc);
		float ConditionZ(Point point);
		Color Fun0(int i, int j);
		float Fun1(float fi, float ro);
		void VecSort();
  void Repaint();
	private:
		int m_r;
		int m_rs;
		int m_fi;
		int m_ro;
		int t_x;
		int t_y;
		int t_z;
		int o_x;
		int o_y;
		int o_z;
		int m_f; // 0 - dla pierwszej funckji, 1- dla drugiej itd...
		bool tryb1;
		bool tryb2;
		float m_max;
		float m_min;


};

