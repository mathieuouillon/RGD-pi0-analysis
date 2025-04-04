#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_e()
{
//=========Macro generated from canvas: c1/
//=========  (Thu Apr  3 13:10:54 2025) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-5.526316,-704.771,40.52632,5168.321);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   
   TH1F *hs_stack_4 = new TH1F("hs_stack_4","",200,0,35);
   hs_stack_4->SetMinimum(0);
   hs_stack_4->SetMaximum(4463.55);
   hs_stack_4->SetDirectory(nullptr);
   hs_stack_4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_4->SetLineColor(ci);
   hs_stack_4->SetLineWidth(0);
   hs_stack_4->GetXaxis()->SetTitle("#theta_{e} [deg.]");
   hs_stack_4->GetXaxis()->SetNdivisions(505);
   hs_stack_4->GetXaxis()->SetLabelFont(42);
   hs_stack_4->GetXaxis()->SetTitleSize(0.05);
   hs_stack_4->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_4->GetXaxis()->SetTitleFont(42);
   hs_stack_4->GetYaxis()->SetLabelFont(42);
   hs_stack_4->GetYaxis()->SetTitleFont(42);
   hs_stack_4->GetZaxis()->SetLabelFont(42);
   hs_stack_4->GetZaxis()->SetTitleOffset(1);
   hs_stack_4->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_4);
   
   
   TH1D *theta_e_stack_1 = new TH1D("theta_e_stack_1","",200,0,35);
   theta_e_stack_1->SetBinContent(35,19);
   theta_e_stack_1->SetBinContent(36,108);
   theta_e_stack_1->SetBinContent(37,320);
   theta_e_stack_1->SetBinContent(38,547);
   theta_e_stack_1->SetBinContent(39,867);
   theta_e_stack_1->SetBinContent(40,1223);
   theta_e_stack_1->SetBinContent(41,1817);
   theta_e_stack_1->SetBinContent(42,2198);
   theta_e_stack_1->SetBinContent(43,2502);
   theta_e_stack_1->SetBinContent(44,2816);
   theta_e_stack_1->SetBinContent(45,3094);
   theta_e_stack_1->SetBinContent(46,3255);
   theta_e_stack_1->SetBinContent(47,3530);
   theta_e_stack_1->SetBinContent(48,3745);
   theta_e_stack_1->SetBinContent(49,3997);
   theta_e_stack_1->SetBinContent(50,4165);
   theta_e_stack_1->SetBinContent(51,4151);
   theta_e_stack_1->SetBinContent(52,4098);
   theta_e_stack_1->SetBinContent(53,4115);
   theta_e_stack_1->SetBinContent(54,4112);
   theta_e_stack_1->SetBinContent(55,4150);
   theta_e_stack_1->SetBinContent(56,4107);
   theta_e_stack_1->SetBinContent(57,4251);
   theta_e_stack_1->SetBinContent(58,4048);
   theta_e_stack_1->SetBinContent(59,4182);
   theta_e_stack_1->SetBinContent(60,3961);
   theta_e_stack_1->SetBinContent(61,3973);
   theta_e_stack_1->SetBinContent(62,4018);
   theta_e_stack_1->SetBinContent(63,3893);
   theta_e_stack_1->SetBinContent(64,3796);
   theta_e_stack_1->SetBinContent(65,3747);
   theta_e_stack_1->SetBinContent(66,3632);
   theta_e_stack_1->SetBinContent(67,3545);
   theta_e_stack_1->SetBinContent(68,3455);
   theta_e_stack_1->SetBinContent(69,3232);
   theta_e_stack_1->SetBinContent(70,3356);
   theta_e_stack_1->SetBinContent(71,3277);
   theta_e_stack_1->SetBinContent(72,3134);
   theta_e_stack_1->SetBinContent(73,3090);
   theta_e_stack_1->SetBinContent(74,2972);
   theta_e_stack_1->SetBinContent(75,3072);
   theta_e_stack_1->SetBinContent(76,2872);
   theta_e_stack_1->SetBinContent(77,2790);
   theta_e_stack_1->SetBinContent(78,2695);
   theta_e_stack_1->SetBinContent(79,2714);
   theta_e_stack_1->SetBinContent(80,2665);
   theta_e_stack_1->SetBinContent(81,2597);
   theta_e_stack_1->SetBinContent(82,2491);
   theta_e_stack_1->SetBinContent(83,2478);
   theta_e_stack_1->SetBinContent(84,2366);
   theta_e_stack_1->SetBinContent(85,2361);
   theta_e_stack_1->SetBinContent(86,2366);
   theta_e_stack_1->SetBinContent(87,2193);
   theta_e_stack_1->SetBinContent(88,2249);
   theta_e_stack_1->SetBinContent(89,2194);
   theta_e_stack_1->SetBinContent(90,2161);
   theta_e_stack_1->SetBinContent(91,2155);
   theta_e_stack_1->SetBinContent(92,2059);
   theta_e_stack_1->SetBinContent(93,2061);
   theta_e_stack_1->SetBinContent(94,1985);
   theta_e_stack_1->SetBinContent(95,1966);
   theta_e_stack_1->SetBinContent(96,1911);
   theta_e_stack_1->SetBinContent(97,1942);
   theta_e_stack_1->SetBinContent(98,1896);
   theta_e_stack_1->SetBinContent(99,1863);
   theta_e_stack_1->SetBinContent(100,1789);
   theta_e_stack_1->SetBinContent(101,1799);
   theta_e_stack_1->SetBinContent(102,1799);
   theta_e_stack_1->SetBinContent(103,1781);
   theta_e_stack_1->SetBinContent(104,1716);
   theta_e_stack_1->SetBinContent(105,1655);
   theta_e_stack_1->SetBinContent(106,1698);
   theta_e_stack_1->SetBinContent(107,1664);
   theta_e_stack_1->SetBinContent(108,1598);
   theta_e_stack_1->SetBinContent(109,1547);
   theta_e_stack_1->SetBinContent(110,1594);
   theta_e_stack_1->SetBinContent(111,1512);
   theta_e_stack_1->SetBinContent(112,1514);
   theta_e_stack_1->SetBinContent(113,1535);
   theta_e_stack_1->SetBinContent(114,1459);
   theta_e_stack_1->SetBinContent(115,1445);
   theta_e_stack_1->SetBinContent(116,1388);
   theta_e_stack_1->SetBinContent(117,1430);
   theta_e_stack_1->SetBinContent(118,1350);
   theta_e_stack_1->SetBinContent(119,1339);
   theta_e_stack_1->SetBinContent(120,1353);
   theta_e_stack_1->SetBinContent(121,1306);
   theta_e_stack_1->SetBinContent(122,1317);
   theta_e_stack_1->SetBinContent(123,1212);
   theta_e_stack_1->SetBinContent(124,1155);
   theta_e_stack_1->SetBinContent(125,1110);
   theta_e_stack_1->SetBinContent(126,1149);
   theta_e_stack_1->SetBinContent(127,1142);
   theta_e_stack_1->SetBinContent(128,1096);
   theta_e_stack_1->SetBinContent(129,1047);
   theta_e_stack_1->SetBinContent(130,1021);
   theta_e_stack_1->SetBinContent(131,1068);
   theta_e_stack_1->SetBinContent(132,1060);
   theta_e_stack_1->SetBinContent(133,990);
   theta_e_stack_1->SetBinContent(134,987);
   theta_e_stack_1->SetBinContent(135,917);
   theta_e_stack_1->SetBinContent(136,950);
   theta_e_stack_1->SetBinContent(137,906);
   theta_e_stack_1->SetBinContent(138,884);
   theta_e_stack_1->SetBinContent(139,845);
   theta_e_stack_1->SetBinContent(140,857);
   theta_e_stack_1->SetBinContent(141,842);
   theta_e_stack_1->SetBinContent(142,786);
   theta_e_stack_1->SetBinContent(143,802);
   theta_e_stack_1->SetBinContent(144,781);
   theta_e_stack_1->SetBinContent(145,788);
   theta_e_stack_1->SetBinContent(146,783);
   theta_e_stack_1->SetBinContent(147,703);
   theta_e_stack_1->SetBinContent(148,691);
   theta_e_stack_1->SetBinContent(149,766);
   theta_e_stack_1->SetBinContent(150,681);
   theta_e_stack_1->SetBinContent(151,666);
   theta_e_stack_1->SetBinContent(152,647);
   theta_e_stack_1->SetBinContent(153,635);
   theta_e_stack_1->SetBinContent(154,609);
   theta_e_stack_1->SetBinContent(155,585);
   theta_e_stack_1->SetBinContent(156,604);
   theta_e_stack_1->SetBinContent(157,542);
   theta_e_stack_1->SetBinContent(158,570);
   theta_e_stack_1->SetBinContent(159,533);
   theta_e_stack_1->SetBinContent(160,532);
   theta_e_stack_1->SetBinContent(161,587);
   theta_e_stack_1->SetBinContent(162,498);
   theta_e_stack_1->SetBinContent(163,487);
   theta_e_stack_1->SetBinContent(164,513);
   theta_e_stack_1->SetBinContent(165,485);
   theta_e_stack_1->SetBinContent(166,482);
   theta_e_stack_1->SetBinContent(167,438);
   theta_e_stack_1->SetBinContent(168,444);
   theta_e_stack_1->SetBinContent(169,408);
   theta_e_stack_1->SetBinContent(170,380);
   theta_e_stack_1->SetBinContent(171,384);
   theta_e_stack_1->SetBinContent(172,393);
   theta_e_stack_1->SetBinContent(173,393);
   theta_e_stack_1->SetBinContent(174,376);
   theta_e_stack_1->SetBinContent(175,340);
   theta_e_stack_1->SetBinContent(176,320);
   theta_e_stack_1->SetBinContent(177,299);
   theta_e_stack_1->SetBinContent(178,321);
   theta_e_stack_1->SetBinContent(179,312);
   theta_e_stack_1->SetBinContent(180,304);
   theta_e_stack_1->SetBinContent(181,293);
   theta_e_stack_1->SetBinContent(182,285);
   theta_e_stack_1->SetBinContent(183,264);
   theta_e_stack_1->SetBinContent(184,271);
   theta_e_stack_1->SetBinContent(185,269);
   theta_e_stack_1->SetBinContent(186,259);
   theta_e_stack_1->SetBinContent(187,258);
   theta_e_stack_1->SetBinContent(188,265);
   theta_e_stack_1->SetBinContent(189,236);
   theta_e_stack_1->SetBinContent(190,218);
   theta_e_stack_1->SetBinContent(191,242);
   theta_e_stack_1->SetBinContent(192,208);
   theta_e_stack_1->SetBinContent(193,209);
   theta_e_stack_1->SetBinContent(194,189);
   theta_e_stack_1->SetBinContent(195,213);
   theta_e_stack_1->SetBinContent(196,173);
   theta_e_stack_1->SetBinContent(197,149);
   theta_e_stack_1->SetBinContent(198,150);
   theta_e_stack_1->SetBinContent(199,125);
   theta_e_stack_1->SetBinContent(200,130);
   theta_e_stack_1->SetBinContent(201,1266);
   theta_e_stack_1->SetBinError(35,4.358899);
   theta_e_stack_1->SetBinError(36,10.3923);
   theta_e_stack_1->SetBinError(37,17.88854);
   theta_e_stack_1->SetBinError(38,23.38803);
   theta_e_stack_1->SetBinError(39,29.44486);
   theta_e_stack_1->SetBinError(40,34.97142);
   theta_e_stack_1->SetBinError(41,42.62628);
   theta_e_stack_1->SetBinError(42,46.88283);
   theta_e_stack_1->SetBinError(43,50.02);
   theta_e_stack_1->SetBinError(44,53.066);
   theta_e_stack_1->SetBinError(45,55.62374);
   theta_e_stack_1->SetBinError(46,57.05261);
   theta_e_stack_1->SetBinError(47,59.4138);
   theta_e_stack_1->SetBinError(48,61.19641);
   theta_e_stack_1->SetBinError(49,63.22183);
   theta_e_stack_1->SetBinError(50,64.53681);
   theta_e_stack_1->SetBinError(51,64.42825);
   theta_e_stack_1->SetBinError(52,64.01562);
   theta_e_stack_1->SetBinError(53,64.14827);
   theta_e_stack_1->SetBinError(54,64.12488);
   theta_e_stack_1->SetBinError(55,64.42049);
   theta_e_stack_1->SetBinError(56,64.08588);
   theta_e_stack_1->SetBinError(57,65.19969);
   theta_e_stack_1->SetBinError(58,63.62389);
   theta_e_stack_1->SetBinError(59,64.66838);
   theta_e_stack_1->SetBinError(60,62.93648);
   theta_e_stack_1->SetBinError(61,63.03174);
   theta_e_stack_1->SetBinError(62,63.3877);
   theta_e_stack_1->SetBinError(63,62.39391);
   theta_e_stack_1->SetBinError(64,61.61169);
   theta_e_stack_1->SetBinError(65,61.21274);
   theta_e_stack_1->SetBinError(66,60.26608);
   theta_e_stack_1->SetBinError(67,59.5399);
   theta_e_stack_1->SetBinError(68,58.77925);
   theta_e_stack_1->SetBinError(69,56.85068);
   theta_e_stack_1->SetBinError(70,57.93099);
   theta_e_stack_1->SetBinError(71,57.24509);
   theta_e_stack_1->SetBinError(72,55.98214);
   theta_e_stack_1->SetBinError(73,55.58777);
   theta_e_stack_1->SetBinError(74,54.51605);
   theta_e_stack_1->SetBinError(75,55.42563);
   theta_e_stack_1->SetBinError(76,53.59104);
   theta_e_stack_1->SetBinError(77,52.82045);
   theta_e_stack_1->SetBinError(78,51.91339);
   theta_e_stack_1->SetBinError(79,52.09607);
   theta_e_stack_1->SetBinError(80,51.62364);
   theta_e_stack_1->SetBinError(81,50.96077);
   theta_e_stack_1->SetBinError(82,49.90992);
   theta_e_stack_1->SetBinError(83,49.77951);
   theta_e_stack_1->SetBinError(84,48.64155);
   theta_e_stack_1->SetBinError(85,48.59012);
   theta_e_stack_1->SetBinError(86,48.64155);
   theta_e_stack_1->SetBinError(87,46.82948);
   theta_e_stack_1->SetBinError(88,47.42362);
   theta_e_stack_1->SetBinError(89,46.84015);
   theta_e_stack_1->SetBinError(90,46.48656);
   theta_e_stack_1->SetBinError(91,46.42198);
   theta_e_stack_1->SetBinError(92,45.37621);
   theta_e_stack_1->SetBinError(93,45.39824);
   theta_e_stack_1->SetBinError(94,44.55334);
   theta_e_stack_1->SetBinError(95,44.3396);
   theta_e_stack_1->SetBinError(96,43.71499);
   theta_e_stack_1->SetBinError(97,44.06813);
   theta_e_stack_1->SetBinError(98,43.54308);
   theta_e_stack_1->SetBinError(99,43.16248);
   theta_e_stack_1->SetBinError(100,42.29657);
   theta_e_stack_1->SetBinError(101,42.41462);
   theta_e_stack_1->SetBinError(102,42.41462);
   theta_e_stack_1->SetBinError(103,42.2019);
   theta_e_stack_1->SetBinError(104,41.42463);
   theta_e_stack_1->SetBinError(105,40.68169);
   theta_e_stack_1->SetBinError(106,41.2068);
   theta_e_stack_1->SetBinError(107,40.79216);
   theta_e_stack_1->SetBinError(108,39.97499);
   theta_e_stack_1->SetBinError(109,39.33192);
   theta_e_stack_1->SetBinError(110,39.92493);
   theta_e_stack_1->SetBinError(111,38.88444);
   theta_e_stack_1->SetBinError(112,38.91015);
   theta_e_stack_1->SetBinError(113,39.17908);
   theta_e_stack_1->SetBinError(114,38.19686);
   theta_e_stack_1->SetBinError(115,38.01316);
   theta_e_stack_1->SetBinError(116,37.25587);
   theta_e_stack_1->SetBinError(117,37.81534);
   theta_e_stack_1->SetBinError(118,36.74235);
   theta_e_stack_1->SetBinError(119,36.59235);
   theta_e_stack_1->SetBinError(120,36.78315);
   theta_e_stack_1->SetBinError(121,36.13862);
   theta_e_stack_1->SetBinError(122,36.29049);
   theta_e_stack_1->SetBinError(123,34.81379);
   theta_e_stack_1->SetBinError(124,33.98529);
   theta_e_stack_1->SetBinError(125,33.31666);
   theta_e_stack_1->SetBinError(126,33.8969);
   theta_e_stack_1->SetBinError(127,33.79349);
   theta_e_stack_1->SetBinError(128,33.10589);
   theta_e_stack_1->SetBinError(129,32.35738);
   theta_e_stack_1->SetBinError(130,31.95309);
   theta_e_stack_1->SetBinError(131,32.68027);
   theta_e_stack_1->SetBinError(132,32.55764);
   theta_e_stack_1->SetBinError(133,31.46427);
   theta_e_stack_1->SetBinError(134,31.41656);
   theta_e_stack_1->SetBinError(135,30.28201);
   theta_e_stack_1->SetBinError(136,30.82207);
   theta_e_stack_1->SetBinError(137,30.09983);
   theta_e_stack_1->SetBinError(138,29.73214);
   theta_e_stack_1->SetBinError(139,29.06888);
   theta_e_stack_1->SetBinError(140,29.27456);
   theta_e_stack_1->SetBinError(141,29.01724);
   theta_e_stack_1->SetBinError(142,28.03569);
   theta_e_stack_1->SetBinError(143,28.3196);
   theta_e_stack_1->SetBinError(144,27.94638);
   theta_e_stack_1->SetBinError(145,28.07134);
   theta_e_stack_1->SetBinError(146,27.98214);
   theta_e_stack_1->SetBinError(147,26.51415);
   theta_e_stack_1->SetBinError(148,26.28688);
   theta_e_stack_1->SetBinError(149,27.67671);
   theta_e_stack_1->SetBinError(150,26.09598);
   theta_e_stack_1->SetBinError(151,25.80698);
   theta_e_stack_1->SetBinError(152,25.43619);
   theta_e_stack_1->SetBinError(153,25.19921);
   theta_e_stack_1->SetBinError(154,24.67793);
   theta_e_stack_1->SetBinError(155,24.18677);
   theta_e_stack_1->SetBinError(156,24.57641);
   theta_e_stack_1->SetBinError(157,23.28089);
   theta_e_stack_1->SetBinError(158,23.87467);
   theta_e_stack_1->SetBinError(159,23.08679);
   theta_e_stack_1->SetBinError(160,23.06513);
   theta_e_stack_1->SetBinError(161,24.22808);
   theta_e_stack_1->SetBinError(162,22.31591);
   theta_e_stack_1->SetBinError(163,22.06808);
   theta_e_stack_1->SetBinError(164,22.6495);
   theta_e_stack_1->SetBinError(165,22.02272);
   theta_e_stack_1->SetBinError(166,21.9545);
   theta_e_stack_1->SetBinError(167,20.92845);
   theta_e_stack_1->SetBinError(168,21.07131);
   theta_e_stack_1->SetBinError(169,20.19901);
   theta_e_stack_1->SetBinError(170,19.49359);
   theta_e_stack_1->SetBinError(171,19.59592);
   theta_e_stack_1->SetBinError(172,19.82423);
   theta_e_stack_1->SetBinError(173,19.82423);
   theta_e_stack_1->SetBinError(174,19.39072);
   theta_e_stack_1->SetBinError(175,18.43909);
   theta_e_stack_1->SetBinError(176,17.88854);
   theta_e_stack_1->SetBinError(177,17.29162);
   theta_e_stack_1->SetBinError(178,17.91647);
   theta_e_stack_1->SetBinError(179,17.66352);
   theta_e_stack_1->SetBinError(180,17.4356);
   theta_e_stack_1->SetBinError(181,17.11724);
   theta_e_stack_1->SetBinError(182,16.88194);
   theta_e_stack_1->SetBinError(183,16.24808);
   theta_e_stack_1->SetBinError(184,16.46208);
   theta_e_stack_1->SetBinError(185,16.40122);
   theta_e_stack_1->SetBinError(186,16.09348);
   theta_e_stack_1->SetBinError(187,16.06238);
   theta_e_stack_1->SetBinError(188,16.27882);
   theta_e_stack_1->SetBinError(189,15.36229);
   theta_e_stack_1->SetBinError(190,14.76482);
   theta_e_stack_1->SetBinError(191,15.55635);
   theta_e_stack_1->SetBinError(192,14.42221);
   theta_e_stack_1->SetBinError(193,14.45683);
   theta_e_stack_1->SetBinError(194,13.74773);
   theta_e_stack_1->SetBinError(195,14.59452);
   theta_e_stack_1->SetBinError(196,13.15295);
   theta_e_stack_1->SetBinError(197,12.20656);
   theta_e_stack_1->SetBinError(198,12.24745);
   theta_e_stack_1->SetBinError(199,11.18034);
   theta_e_stack_1->SetBinError(200,11.40175);
   theta_e_stack_1->SetBinError(201,35.58089);
   theta_e_stack_1->SetEntries(263966);
   theta_e_stack_1->SetDirectory(nullptr);

   ci = 1194;
   color = new TColor(ci, 0.07058824, 0.07843138, 0.08235294, " ", 0);
   theta_e_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#121415");
   theta_e_stack_1->SetLineColor(ci);
   theta_e_stack_1->GetXaxis()->SetRange(1,200);
   theta_e_stack_1->GetXaxis()->SetNdivisions(505);
   theta_e_stack_1->GetXaxis()->SetLabelFont(42);
   theta_e_stack_1->GetXaxis()->SetTitleOffset(1);
   theta_e_stack_1->GetXaxis()->SetTitleFont(42);
   theta_e_stack_1->GetYaxis()->SetLabelFont(42);
   theta_e_stack_1->GetYaxis()->SetTitleFont(42);
   theta_e_stack_1->GetZaxis()->SetLabelFont(42);
   theta_e_stack_1->GetZaxis()->SetTitleOffset(1);
   theta_e_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_e_stack_1,"hist");
   
   TH1D *theta_e_cut_stack_2 = new TH1D("theta_e_cut_stack_2","",200,0,35);
   theta_e_cut_stack_2->SetBinContent(36,4);
   theta_e_cut_stack_2->SetBinContent(37,12);
   theta_e_cut_stack_2->SetBinContent(38,34);
   theta_e_cut_stack_2->SetBinContent(39,112);
   theta_e_cut_stack_2->SetBinContent(40,266);
   theta_e_cut_stack_2->SetBinContent(41,472);
   theta_e_cut_stack_2->SetBinContent(42,782);
   theta_e_cut_stack_2->SetBinContent(43,1033);
   theta_e_cut_stack_2->SetBinContent(44,1339);
   theta_e_cut_stack_2->SetBinContent(45,1782);
   theta_e_cut_stack_2->SetBinContent(46,1974);
   theta_e_cut_stack_2->SetBinContent(47,2286);
   theta_e_cut_stack_2->SetBinContent(48,2441);
   theta_e_cut_stack_2->SetBinContent(49,2730);
   theta_e_cut_stack_2->SetBinContent(50,2939);
   theta_e_cut_stack_2->SetBinContent(51,2986);
   theta_e_cut_stack_2->SetBinContent(52,2948);
   theta_e_cut_stack_2->SetBinContent(53,3029);
   theta_e_cut_stack_2->SetBinContent(54,3155);
   theta_e_cut_stack_2->SetBinContent(55,3192);
   theta_e_cut_stack_2->SetBinContent(56,3188);
   theta_e_cut_stack_2->SetBinContent(57,3370);
   theta_e_cut_stack_2->SetBinContent(58,3179);
   theta_e_cut_stack_2->SetBinContent(59,3351);
   theta_e_cut_stack_2->SetBinContent(60,3233);
   theta_e_cut_stack_2->SetBinContent(61,3242);
   theta_e_cut_stack_2->SetBinContent(62,3257);
   theta_e_cut_stack_2->SetBinContent(63,3204);
   theta_e_cut_stack_2->SetBinContent(64,3171);
   theta_e_cut_stack_2->SetBinContent(65,3131);
   theta_e_cut_stack_2->SetBinContent(66,3034);
   theta_e_cut_stack_2->SetBinContent(67,2966);
   theta_e_cut_stack_2->SetBinContent(68,2909);
   theta_e_cut_stack_2->SetBinContent(69,2756);
   theta_e_cut_stack_2->SetBinContent(70,2880);
   theta_e_cut_stack_2->SetBinContent(71,2818);
   theta_e_cut_stack_2->SetBinContent(72,2663);
   theta_e_cut_stack_2->SetBinContent(73,2688);
   theta_e_cut_stack_2->SetBinContent(74,2594);
   theta_e_cut_stack_2->SetBinContent(75,2665);
   theta_e_cut_stack_2->SetBinContent(76,2481);
   theta_e_cut_stack_2->SetBinContent(77,2439);
   theta_e_cut_stack_2->SetBinContent(78,2348);
   theta_e_cut_stack_2->SetBinContent(79,2384);
   theta_e_cut_stack_2->SetBinContent(80,2316);
   theta_e_cut_stack_2->SetBinContent(81,2243);
   theta_e_cut_stack_2->SetBinContent(82,2169);
   theta_e_cut_stack_2->SetBinContent(83,2186);
   theta_e_cut_stack_2->SetBinContent(84,2078);
   theta_e_cut_stack_2->SetBinContent(85,2075);
   theta_e_cut_stack_2->SetBinContent(86,2084);
   theta_e_cut_stack_2->SetBinContent(87,1913);
   theta_e_cut_stack_2->SetBinContent(88,1979);
   theta_e_cut_stack_2->SetBinContent(89,1955);
   theta_e_cut_stack_2->SetBinContent(90,1906);
   theta_e_cut_stack_2->SetBinContent(91,1930);
   theta_e_cut_stack_2->SetBinContent(92,1844);
   theta_e_cut_stack_2->SetBinContent(93,1842);
   theta_e_cut_stack_2->SetBinContent(94,1757);
   theta_e_cut_stack_2->SetBinContent(95,1770);
   theta_e_cut_stack_2->SetBinContent(96,1706);
   theta_e_cut_stack_2->SetBinContent(97,1727);
   theta_e_cut_stack_2->SetBinContent(98,1675);
   theta_e_cut_stack_2->SetBinContent(99,1681);
   theta_e_cut_stack_2->SetBinContent(100,1592);
   theta_e_cut_stack_2->SetBinContent(101,1619);
   theta_e_cut_stack_2->SetBinContent(102,1604);
   theta_e_cut_stack_2->SetBinContent(103,1610);
   theta_e_cut_stack_2->SetBinContent(104,1549);
   theta_e_cut_stack_2->SetBinContent(105,1473);
   theta_e_cut_stack_2->SetBinContent(106,1517);
   theta_e_cut_stack_2->SetBinContent(107,1496);
   theta_e_cut_stack_2->SetBinContent(108,1452);
   theta_e_cut_stack_2->SetBinContent(109,1398);
   theta_e_cut_stack_2->SetBinContent(110,1443);
   theta_e_cut_stack_2->SetBinContent(111,1382);
   theta_e_cut_stack_2->SetBinContent(112,1346);
   theta_e_cut_stack_2->SetBinContent(113,1377);
   theta_e_cut_stack_2->SetBinContent(114,1308);
   theta_e_cut_stack_2->SetBinContent(115,1293);
   theta_e_cut_stack_2->SetBinContent(116,1214);
   theta_e_cut_stack_2->SetBinContent(117,1266);
   theta_e_cut_stack_2->SetBinContent(118,1203);
   theta_e_cut_stack_2->SetBinContent(119,1192);
   theta_e_cut_stack_2->SetBinContent(120,1197);
   theta_e_cut_stack_2->SetBinContent(121,1133);
   theta_e_cut_stack_2->SetBinContent(122,1163);
   theta_e_cut_stack_2->SetBinContent(123,1061);
   theta_e_cut_stack_2->SetBinContent(124,1006);
   theta_e_cut_stack_2->SetBinContent(125,954);
   theta_e_cut_stack_2->SetBinContent(126,969);
   theta_e_cut_stack_2->SetBinContent(127,983);
   theta_e_cut_stack_2->SetBinContent(128,936);
   theta_e_cut_stack_2->SetBinContent(129,881);
   theta_e_cut_stack_2->SetBinContent(130,877);
   theta_e_cut_stack_2->SetBinContent(131,890);
   theta_e_cut_stack_2->SetBinContent(132,903);
   theta_e_cut_stack_2->SetBinContent(133,814);
   theta_e_cut_stack_2->SetBinContent(134,824);
   theta_e_cut_stack_2->SetBinContent(135,748);
   theta_e_cut_stack_2->SetBinContent(136,766);
   theta_e_cut_stack_2->SetBinContent(137,718);
   theta_e_cut_stack_2->SetBinContent(138,729);
   theta_e_cut_stack_2->SetBinContent(139,679);
   theta_e_cut_stack_2->SetBinContent(140,675);
   theta_e_cut_stack_2->SetBinContent(141,680);
   theta_e_cut_stack_2->SetBinContent(142,591);
   theta_e_cut_stack_2->SetBinContent(143,623);
   theta_e_cut_stack_2->SetBinContent(144,582);
   theta_e_cut_stack_2->SetBinContent(145,609);
   theta_e_cut_stack_2->SetBinContent(146,599);
   theta_e_cut_stack_2->SetBinContent(147,532);
   theta_e_cut_stack_2->SetBinContent(148,522);
   theta_e_cut_stack_2->SetBinContent(149,561);
   theta_e_cut_stack_2->SetBinContent(150,482);
   theta_e_cut_stack_2->SetBinContent(151,483);
   theta_e_cut_stack_2->SetBinContent(152,489);
   theta_e_cut_stack_2->SetBinContent(153,463);
   theta_e_cut_stack_2->SetBinContent(154,418);
   theta_e_cut_stack_2->SetBinContent(155,395);
   theta_e_cut_stack_2->SetBinContent(156,436);
   theta_e_cut_stack_2->SetBinContent(157,369);
   theta_e_cut_stack_2->SetBinContent(158,381);
   theta_e_cut_stack_2->SetBinContent(159,348);
   theta_e_cut_stack_2->SetBinContent(160,345);
   theta_e_cut_stack_2->SetBinContent(161,404);
   theta_e_cut_stack_2->SetBinContent(162,320);
   theta_e_cut_stack_2->SetBinContent(163,320);
   theta_e_cut_stack_2->SetBinContent(164,350);
   theta_e_cut_stack_2->SetBinContent(165,300);
   theta_e_cut_stack_2->SetBinContent(166,282);
   theta_e_cut_stack_2->SetBinContent(167,269);
   theta_e_cut_stack_2->SetBinContent(168,271);
   theta_e_cut_stack_2->SetBinContent(169,267);
   theta_e_cut_stack_2->SetBinContent(170,248);
   theta_e_cut_stack_2->SetBinContent(171,236);
   theta_e_cut_stack_2->SetBinContent(172,248);
   theta_e_cut_stack_2->SetBinContent(173,256);
   theta_e_cut_stack_2->SetBinContent(174,244);
   theta_e_cut_stack_2->SetBinContent(175,179);
   theta_e_cut_stack_2->SetBinContent(176,197);
   theta_e_cut_stack_2->SetBinContent(177,172);
   theta_e_cut_stack_2->SetBinContent(178,182);
   theta_e_cut_stack_2->SetBinContent(179,175);
   theta_e_cut_stack_2->SetBinContent(180,175);
   theta_e_cut_stack_2->SetBinContent(181,165);
   theta_e_cut_stack_2->SetBinContent(182,165);
   theta_e_cut_stack_2->SetBinContent(183,145);
   theta_e_cut_stack_2->SetBinContent(184,149);
   theta_e_cut_stack_2->SetBinContent(185,151);
   theta_e_cut_stack_2->SetBinContent(186,131);
   theta_e_cut_stack_2->SetBinContent(187,128);
   theta_e_cut_stack_2->SetBinContent(188,141);
   theta_e_cut_stack_2->SetBinContent(189,122);
   theta_e_cut_stack_2->SetBinContent(190,115);
   theta_e_cut_stack_2->SetBinContent(191,136);
   theta_e_cut_stack_2->SetBinContent(192,114);
   theta_e_cut_stack_2->SetBinContent(193,103);
   theta_e_cut_stack_2->SetBinContent(194,98);
   theta_e_cut_stack_2->SetBinContent(195,106);
   theta_e_cut_stack_2->SetBinContent(196,93);
   theta_e_cut_stack_2->SetBinContent(197,70);
   theta_e_cut_stack_2->SetBinContent(198,59);
   theta_e_cut_stack_2->SetBinContent(199,56);
   theta_e_cut_stack_2->SetBinContent(200,56);
   theta_e_cut_stack_2->SetBinContent(201,222);
   theta_e_cut_stack_2->SetBinError(36,2);
   theta_e_cut_stack_2->SetBinError(37,3.464102);
   theta_e_cut_stack_2->SetBinError(38,5.830952);
   theta_e_cut_stack_2->SetBinError(39,10.58301);
   theta_e_cut_stack_2->SetBinError(40,16.30951);
   theta_e_cut_stack_2->SetBinError(41,21.72556);
   theta_e_cut_stack_2->SetBinError(42,27.96426);
   theta_e_cut_stack_2->SetBinError(43,32.14032);
   theta_e_cut_stack_2->SetBinError(44,36.59235);
   theta_e_cut_stack_2->SetBinError(45,42.21374);
   theta_e_cut_stack_2->SetBinError(46,44.42972);
   theta_e_cut_stack_2->SetBinError(47,47.81213);
   theta_e_cut_stack_2->SetBinError(48,49.40648);
   theta_e_cut_stack_2->SetBinError(49,52.2494);
   theta_e_cut_stack_2->SetBinError(50,54.21254);
   theta_e_cut_stack_2->SetBinError(51,54.6443);
   theta_e_cut_stack_2->SetBinError(52,54.29549);
   theta_e_cut_stack_2->SetBinError(53,55.03635);
   theta_e_cut_stack_2->SetBinError(54,56.16939);
   theta_e_cut_stack_2->SetBinError(55,56.49779);
   theta_e_cut_stack_2->SetBinError(56,56.46238);
   theta_e_cut_stack_2->SetBinError(57,58.0517);
   theta_e_cut_stack_2->SetBinError(58,56.38262);
   theta_e_cut_stack_2->SetBinError(59,57.88782);
   theta_e_cut_stack_2->SetBinError(60,56.85948);
   theta_e_cut_stack_2->SetBinError(61,56.93856);
   theta_e_cut_stack_2->SetBinError(62,57.07013);
   theta_e_cut_stack_2->SetBinError(63,56.60389);
   theta_e_cut_stack_2->SetBinError(64,56.31163);
   theta_e_cut_stack_2->SetBinError(65,55.95534);
   theta_e_cut_stack_2->SetBinError(66,55.08176);
   theta_e_cut_stack_2->SetBinError(67,54.461);
   theta_e_cut_stack_2->SetBinError(68,53.93515);
   theta_e_cut_stack_2->SetBinError(69,52.49762);
   theta_e_cut_stack_2->SetBinError(70,53.66563);
   theta_e_cut_stack_2->SetBinError(71,53.08484);
   theta_e_cut_stack_2->SetBinError(72,51.60426);
   theta_e_cut_stack_2->SetBinError(73,51.84593);
   theta_e_cut_stack_2->SetBinError(74,50.93133);
   theta_e_cut_stack_2->SetBinError(75,51.62364);
   theta_e_cut_stack_2->SetBinError(76,49.80964);
   theta_e_cut_stack_2->SetBinError(77,49.38623);
   theta_e_cut_stack_2->SetBinError(78,48.45617);
   theta_e_cut_stack_2->SetBinError(79,48.82622);
   theta_e_cut_stack_2->SetBinError(80,48.12484);
   theta_e_cut_stack_2->SetBinError(81,47.36032);
   theta_e_cut_stack_2->SetBinError(82,46.57252);
   theta_e_cut_stack_2->SetBinError(83,46.75468);
   theta_e_cut_stack_2->SetBinError(84,45.58509);
   theta_e_cut_stack_2->SetBinError(85,45.55217);
   theta_e_cut_stack_2->SetBinError(86,45.65085);
   theta_e_cut_stack_2->SetBinError(87,43.73786);
   theta_e_cut_stack_2->SetBinError(88,44.48595);
   theta_e_cut_stack_2->SetBinError(89,44.21538);
   theta_e_cut_stack_2->SetBinError(90,43.65776);
   theta_e_cut_stack_2->SetBinError(91,43.93177);
   theta_e_cut_stack_2->SetBinError(92,42.94182);
   theta_e_cut_stack_2->SetBinError(93,42.91853);
   theta_e_cut_stack_2->SetBinError(94,41.91658);
   theta_e_cut_stack_2->SetBinError(95,42.07137);
   theta_e_cut_stack_2->SetBinError(96,41.30375);
   theta_e_cut_stack_2->SetBinError(97,41.55719);
   theta_e_cut_stack_2->SetBinError(98,40.92676);
   theta_e_cut_stack_2->SetBinError(99,41);
   theta_e_cut_stack_2->SetBinError(100,39.89987);
   theta_e_cut_stack_2->SetBinError(101,40.2368);
   theta_e_cut_stack_2->SetBinError(102,40.04997);
   theta_e_cut_stack_2->SetBinError(103,40.12481);
   theta_e_cut_stack_2->SetBinError(104,39.35734);
   theta_e_cut_stack_2->SetBinError(105,38.37968);
   theta_e_cut_stack_2->SetBinError(106,38.94868);
   theta_e_cut_stack_2->SetBinError(107,38.67816);
   theta_e_cut_stack_2->SetBinError(108,38.10512);
   theta_e_cut_stack_2->SetBinError(109,37.38984);
   theta_e_cut_stack_2->SetBinError(110,37.98684);
   theta_e_cut_stack_2->SetBinError(111,37.17526);
   theta_e_cut_stack_2->SetBinError(112,36.68787);
   theta_e_cut_stack_2->SetBinError(113,37.10795);
   theta_e_cut_stack_2->SetBinError(114,36.16628);
   theta_e_cut_stack_2->SetBinError(115,35.95831);
   theta_e_cut_stack_2->SetBinError(116,34.8425);
   theta_e_cut_stack_2->SetBinError(117,35.58089);
   theta_e_cut_stack_2->SetBinError(118,34.68429);
   theta_e_cut_stack_2->SetBinError(119,34.52535);
   theta_e_cut_stack_2->SetBinError(120,34.59769);
   theta_e_cut_stack_2->SetBinError(121,33.66007);
   theta_e_cut_stack_2->SetBinError(122,34.10279);
   theta_e_cut_stack_2->SetBinError(123,32.57299);
   theta_e_cut_stack_2->SetBinError(124,31.7175);
   theta_e_cut_stack_2->SetBinError(125,30.88689);
   theta_e_cut_stack_2->SetBinError(126,31.12876);
   theta_e_cut_stack_2->SetBinError(127,31.35283);
   theta_e_cut_stack_2->SetBinError(128,30.59412);
   theta_e_cut_stack_2->SetBinError(129,29.68164);
   theta_e_cut_stack_2->SetBinError(130,29.61419);
   theta_e_cut_stack_2->SetBinError(131,29.83287);
   theta_e_cut_stack_2->SetBinError(132,30.04996);
   theta_e_cut_stack_2->SetBinError(133,28.53069);
   theta_e_cut_stack_2->SetBinError(134,28.7054);
   theta_e_cut_stack_2->SetBinError(135,27.34959);
   theta_e_cut_stack_2->SetBinError(136,27.67671);
   theta_e_cut_stack_2->SetBinError(137,26.79552);
   theta_e_cut_stack_2->SetBinError(138,27);
   theta_e_cut_stack_2->SetBinError(139,26.05763);
   theta_e_cut_stack_2->SetBinError(140,25.98076);
   theta_e_cut_stack_2->SetBinError(141,26.07681);
   theta_e_cut_stack_2->SetBinError(142,24.31049);
   theta_e_cut_stack_2->SetBinError(143,24.95997);
   theta_e_cut_stack_2->SetBinError(144,24.12468);
   theta_e_cut_stack_2->SetBinError(145,24.67793);
   theta_e_cut_stack_2->SetBinError(146,24.47448);
   theta_e_cut_stack_2->SetBinError(147,23.06513);
   theta_e_cut_stack_2->SetBinError(148,22.84732);
   theta_e_cut_stack_2->SetBinError(149,23.68544);
   theta_e_cut_stack_2->SetBinError(150,21.9545);
   theta_e_cut_stack_2->SetBinError(151,21.97726);
   theta_e_cut_stack_2->SetBinError(152,22.11334);
   theta_e_cut_stack_2->SetBinError(153,21.51743);
   theta_e_cut_stack_2->SetBinError(154,20.44505);
   theta_e_cut_stack_2->SetBinError(155,19.87461);
   theta_e_cut_stack_2->SetBinError(156,20.88061);
   theta_e_cut_stack_2->SetBinError(157,19.20937);
   theta_e_cut_stack_2->SetBinError(158,19.51922);
   theta_e_cut_stack_2->SetBinError(159,18.65476);
   theta_e_cut_stack_2->SetBinError(160,18.57418);
   theta_e_cut_stack_2->SetBinError(161,20.09975);
   theta_e_cut_stack_2->SetBinError(162,17.88854);
   theta_e_cut_stack_2->SetBinError(163,17.88854);
   theta_e_cut_stack_2->SetBinError(164,18.70829);
   theta_e_cut_stack_2->SetBinError(165,17.32051);
   theta_e_cut_stack_2->SetBinError(166,16.79286);
   theta_e_cut_stack_2->SetBinError(167,16.40122);
   theta_e_cut_stack_2->SetBinError(168,16.46208);
   theta_e_cut_stack_2->SetBinError(169,16.34013);
   theta_e_cut_stack_2->SetBinError(170,15.74802);
   theta_e_cut_stack_2->SetBinError(171,15.36229);
   theta_e_cut_stack_2->SetBinError(172,15.74802);
   theta_e_cut_stack_2->SetBinError(173,16);
   theta_e_cut_stack_2->SetBinError(174,15.6205);
   theta_e_cut_stack_2->SetBinError(175,13.37909);
   theta_e_cut_stack_2->SetBinError(176,14.03567);
   theta_e_cut_stack_2->SetBinError(177,13.11488);
   theta_e_cut_stack_2->SetBinError(178,13.49074);
   theta_e_cut_stack_2->SetBinError(179,13.22876);
   theta_e_cut_stack_2->SetBinError(180,13.22876);
   theta_e_cut_stack_2->SetBinError(181,12.84523);
   theta_e_cut_stack_2->SetBinError(182,12.84523);
   theta_e_cut_stack_2->SetBinError(183,12.04159);
   theta_e_cut_stack_2->SetBinError(184,12.20656);
   theta_e_cut_stack_2->SetBinError(185,12.28821);
   theta_e_cut_stack_2->SetBinError(186,11.44552);
   theta_e_cut_stack_2->SetBinError(187,11.31371);
   theta_e_cut_stack_2->SetBinError(188,11.87434);
   theta_e_cut_stack_2->SetBinError(189,11.04536);
   theta_e_cut_stack_2->SetBinError(190,10.72381);
   theta_e_cut_stack_2->SetBinError(191,11.6619);
   theta_e_cut_stack_2->SetBinError(192,10.67708);
   theta_e_cut_stack_2->SetBinError(193,10.14889);
   theta_e_cut_stack_2->SetBinError(194,9.899495);
   theta_e_cut_stack_2->SetBinError(195,10.29563);
   theta_e_cut_stack_2->SetBinError(196,9.643651);
   theta_e_cut_stack_2->SetBinError(197,8.3666);
   theta_e_cut_stack_2->SetBinError(198,7.681146);
   theta_e_cut_stack_2->SetBinError(199,7.483315);
   theta_e_cut_stack_2->SetBinError(200,7.483315);
   theta_e_cut_stack_2->SetBinError(201,14.89966);
   theta_e_cut_stack_2->SetEntries(207071);
   theta_e_cut_stack_2->SetDirectory(nullptr);

   ci = 1194;
   color = new TColor(ci, 0.07058824, 0.07843138, 0.08235294, " ", 0);
   theta_e_cut_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   theta_e_cut_stack_2->SetLineColor(ci);
   theta_e_cut_stack_2->GetXaxis()->SetRange(1,200);
   theta_e_cut_stack_2->GetXaxis()->SetNdivisions(505);
   theta_e_cut_stack_2->GetXaxis()->SetLabelFont(42);
   theta_e_cut_stack_2->GetXaxis()->SetTitleOffset(1);
   theta_e_cut_stack_2->GetXaxis()->SetTitleFont(42);
   theta_e_cut_stack_2->GetYaxis()->SetLabelFont(42);
   theta_e_cut_stack_2->GetYaxis()->SetTitleFont(42);
   theta_e_cut_stack_2->GetZaxis()->SetLabelFont(42);
   theta_e_cut_stack_2->GetZaxis()->SetTitleOffset(1);
   theta_e_cut_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_e_cut_stack_2,"hist");
   hs->Draw("nostack");
   c1->Modified();
   c1->SetSelected(c1);
}
