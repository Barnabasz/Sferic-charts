#include "GUIMyFrame.h"
#include <fstream>
#include <vector>

std::vector<Segment> punkty;

GUIMyFrame::GUIMyFrame( wxWindow* parent )
:
MyFrame1( parent )
{


 slider_r->SetRange(1, 20); slider_r->SetValue(10);
 slider_fi->SetRange(18, 360); slider_fi->SetValue(180);
 slider_ro->SetRange(18, 360); slider_r->SetValue(180);


 slider_xT->SetRange(-50, 50); slider_xT->SetValue(0);
 slider_yT->SetRange(-50, 50); slider_yT->SetValue(0);
 slider_zT->SetRange(-50, 50); slider_zT->SetValue(0);

 slider_xO->SetRange(0, 359); slider_xO->SetValue(0);
 slider_yO->SetRange(0, 359); slider_yO->SetValue(0);
 slider_zO->SetRange(0, 359); slider_zO->SetValue(0);

}

void GUIMyFrame::WxPanel_Repaint( wxUpdateUIEvent& event )
{
 Repaint();
}



void GUIMyFrame::Scrolls_Updated( wxScrollEvent& event )
{
r_val->SetLabel(wxString::Format(wxT("%d"), slider_r->GetValue() )); 


fi_val->SetLabel(wxString::Format(wxT("%d"), slider_fi->GetValue() ));  
ro_val->SetLabel(wxString::Format(wxT("%d"), slider_ro->GetValue() ));  

xT_val->SetLabel(wxString::Format(wxT("%d"), slider_xT->GetValue())); 
yT_val->SetLabel(wxString::Format(wxT("%d"), slider_yT->GetValue())); 
zT_val->SetLabel(wxString::Format(wxT("%d"), slider_zT->GetValue())); 

xO_val->SetLabel(wxString::Format(wxT("%d"), slider_xO->GetValue())); 
yO_val->SetLabel(wxString::Format(wxT("%d"), slider_yO->GetValue())); 
zO_val->SetLabel(wxString::Format(wxT("%d"), slider_zO->GetValue())); 
	m_r = slider_r->GetValue();
	m_fi = slider_fi->GetValue();
	m_ro = slider_ro->GetValue();
	t_x = -slider_xT->GetValue();
	t_y = slider_yT->GetValue();
	t_z = slider_zT->GetValue();
	o_x = slider_xO->GetValue();
	o_y = slider_yO->GetValue();
	o_z = slider_zO->GetValue();
	



Repaint();
}

void GUIMyFrame::Choice_Updated(wxCommandEvent& event) {
	m_f = WxChoice->GetSelection();
	Repaint();
	tryb1 = Wersja1->GetValue();
	tryb2 = Wersja2->GetValue();
}

Point kart(float r, float fi, float teta)
{
	float x, y, z;
	x = r * cos(teta) * cos(fi);
	y = r * cos(teta) * sin(fi);
	z = r * sin(teta);
	return Point(x,y,z);
}

void GUIMyFrame::Rysuj(wxCommandEvent& event) {
	//USTAWIAM PARAMETRY RYSOWANIA
	punkty.clear();
	float n_fi = 360 / m_fi;
	float n_ro = 360 / m_ro;
	
	//TUTAJ WYPELNIAM CZYMS PRZYKLADOWYM W TYM PRZYPADKU CWIARKI SFERY MAJA INNE KOLORY
	if(m_f!=0){
		m_max = Fun1(0, 0);
		m_min = Fun1(0, 0);
		for(int i = 0; i < 360; i+=n_fi)
			for (int j = -90; j < 90; j+=n_ro){
				std::cout << Fun1(i, j) <<  std::endl;
				if(Fun1(i, j)>m_max)
					m_max = Fun1(i, j);
				if(Fun1(i, j)<m_min)
					m_min = Fun1(i, j);
			}
	}
	std::cout << m_min << "  " << m_max <<  std::endl;
	if(tryb1)
		
		for(int i = 0; i < 360; i+=n_fi)
			for (int j = -90; j < 90; j+=n_ro)
			{
				Koloroj(i, j);
				
			}
	else if(tryb2)
	{
		
		for (int i = 0; i < 360; i += n_fi)
			for (int j = -90; j < 90; j += n_ro)
				punkty.push_back(Segment(kart(Fun1(i ,j), i* M_PI / 180.0, j* M_PI / 180.0), Color(255, 0, 0)));
				
		punkty.push_back(Segment(kart(0,0,0), Color(255, 0, 0)));
	}
	Repaint();
}

