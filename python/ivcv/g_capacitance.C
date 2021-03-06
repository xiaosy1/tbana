void g_capacitance()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Feb  7 19:25:18 2020) by ROOT version 6.14/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-21.6,-6e-11,122.4,3.4e-10);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.15);
   c->SetRightMargin(0.15);
   c->SetBottomMargin(0.15);
   c->SetFrameFillStyle(0);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameLineWidth(2);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle(";Bias voltage(V);Capacitance(F)");
   
   Double_t Graph_fx7[60] = {
   0,
   2,
   4,
   6,
   8,
   10,
   12,
   14,
   16,
   18,
   20,
   22,
   24,
   26,
   28,
   30,
   32,
   34,
   36,
   38,
   40,
   42,
   44,
   46,
   48,
   50,
   52,
   54,
   56,
   58,
   60,
   62,
   64,
   66,
   68,
   70,
   72,
   74,
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104,
   106,
   108,
   110,
   112,
   114,
   116,
   118};
   Double_t Graph_fy7[60] = {
   6.794975e-10,
   2.833545e-10,
   2.283935e-10,
   1.956605e-10,
   1.791985e-10,
   1.669825e-10,
   1.568935e-10,
   1.479555e-10,
   1.395345e-10,
   1.310195e-10,
   1.214565e-10,
   1.081785e-10,
   5.876947e-11,
   1.803987e-11,
   1.456417e-11,
   1.305387e-11,
   1.214777e-11,
   1.153847e-11,
   1.109107e-11,
   1.074377e-11,
   1.046847e-11,
   1.024987e-11,
   1.008197e-11,
   9.97207e-12,
   9.91487e-12,
   9.88457e-12,
   9.86667e-12,
   9.85367e-12,
   9.84267e-12,
   9.83407e-12,
   9.82647e-12,
   9.82037e-12,
   9.81567e-12,
   9.81067e-12,
   9.80507e-12,
   9.80017e-12,
   9.79497e-12,
   9.78367e-12,
   9.77417e-12,
   9.76697e-12,
   9.75717e-12,
   9.74907e-12,
   9.74177e-12,
   9.73287e-12,
   9.72167e-12,
   9.71157e-12,
   9.70507e-12,
   9.70047e-12,
   9.69617e-12,
   9.69157e-12,
   9.68817e-12,
   9.68627e-12,
   9.68017e-12,
   9.67707e-12,
   9.68047e-12,
   3.167657e-11,
   1.904605e-10,
   7.253435e-10,
   1.514931e-09,
   2.451901e-09};
   TGraph *graph = new TGraph(60,Graph_fx7,Graph_fy7);
   graph->SetName("Graph");
   graph->SetTitle("NDL-EPI-BV60-300-DS-01_2019-09-16_1;Bias Voltage [V];Capacitance [F]");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","NDL-EPI-BV60-300-DS-01_2019-09-16_1",100,0,129.8);
   Graph_Graph7->SetMinimum(8.709363e-12);
   Graph_Graph7->SetMaximum(2.696123e-09);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);
   Graph_Graph7->SetLineStyle(0);
   Graph_Graph7->SetMarkerStyle(20);
   Graph_Graph7->GetXaxis()->SetTitle("Bias Voltage [V]");
   Graph_Graph7->GetXaxis()->SetNdivisions(508);
   Graph_Graph7->GetXaxis()->SetLabelFont(43);
   Graph_Graph7->GetXaxis()->SetLabelSize(24);
   Graph_Graph7->GetXaxis()->SetTitleSize(30);
   Graph_Graph7->GetXaxis()->SetTickLength(0.02);
   Graph_Graph7->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph7->GetXaxis()->SetTitleFont(43);
   Graph_Graph7->GetYaxis()->SetTitle("Capacitance [F]");
   Graph_Graph7->GetYaxis()->SetNdivisions(508);
   Graph_Graph7->GetYaxis()->SetLabelFont(43);
   Graph_Graph7->GetYaxis()->SetLabelSize(24);
   Graph_Graph7->GetYaxis()->SetTitleSize(30);
   Graph_Graph7->GetYaxis()->SetTickLength(0.02);
   Graph_Graph7->GetYaxis()->SetTitleFont(43);
   Graph_Graph7->GetZaxis()->SetNdivisions(508);
   Graph_Graph7->GetZaxis()->SetLabelFont(43);
   Graph_Graph7->GetZaxis()->SetLabelSize(24);
   Graph_Graph7->GetZaxis()->SetTitleSize(30);
   Graph_Graph7->GetZaxis()->SetTickLength(0.02);
   Graph_Graph7->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph7);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx8[91] = {
   0,
   2,
   4,
   6,
   8,
   10,
   12,
   14,
   16,
   18,
   20,
   22,
   24,
   26,
   28,
   30,
   32,
   34,
   36,
   38,
   40,
   42,
   44,
   46,
   48,
   50,
   52,
   54,
   56,
   58,
   60,
   62,
   64,
   66,
   68,
   70,
   72,
   74,
   76,
   78,
   80,
   82,
   84,
   86,
   88,
   90,
   92,
   94,
   96,
   98,
   100,
   102,
   104,
   106,
   108,
   110,
   112,
   114,
   116,
   118,
   120,
   122,
   124,
   126,
   128,
   130,
   132,
   134,
   136,
   138,
   140,
   142,
   144,
   146,
   148,
   150,
   152,
   154,
   156,
   158,
   160,
   162,
   164,
   166,
   168,
   170,
   172,
   174,
   176,
   178,
   180};
   Double_t Graph_fy8[91] = {
   3.862252e-10,
   2.339442e-10,
   1.986152e-10,
   1.780602e-10,
   1.635782e-10,
   1.520882e-10,
   1.420862e-10,
   1.326552e-10,
   1.228932e-10,
   1.111222e-10,
   8.899418e-11,
   2.937738e-11,
   1.816548e-11,
   1.440598e-11,
   1.235498e-11,
   1.101618e-11,
   1.004528e-11,
   9.310583e-12,
   8.725883e-12,
   8.243783e-12,
   7.838983e-12,
   7.491683e-12,
   7.190183e-12,
   6.924983e-12,
   6.689183e-12,
   6.478183e-12,
   6.287183e-12,
   6.112683e-12,
   5.954283e-12,
   5.808783e-12,
   5.674583e-12,
   5.549583e-12,
   5.433983e-12,
   5.325883e-12,
   5.223983e-12,
   5.128783e-12,
   5.039383e-12,
   4.953783e-12,
   4.873883e-12,
   4.798383e-12,
   4.726683e-12,
   4.658283e-12,
   4.593883e-12,
   4.532583e-12,
   4.474583e-12,
   4.419083e-12,
   4.366183e-12,
   4.315783e-12,
   4.279783e-12,
   4.236983e-12,
   4.197083e-12,
   4.164583e-12,
   4.138783e-12,
   4.119683e-12,
   4.105383e-12,
   4.094983e-12,
   4.086783e-12,
   4.079883e-12,
   4.074583e-12,
   4.070183e-12,
   4.065883e-12,
   4.062583e-12,
   4.059283e-12,
   4.056383e-12,
   4.053683e-12,
   4.050983e-12,
   4.048883e-12,
   4.046483e-12,
   4.044783e-12,
   4.042983e-12,
   4.040883e-12,
   4.039583e-12,
   4.037783e-12,
   4.036383e-12,
   4.035083e-12,
   4.033583e-12,
   4.032283e-12,
   4.031083e-12,
   4.030083e-12,
   4.028483e-12,
   4.027583e-12,
   4.023483e-12,
   -1.102052e-11,
   -1.499508e-10,
   -2.998098e-10,
   -3.896608e-10,
   -4.322578e-10,
   -4.436088e-10,
   -4.410708e-10,
   -4.223118e-10,
   -4.073528e-10};
   graph = new TGraph(91,Graph_fx8,Graph_fy8);
   graph->SetName("Graph");
   graph->SetTitle("NDL-EPI-BV170-300-DS-02_2019-08-28_1;Bias Voltage [V];Capacitance [F]");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","NDL-EPI-BV170-300-DS-02_2019-08-28_1",100,0,198);
   Graph_Graph8->SetMinimum(-5.265922e-10);
   Graph_Graph8->SetMaximum(4.692086e-10);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);
   Graph_Graph8->SetLineStyle(0);
   Graph_Graph8->SetMarkerStyle(20);
   Graph_Graph8->GetXaxis()->SetTitle("Bias Voltage [V]");
   Graph_Graph8->GetXaxis()->SetNdivisions(508);
   Graph_Graph8->GetXaxis()->SetLabelFont(43);
   Graph_Graph8->GetXaxis()->SetLabelSize(24);
   Graph_Graph8->GetXaxis()->SetTitleSize(30);
   Graph_Graph8->GetXaxis()->SetTickLength(0.02);
   Graph_Graph8->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph8->GetXaxis()->SetTitleFont(43);
   Graph_Graph8->GetYaxis()->SetTitle("Capacitance [F]");
   Graph_Graph8->GetYaxis()->SetNdivisions(508);
   Graph_Graph8->GetYaxis()->SetLabelFont(43);
   Graph_Graph8->GetYaxis()->SetLabelSize(24);
   Graph_Graph8->GetYaxis()->SetTitleSize(30);
   Graph_Graph8->GetYaxis()->SetTickLength(0.02);
   Graph_Graph8->GetYaxis()->SetTitleFont(43);
   Graph_Graph8->GetZaxis()->SetNdivisions(508);
   Graph_Graph8->GetZaxis()->SetLabelFont(43);
   Graph_Graph8->GetZaxis()->SetLabelSize(24);
   Graph_Graph8->GetZaxis()->SetTitleSize(30);
   Graph_Graph8->GetZaxis()->SetTickLength(0.02);
   Graph_Graph8->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph8);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("Bias voltage(V)");
   multigraph->GetXaxis()->SetRange(1,56);
   multigraph->GetXaxis()->SetNdivisions(508);
   multigraph->GetXaxis()->SetLabelFont(43);
   multigraph->GetXaxis()->SetLabelSize(24);
   multigraph->GetXaxis()->SetTitleSize(30);
   multigraph->GetXaxis()->SetTickLength(0.02);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(43);
   multigraph->GetYaxis()->SetTitle("Capacitance(F)");
   multigraph->GetYaxis()->SetNdivisions(508);
   multigraph->GetYaxis()->SetLabelFont(43);
   multigraph->GetYaxis()->SetLabelSize(24);
   multigraph->GetYaxis()->SetTitleSize(30);
   multigraph->GetYaxis()->SetTickLength(0.02);
   multigraph->GetYaxis()->SetTitleFont(43);
   
   TLegend *leg = new TLegend(0.5,0.55,0.8,0.7,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(25);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","BV60","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph","BV170","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(43);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