void GUIMyFrame::Repaint()
{
	wxClientDC dc1(m_panel);
	wxBufferedDC dc(&dc1);
	
	dc.SetBackground(*wxWHITE_BRUSH);
	dc.Clear();

	dc.SetPen(*wxBLACK_PEN);
	dc.SetBrush(*wxTRANSPARENT_BRUSH);

	dc.DrawText("r: ", wxPoint(10, 30));
	dc.DrawText(wxString::Format(wxT("%d"), m_r), wxPoint(80, 30));

	dc.DrawText("fi: ", wxPoint(10, 60));
	dc.DrawText(wxString::Format(wxT("%d"), m_fi), wxPoint(80, 60));

	dc.DrawText("ro: ", wxPoint(10, 90));
	dc.DrawText(wxString::Format(wxT("%d"), m_ro), wxPoint(80, 90));

	dc.DrawText("Translacja X: ", wxPoint(10, 120));
	dc.DrawText(wxString::Format(wxT("%d"), t_x), wxPoint(120, 120));

	dc.DrawText("Translacja Y: ", wxPoint(10, 150));
	dc.DrawText(wxString::Format(wxT("%d"), t_y), wxPoint(120, 150));

	dc.DrawText("Translacja Z: ", wxPoint(10, 180));
	dc.DrawText(wxString::Format(wxT("%d"), t_z), wxPoint(120, 180));

	dc.DrawText("OX: ", wxPoint(10, 210));
	dc.DrawText(wxString::Format(wxT("%d"), o_x), wxPoint(80, 210));

	dc.DrawText("Funkcja: ", wxPoint(10, 240));
	dc.DrawText(wxString::Format(wxT("%d"), m_f), wxPoint(80, 240));


	dc.DrawText("Tryb 1: ", wxPoint(10, 280));
	dc.DrawText(wxString::Format(wxT("%d"), tryb1), wxPoint(80, 280));

	dc.DrawText("Tryb 2: ", wxPoint(10, 310));
	dc.DrawText(wxString::Format(wxT("%d"), tryb2), wxPoint(80, 310));

	wxSize size = m_panel->GetClientSize();
	//TUTAJ JA ZACZALEM PISAC
	double szerokosc = size.GetX();
	double wysokosc = size.GetY();
	//double wysokosc = szerokosc;
	Matrix4 macierz;
	//TUTAJ MASZ TE MACIERZ PRZEKSZTALCEN
	macierz = Dopasowanie(szerokosc, wysokosc)*Perspektywa()
		* Translacja(t_x, t_y, t_z-200)
		* RotacjaCalosc(-o_x * M_PI / 180.0, -o_y * M_PI / 180.0, -o_z * M_PI / 180.0);
	
	//Rysowanie osi
	RysujOsie(macierz, &dc, szerokosc, wysokosc);
	//TA FUNKCJA RYSUJE PUNKTY
	WstawPunkty(macierz, &dc);
}

void GUIMyFrame::RysujOsie(Matrix4 & mac, wxDC *dc, float szerokosc, float wysokosc)
{
	dc->SetPen(*wxBLACK_PEN);
	Vector4 x1, x2;
	x1.Set(szerokosc / 2, wysokosc / 2, 0);
	//x1 = mac * x1;
	//Normalizuj(x1);
	x2.Set(szerokosc / 2 + 500, wysokosc / 2, 0);
	//x2 = mac * x2;
	//Normalizuj(x2);
	Vector4 y1, y2;
	y1.Set(szerokosc / 2, wysokosc / 2, 0);
	//y1 = mac * y1;
	y2.Set(szerokosc / 2, wysokosc / 2 - 500, 0);
	//y2 = mac * y2;
	//Vector4 z1, z2;
	//z1.Set(szerokosc / 2, wysokosc / 2, 0);
	//z1 = mac * z1;
	//z2.Set(szerokosc / 2, wysokosc / 2, -200);
	//z2 = mac * z2;
	dc->DrawLine(x1.GetX(),x1.GetY(),x2.GetX(),x2.GetY());
	dc->DrawText(wxString::Format(wxT("%f %f %f %f"), x1.GetX(), x1.GetY(), x2.GetX(), x2.GetY()), wxPoint(380, 310));
	dc->DrawLine(y1.GetX(), y1.GetY(), y2.GetX(), y2.GetY());
//	dc->DrawLine(z1.GetX(), z1.GetY(), z2.GetX(), z2.GetY());
}

void GUIMyFrame::WstawPunkty(Matrix4 & mac, wxDC *dc)
{
	//ITERUJE PO VECTORZE PUNKTY I SIE RYSUJA W TAKIEJ KOLEJNOSCI W JAKIEJ SA W WEKTORZE
	
	
	
	for (unsigned int i = 0; i < punkty.size(); ++i)
	{	
		Segment seg = punkty[i];
		if(ConditionZ(seg.point)>m_rs || tryb2){
			dc->SetPen(wxPen(wxColor(seg.color.R, seg.color.G, seg.color.B)));
			dc->SetBrush(wxBrush(wxColor(seg.color.R, seg.color.G, seg.color.B)));

			Vector4 vec_punkt;
			vec_punkt.Set(seg.point.x, seg.point.y, seg.point.z);

			vec_punkt = mac * vec_punkt;
			Normalizuj(vec_punkt);
			dc->DrawCircle(vec_punkt.GetX(), vec_punkt.GetY(), 2.0);
		}
	}
}
// TE RZECZY NIZEJ NIE ZMIENIAJ
Matrix4 GUIMyFrame::Perspektywa()
{

	Matrix4 m;

	m.data[0][0] = 1;
	m.data[1][1] = 1;

	m.data[3][2] = 1. / 2.;

	return m;
}

Matrix4 GUIMyFrame::Dopasowanie(double szerokosc, double wysokosc)
{
	Matrix4 m;
	m.data[0][0] = szerokosc / 2;									m.data[0][3] = szerokosc / 2;
	m.data[1][1] = -wysokosc / 2;	m.data[1][3] = wysokosc / 2;
	m.data[2][2] = wysokosc / 2;

	return m;
}

Matrix4 GUIMyFrame::Translacja(double x, double y, double z)
{
	Matrix4 m;
	m.data[0][0] = 1.0;											 m.data[0][3] = x;
	m.data[1][1] = 1.0;						 m.data[1][3] = y;
	m.data[2][2] = 1.0;	 m.data[2][3] = z;


	return m;
}

Matrix4 GUIMyFrame::RotacjaX(double kat)
{
	Matrix4 m;
	m.data[0][0] = 1.0;
	m.data[1][1] = cos(kat);		m.data[1][2] = -sin(kat);
	m.data[2][1] = sin(kat);
	m.data[2][2] = cos(kat);


	return m;
}

Matrix4 GUIMyFrame::RotacjaY(double kat)
{
	Matrix4 m;
	m.data[0][0] = cos(kat);	m.data[0][2] = sin(kat);
	m.data[1][1] = 1.0;
	m.data[2][0] = -sin(kat);								m.data[2][2] = cos(kat);




	return m;
}

Matrix4 GUIMyFrame::RotacjaZ(double kat)
{
	Matrix4 m;
	m.data[0][0] = cos(kat); m.data[0][1] = -sin(kat);
	m.data[1][0] = sin(kat); m.data[1][1] = cos(kat);
	m.data[2][2] = 1.0;



	return m;
}

Matrix4 GUIMyFrame::RotacjaCalosc(double kat_x, double kat_y, double kat_z)
{
	Matrix4 rot_x = RotacjaX(kat_x);
	Matrix4 rot_y = RotacjaY(kat_y);
	Matrix4 rot_z = RotacjaZ(kat_z);
	return rot_x * rot_y * rot_z;
}

void GUIMyFrame::Normalizuj(Vector4 &vec)
{
	vec.data[0] = vec.data[0] / vec.data[3];
	vec.data[1] = vec.data[1] / vec.data[3];
	vec.data[2] = vec.data[2] / vec.data[3];
}

 
void GUIMyFrame::Koloroj(int i, int j){
	m_rs = 2*m_r;
	float fi = i* M_PI / 180.0, ro = j* M_PI/180.0;
	
	
		//std::cout << i << "\t" << j << std::endl;
		if(m_f==0){
			punkty.push_back(Segment(kart(5*m_r, fi,ro), Fun0(i, j)));
			
		}
		else {
			float var = (Fun1(i, j)-m_min)*(400.0/(m_max-m_min))-200.0;
			//std::cout << Fun1(i, j) << "  " << m_max << "  " << var << std::endl;
			Color color(55,0,55);
			if(var>0.0)
				color.R = var+55;
			else
				color.B = -var+55;
			punkty.push_back(Segment(kart(5*m_r, fi, ro), color));
		}
	
}


Color GUIMyFrame::Fun0(int i, int j){
	if (i <= 180)
	{
		if(j<=0)
			return Color(255, 0, 0);
		else
			return Color(255, 255, 0);
	}
	else
	{
		if (j<=0)
			return Color(0, 255, 0);
		else
			return Color(0, 0, 255);
	}
}

float GUIMyFrame::Fun1(float fi, float ro){
	float var = 0;
	if(m_f==1){
		fi = fi* M_PI / 180.0, ro = ro* M_PI / 180.0; 
		var = 2*m_r*(sin(fi*m_r)+cos(ro));
	}
	if(m_f==2){
		//fi = fi* M_PI / 180.0, ro = ro* M_PI / 180.0; 
		var = 2 * m_r+fi/10.0+ro/15.0;
	}
	if(m_f==3){
		fi = fi* M_PI / 180.0, ro = ro* M_PI / 180.0; 
		var = 10*m_r*1.0/4.0*sqrt(15/(4*M_PI))*cos(fi)*sin(ro);
	}
	return var;
	
}

float GUIMyFrame::ConditionZ(Point point){
	//Point point = kart(1, fi, ro);
	Matrix4 macierz = RotacjaCalosc(-o_x * M_PI / 180.0, -o_y * M_PI / 180.0, -o_z * M_PI / 180.0);
	Vector4 vec_punkt;
	vec_punkt.Set(point.x, point.y, point.z);
	vec_punkt = macierz * vec_punkt;
	return vec_punkt.GetZ();
	
}

void GUIMyFrame::VecSort(){
	
	//TU SORTOWANIE
}