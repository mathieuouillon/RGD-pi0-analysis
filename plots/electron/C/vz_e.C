#ifdef __CLING__
#pragma cling optimize(0)
#endif
void vz_e()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Apr  7 13:31:10 2025) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-37.89474,-1.079027,27.89474,4.037587);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogy();
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
   
   TH1F *hs_stack_5 = new TH1F("hs_stack_5","",200,-30,20);
   hs_stack_5->SetMinimum(0.3427414);
   hs_stack_5->SetMaximum(2652.12);
   hs_stack_5->SetDirectory(nullptr);
   hs_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_5->SetLineColor(ci);
   hs_stack_5->SetLineWidth(0);
   hs_stack_5->GetXaxis()->SetTitle("Vz_{e} [cm]");
   hs_stack_5->GetXaxis()->SetNdivisions(505);
   hs_stack_5->GetXaxis()->SetLabelFont(42);
   hs_stack_5->GetXaxis()->SetTitleSize(0.05);
   hs_stack_5->GetXaxis()->SetTitleOffset(0.8);
   hs_stack_5->GetXaxis()->SetTitleFont(42);
   hs_stack_5->GetYaxis()->SetLabelFont(42);
   hs_stack_5->GetYaxis()->SetTitleFont(42);
   hs_stack_5->GetZaxis()->SetLabelFont(42);
   hs_stack_5->GetZaxis()->SetTitleOffset(1);
   hs_stack_5->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_5);
   
   
   TH1D *vz_e_stack_1 = new TH1D("vz_e_stack_1","",200,-30,20);
   vz_e_stack_1->SetBinContent(0,244);
   vz_e_stack_1->SetBinContent(1,2);
   vz_e_stack_1->SetBinContent(2,3);
   vz_e_stack_1->SetBinContent(3,4);
   vz_e_stack_1->SetBinContent(4,8);
   vz_e_stack_1->SetBinContent(5,6);
   vz_e_stack_1->SetBinContent(6,3);
   vz_e_stack_1->SetBinContent(7,3);
   vz_e_stack_1->SetBinContent(8,3);
   vz_e_stack_1->SetBinContent(9,4);
   vz_e_stack_1->SetBinContent(10,2);
   vz_e_stack_1->SetBinContent(11,5);
   vz_e_stack_1->SetBinContent(12,1);
   vz_e_stack_1->SetBinContent(13,3);
   vz_e_stack_1->SetBinContent(14,2);
   vz_e_stack_1->SetBinContent(15,5);
   vz_e_stack_1->SetBinContent(16,4);
   vz_e_stack_1->SetBinContent(17,4);
   vz_e_stack_1->SetBinContent(18,2);
   vz_e_stack_1->SetBinContent(19,8);
   vz_e_stack_1->SetBinContent(20,6);
   vz_e_stack_1->SetBinContent(21,6);
   vz_e_stack_1->SetBinContent(22,8);
   vz_e_stack_1->SetBinContent(23,3);
   vz_e_stack_1->SetBinContent(24,3);
   vz_e_stack_1->SetBinContent(25,6);
   vz_e_stack_1->SetBinContent(26,7);
   vz_e_stack_1->SetBinContent(27,9);
   vz_e_stack_1->SetBinContent(28,4);
   vz_e_stack_1->SetBinContent(29,3);
   vz_e_stack_1->SetBinContent(30,4);
   vz_e_stack_1->SetBinContent(31,9);
   vz_e_stack_1->SetBinContent(32,10);
   vz_e_stack_1->SetBinContent(33,7);
   vz_e_stack_1->SetBinContent(34,15);
   vz_e_stack_1->SetBinContent(35,9);
   vz_e_stack_1->SetBinContent(36,11);
   vz_e_stack_1->SetBinContent(37,14);
   vz_e_stack_1->SetBinContent(38,7);
   vz_e_stack_1->SetBinContent(39,7);
   vz_e_stack_1->SetBinContent(40,7);
   vz_e_stack_1->SetBinContent(41,11);
   vz_e_stack_1->SetBinContent(42,8);
   vz_e_stack_1->SetBinContent(43,10);
   vz_e_stack_1->SetBinContent(44,12);
   vz_e_stack_1->SetBinContent(45,15);
   vz_e_stack_1->SetBinContent(46,6);
   vz_e_stack_1->SetBinContent(47,17);
   vz_e_stack_1->SetBinContent(48,10);
   vz_e_stack_1->SetBinContent(49,20);
   vz_e_stack_1->SetBinContent(50,13);
   vz_e_stack_1->SetBinContent(51,18);
   vz_e_stack_1->SetBinContent(52,19);
   vz_e_stack_1->SetBinContent(53,23);
   vz_e_stack_1->SetBinContent(54,21);
   vz_e_stack_1->SetBinContent(55,26);
   vz_e_stack_1->SetBinContent(56,20);
   vz_e_stack_1->SetBinContent(57,16);
   vz_e_stack_1->SetBinContent(58,22);
   vz_e_stack_1->SetBinContent(59,24);
   vz_e_stack_1->SetBinContent(60,22);
   vz_e_stack_1->SetBinContent(61,30);
   vz_e_stack_1->SetBinContent(62,30);
   vz_e_stack_1->SetBinContent(63,34);
   vz_e_stack_1->SetBinContent(64,32);
   vz_e_stack_1->SetBinContent(65,42);
   vz_e_stack_1->SetBinContent(66,43);
   vz_e_stack_1->SetBinContent(67,45);
   vz_e_stack_1->SetBinContent(68,59);
   vz_e_stack_1->SetBinContent(69,60);
   vz_e_stack_1->SetBinContent(70,68);
   vz_e_stack_1->SetBinContent(71,62);
   vz_e_stack_1->SetBinContent(72,88);
   vz_e_stack_1->SetBinContent(73,92);
   vz_e_stack_1->SetBinContent(74,98);
   vz_e_stack_1->SetBinContent(75,108);
   vz_e_stack_1->SetBinContent(76,130);
   vz_e_stack_1->SetBinContent(77,183);
   vz_e_stack_1->SetBinContent(78,184);
   vz_e_stack_1->SetBinContent(79,227);
   vz_e_stack_1->SetBinContent(80,243);
   vz_e_stack_1->SetBinContent(81,308);
   vz_e_stack_1->SetBinContent(82,357);
   vz_e_stack_1->SetBinContent(83,459);
   vz_e_stack_1->SetBinContent(84,538);
   vz_e_stack_1->SetBinContent(85,668);
   vz_e_stack_1->SetBinContent(86,745);
   vz_e_stack_1->SetBinContent(87,892);
   vz_e_stack_1->SetBinContent(88,992);
   vz_e_stack_1->SetBinContent(89,1129);
   vz_e_stack_1->SetBinContent(90,1302);
   vz_e_stack_1->SetBinContent(91,1360);
   vz_e_stack_1->SetBinContent(92,1451);
   vz_e_stack_1->SetBinContent(93,1530);
   vz_e_stack_1->SetBinContent(94,1569);
   vz_e_stack_1->SetBinContent(95,1592);
   vz_e_stack_1->SetBinContent(96,1563);
   vz_e_stack_1->SetBinContent(97,1607);
   vz_e_stack_1->SetBinContent(98,1589);
   vz_e_stack_1->SetBinContent(99,1585);
   vz_e_stack_1->SetBinContent(100,1555);
   vz_e_stack_1->SetBinContent(101,1516);
   vz_e_stack_1->SetBinContent(102,1467);
   vz_e_stack_1->SetBinContent(103,1414);
   vz_e_stack_1->SetBinContent(104,1330);
   vz_e_stack_1->SetBinContent(105,1252);
   vz_e_stack_1->SetBinContent(106,1117);
   vz_e_stack_1->SetBinContent(107,1057);
   vz_e_stack_1->SetBinContent(108,857);
   vz_e_stack_1->SetBinContent(109,744);
   vz_e_stack_1->SetBinContent(110,587);
   vz_e_stack_1->SetBinContent(111,413);
   vz_e_stack_1->SetBinContent(112,310);
   vz_e_stack_1->SetBinContent(113,230);
   vz_e_stack_1->SetBinContent(114,156);
   vz_e_stack_1->SetBinContent(115,131);
   vz_e_stack_1->SetBinContent(116,111);
   vz_e_stack_1->SetBinContent(117,92);
   vz_e_stack_1->SetBinContent(118,87);
   vz_e_stack_1->SetBinContent(119,69);
   vz_e_stack_1->SetBinContent(120,62);
   vz_e_stack_1->SetBinContent(121,38);
   vz_e_stack_1->SetBinContent(122,57);
   vz_e_stack_1->SetBinContent(123,46);
   vz_e_stack_1->SetBinContent(124,48);
   vz_e_stack_1->SetBinContent(125,37);
   vz_e_stack_1->SetBinContent(126,31);
   vz_e_stack_1->SetBinContent(127,25);
   vz_e_stack_1->SetBinContent(128,33);
   vz_e_stack_1->SetBinContent(129,35);
   vz_e_stack_1->SetBinContent(130,27);
   vz_e_stack_1->SetBinContent(131,27);
   vz_e_stack_1->SetBinContent(132,16);
   vz_e_stack_1->SetBinContent(133,28);
   vz_e_stack_1->SetBinContent(134,23);
   vz_e_stack_1->SetBinContent(135,21);
   vz_e_stack_1->SetBinContent(136,27);
   vz_e_stack_1->SetBinContent(137,18);
   vz_e_stack_1->SetBinContent(138,18);
   vz_e_stack_1->SetBinContent(139,16);
   vz_e_stack_1->SetBinContent(140,16);
   vz_e_stack_1->SetBinContent(141,15);
   vz_e_stack_1->SetBinContent(142,9);
   vz_e_stack_1->SetBinContent(143,11);
   vz_e_stack_1->SetBinContent(144,17);
   vz_e_stack_1->SetBinContent(145,12);
   vz_e_stack_1->SetBinContent(146,13);
   vz_e_stack_1->SetBinContent(147,12);
   vz_e_stack_1->SetBinContent(148,10);
   vz_e_stack_1->SetBinContent(149,22);
   vz_e_stack_1->SetBinContent(150,10);
   vz_e_stack_1->SetBinContent(151,8);
   vz_e_stack_1->SetBinContent(152,11);
   vz_e_stack_1->SetBinContent(153,7);
   vz_e_stack_1->SetBinContent(154,6);
   vz_e_stack_1->SetBinContent(155,9);
   vz_e_stack_1->SetBinContent(156,7);
   vz_e_stack_1->SetBinContent(157,8);
   vz_e_stack_1->SetBinContent(158,12);
   vz_e_stack_1->SetBinContent(159,12);
   vz_e_stack_1->SetBinContent(160,17);
   vz_e_stack_1->SetBinContent(161,7);
   vz_e_stack_1->SetBinContent(162,10);
   vz_e_stack_1->SetBinContent(163,5);
   vz_e_stack_1->SetBinContent(164,8);
   vz_e_stack_1->SetBinContent(165,6);
   vz_e_stack_1->SetBinContent(166,10);
   vz_e_stack_1->SetBinContent(167,13);
   vz_e_stack_1->SetBinContent(168,8);
   vz_e_stack_1->SetBinContent(169,4);
   vz_e_stack_1->SetBinContent(170,4);
   vz_e_stack_1->SetBinContent(171,7);
   vz_e_stack_1->SetBinContent(172,1);
   vz_e_stack_1->SetBinContent(173,11);
   vz_e_stack_1->SetBinContent(174,4);
   vz_e_stack_1->SetBinContent(175,2);
   vz_e_stack_1->SetBinContent(176,7);
   vz_e_stack_1->SetBinContent(177,8);
   vz_e_stack_1->SetBinContent(178,7);
   vz_e_stack_1->SetBinContent(179,4);
   vz_e_stack_1->SetBinContent(180,3);
   vz_e_stack_1->SetBinContent(181,4);
   vz_e_stack_1->SetBinContent(182,3);
   vz_e_stack_1->SetBinContent(183,6);
   vz_e_stack_1->SetBinContent(184,6);
   vz_e_stack_1->SetBinContent(185,6);
   vz_e_stack_1->SetBinContent(186,9);
   vz_e_stack_1->SetBinContent(187,5);
   vz_e_stack_1->SetBinContent(188,6);
   vz_e_stack_1->SetBinContent(189,1);
   vz_e_stack_1->SetBinContent(190,3);
   vz_e_stack_1->SetBinContent(191,4);
   vz_e_stack_1->SetBinContent(192,4);
   vz_e_stack_1->SetBinContent(193,6);
   vz_e_stack_1->SetBinContent(194,5);
   vz_e_stack_1->SetBinContent(195,10);
   vz_e_stack_1->SetBinContent(196,9);
   vz_e_stack_1->SetBinContent(197,11);
   vz_e_stack_1->SetBinContent(198,15);
   vz_e_stack_1->SetBinContent(199,9);
   vz_e_stack_1->SetBinContent(200,18);
   vz_e_stack_1->SetBinContent(201,599);
   vz_e_stack_1->SetBinError(0,15.6205);
   vz_e_stack_1->SetBinError(1,1.414214);
   vz_e_stack_1->SetBinError(2,1.732051);
   vz_e_stack_1->SetBinError(3,2);
   vz_e_stack_1->SetBinError(4,2.828427);
   vz_e_stack_1->SetBinError(5,2.44949);
   vz_e_stack_1->SetBinError(6,1.732051);
   vz_e_stack_1->SetBinError(7,1.732051);
   vz_e_stack_1->SetBinError(8,1.732051);
   vz_e_stack_1->SetBinError(9,2);
   vz_e_stack_1->SetBinError(10,1.414214);
   vz_e_stack_1->SetBinError(11,2.236068);
   vz_e_stack_1->SetBinError(12,1);
   vz_e_stack_1->SetBinError(13,1.732051);
   vz_e_stack_1->SetBinError(14,1.414214);
   vz_e_stack_1->SetBinError(15,2.236068);
   vz_e_stack_1->SetBinError(16,2);
   vz_e_stack_1->SetBinError(17,2);
   vz_e_stack_1->SetBinError(18,1.414214);
   vz_e_stack_1->SetBinError(19,2.828427);
   vz_e_stack_1->SetBinError(20,2.44949);
   vz_e_stack_1->SetBinError(21,2.44949);
   vz_e_stack_1->SetBinError(22,2.828427);
   vz_e_stack_1->SetBinError(23,1.732051);
   vz_e_stack_1->SetBinError(24,1.732051);
   vz_e_stack_1->SetBinError(25,2.44949);
   vz_e_stack_1->SetBinError(26,2.645751);
   vz_e_stack_1->SetBinError(27,3);
   vz_e_stack_1->SetBinError(28,2);
   vz_e_stack_1->SetBinError(29,1.732051);
   vz_e_stack_1->SetBinError(30,2);
   vz_e_stack_1->SetBinError(31,3);
   vz_e_stack_1->SetBinError(32,3.162278);
   vz_e_stack_1->SetBinError(33,2.645751);
   vz_e_stack_1->SetBinError(34,3.872983);
   vz_e_stack_1->SetBinError(35,3);
   vz_e_stack_1->SetBinError(36,3.316625);
   vz_e_stack_1->SetBinError(37,3.741657);
   vz_e_stack_1->SetBinError(38,2.645751);
   vz_e_stack_1->SetBinError(39,2.645751);
   vz_e_stack_1->SetBinError(40,2.645751);
   vz_e_stack_1->SetBinError(41,3.316625);
   vz_e_stack_1->SetBinError(42,2.828427);
   vz_e_stack_1->SetBinError(43,3.162278);
   vz_e_stack_1->SetBinError(44,3.464102);
   vz_e_stack_1->SetBinError(45,3.872983);
   vz_e_stack_1->SetBinError(46,2.44949);
   vz_e_stack_1->SetBinError(47,4.123106);
   vz_e_stack_1->SetBinError(48,3.162278);
   vz_e_stack_1->SetBinError(49,4.472136);
   vz_e_stack_1->SetBinError(50,3.605551);
   vz_e_stack_1->SetBinError(51,4.242641);
   vz_e_stack_1->SetBinError(52,4.358899);
   vz_e_stack_1->SetBinError(53,4.795832);
   vz_e_stack_1->SetBinError(54,4.582576);
   vz_e_stack_1->SetBinError(55,5.09902);
   vz_e_stack_1->SetBinError(56,4.472136);
   vz_e_stack_1->SetBinError(57,4);
   vz_e_stack_1->SetBinError(58,4.690416);
   vz_e_stack_1->SetBinError(59,4.898979);
   vz_e_stack_1->SetBinError(60,4.690416);
   vz_e_stack_1->SetBinError(61,5.477226);
   vz_e_stack_1->SetBinError(62,5.477226);
   vz_e_stack_1->SetBinError(63,5.830952);
   vz_e_stack_1->SetBinError(64,5.656854);
   vz_e_stack_1->SetBinError(65,6.480741);
   vz_e_stack_1->SetBinError(66,6.557439);
   vz_e_stack_1->SetBinError(67,6.708204);
   vz_e_stack_1->SetBinError(68,7.681146);
   vz_e_stack_1->SetBinError(69,7.745967);
   vz_e_stack_1->SetBinError(70,8.246211);
   vz_e_stack_1->SetBinError(71,7.874008);
   vz_e_stack_1->SetBinError(72,9.380832);
   vz_e_stack_1->SetBinError(73,9.591663);
   vz_e_stack_1->SetBinError(74,9.899495);
   vz_e_stack_1->SetBinError(75,10.3923);
   vz_e_stack_1->SetBinError(76,11.40175);
   vz_e_stack_1->SetBinError(77,13.52775);
   vz_e_stack_1->SetBinError(78,13.56466);
   vz_e_stack_1->SetBinError(79,15.06652);
   vz_e_stack_1->SetBinError(80,15.58846);
   vz_e_stack_1->SetBinError(81,17.54993);
   vz_e_stack_1->SetBinError(82,18.89444);
   vz_e_stack_1->SetBinError(83,21.42429);
   vz_e_stack_1->SetBinError(84,23.19483);
   vz_e_stack_1->SetBinError(85,25.8457);
   vz_e_stack_1->SetBinError(86,27.29469);
   vz_e_stack_1->SetBinError(87,29.86637);
   vz_e_stack_1->SetBinError(88,31.49603);
   vz_e_stack_1->SetBinError(89,33.6006);
   vz_e_stack_1->SetBinError(90,36.08324);
   vz_e_stack_1->SetBinError(91,36.87818);
   vz_e_stack_1->SetBinError(92,38.09199);
   vz_e_stack_1->SetBinError(93,39.11521);
   vz_e_stack_1->SetBinError(94,39.6106);
   vz_e_stack_1->SetBinError(95,39.89987);
   vz_e_stack_1->SetBinError(96,39.53479);
   vz_e_stack_1->SetBinError(97,40.0874);
   vz_e_stack_1->SetBinError(98,39.86226);
   vz_e_stack_1->SetBinError(99,39.81206);
   vz_e_stack_1->SetBinError(100,39.43349);
   vz_e_stack_1->SetBinError(101,38.93584);
   vz_e_stack_1->SetBinError(102,38.30144);
   vz_e_stack_1->SetBinError(103,37.60319);
   vz_e_stack_1->SetBinError(104,36.46917);
   vz_e_stack_1->SetBinError(105,35.38361);
   vz_e_stack_1->SetBinError(106,33.42155);
   vz_e_stack_1->SetBinError(107,32.51154);
   vz_e_stack_1->SetBinError(108,29.27456);
   vz_e_stack_1->SetBinError(109,27.27636);
   vz_e_stack_1->SetBinError(110,24.22808);
   vz_e_stack_1->SetBinError(111,20.3224);
   vz_e_stack_1->SetBinError(112,17.60682);
   vz_e_stack_1->SetBinError(113,15.16575);
   vz_e_stack_1->SetBinError(114,12.49);
   vz_e_stack_1->SetBinError(115,11.44552);
   vz_e_stack_1->SetBinError(116,10.53565);
   vz_e_stack_1->SetBinError(117,9.591663);
   vz_e_stack_1->SetBinError(118,9.327379);
   vz_e_stack_1->SetBinError(119,8.306624);
   vz_e_stack_1->SetBinError(120,7.874008);
   vz_e_stack_1->SetBinError(121,6.164414);
   vz_e_stack_1->SetBinError(122,7.549834);
   vz_e_stack_1->SetBinError(123,6.78233);
   vz_e_stack_1->SetBinError(124,6.928203);
   vz_e_stack_1->SetBinError(125,6.082763);
   vz_e_stack_1->SetBinError(126,5.567764);
   vz_e_stack_1->SetBinError(127,5);
   vz_e_stack_1->SetBinError(128,5.744563);
   vz_e_stack_1->SetBinError(129,5.91608);
   vz_e_stack_1->SetBinError(130,5.196152);
   vz_e_stack_1->SetBinError(131,5.196152);
   vz_e_stack_1->SetBinError(132,4);
   vz_e_stack_1->SetBinError(133,5.291503);
   vz_e_stack_1->SetBinError(134,4.795832);
   vz_e_stack_1->SetBinError(135,4.582576);
   vz_e_stack_1->SetBinError(136,5.196152);
   vz_e_stack_1->SetBinError(137,4.242641);
   vz_e_stack_1->SetBinError(138,4.242641);
   vz_e_stack_1->SetBinError(139,4);
   vz_e_stack_1->SetBinError(140,4);
   vz_e_stack_1->SetBinError(141,3.872983);
   vz_e_stack_1->SetBinError(142,3);
   vz_e_stack_1->SetBinError(143,3.316625);
   vz_e_stack_1->SetBinError(144,4.123106);
   vz_e_stack_1->SetBinError(145,3.464102);
   vz_e_stack_1->SetBinError(146,3.605551);
   vz_e_stack_1->SetBinError(147,3.464102);
   vz_e_stack_1->SetBinError(148,3.162278);
   vz_e_stack_1->SetBinError(149,4.690416);
   vz_e_stack_1->SetBinError(150,3.162278);
   vz_e_stack_1->SetBinError(151,2.828427);
   vz_e_stack_1->SetBinError(152,3.316625);
   vz_e_stack_1->SetBinError(153,2.645751);
   vz_e_stack_1->SetBinError(154,2.44949);
   vz_e_stack_1->SetBinError(155,3);
   vz_e_stack_1->SetBinError(156,2.645751);
   vz_e_stack_1->SetBinError(157,2.828427);
   vz_e_stack_1->SetBinError(158,3.464102);
   vz_e_stack_1->SetBinError(159,3.464102);
   vz_e_stack_1->SetBinError(160,4.123106);
   vz_e_stack_1->SetBinError(161,2.645751);
   vz_e_stack_1->SetBinError(162,3.162278);
   vz_e_stack_1->SetBinError(163,2.236068);
   vz_e_stack_1->SetBinError(164,2.828427);
   vz_e_stack_1->SetBinError(165,2.44949);
   vz_e_stack_1->SetBinError(166,3.162278);
   vz_e_stack_1->SetBinError(167,3.605551);
   vz_e_stack_1->SetBinError(168,2.828427);
   vz_e_stack_1->SetBinError(169,2);
   vz_e_stack_1->SetBinError(170,2);
   vz_e_stack_1->SetBinError(171,2.645751);
   vz_e_stack_1->SetBinError(172,1);
   vz_e_stack_1->SetBinError(173,3.316625);
   vz_e_stack_1->SetBinError(174,2);
   vz_e_stack_1->SetBinError(175,1.414214);
   vz_e_stack_1->SetBinError(176,2.645751);
   vz_e_stack_1->SetBinError(177,2.828427);
   vz_e_stack_1->SetBinError(178,2.645751);
   vz_e_stack_1->SetBinError(179,2);
   vz_e_stack_1->SetBinError(180,1.732051);
   vz_e_stack_1->SetBinError(181,2);
   vz_e_stack_1->SetBinError(182,1.732051);
   vz_e_stack_1->SetBinError(183,2.44949);
   vz_e_stack_1->SetBinError(184,2.44949);
   vz_e_stack_1->SetBinError(185,2.44949);
   vz_e_stack_1->SetBinError(186,3);
   vz_e_stack_1->SetBinError(187,2.236068);
   vz_e_stack_1->SetBinError(188,2.44949);
   vz_e_stack_1->SetBinError(189,1);
   vz_e_stack_1->SetBinError(190,1.732051);
   vz_e_stack_1->SetBinError(191,2);
   vz_e_stack_1->SetBinError(192,2);
   vz_e_stack_1->SetBinError(193,2.44949);
   vz_e_stack_1->SetBinError(194,2.236068);
   vz_e_stack_1->SetBinError(195,3.162278);
   vz_e_stack_1->SetBinError(196,3);
   vz_e_stack_1->SetBinError(197,3.316625);
   vz_e_stack_1->SetBinError(198,3.872983);
   vz_e_stack_1->SetBinError(199,3);
   vz_e_stack_1->SetBinError(200,4.242641);
   vz_e_stack_1->SetBinError(201,24.47448);
   vz_e_stack_1->SetEntries(40138);
   vz_e_stack_1->SetDirectory(nullptr);

   ci = 1194;
   color = new TColor(ci, 0.07058824, 0.07843138, 0.08235294, " ", 0);
   vz_e_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#121415");
   vz_e_stack_1->SetLineColor(ci);
   vz_e_stack_1->GetXaxis()->SetRange(1,200);
   vz_e_stack_1->GetXaxis()->SetNdivisions(505);
   vz_e_stack_1->GetXaxis()->SetLabelFont(42);
   vz_e_stack_1->GetXaxis()->SetTitleOffset(1);
   vz_e_stack_1->GetXaxis()->SetTitleFont(42);
   vz_e_stack_1->GetYaxis()->SetLabelFont(42);
   vz_e_stack_1->GetYaxis()->SetTitleFont(42);
   vz_e_stack_1->GetZaxis()->SetLabelFont(42);
   vz_e_stack_1->GetZaxis()->SetTitleOffset(1);
   vz_e_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(vz_e_stack_1,"hist");
   
   TH1D *vz_e_cut_stack_2 = new TH1D("vz_e_cut_stack_2","",200,-30,20);
   vz_e_cut_stack_2->SetBinContent(0,182);
   vz_e_cut_stack_2->SetBinContent(1,2);
   vz_e_cut_stack_2->SetBinContent(2,2);
   vz_e_cut_stack_2->SetBinContent(3,3);
   vz_e_cut_stack_2->SetBinContent(4,6);
   vz_e_cut_stack_2->SetBinContent(5,5);
   vz_e_cut_stack_2->SetBinContent(6,3);
   vz_e_cut_stack_2->SetBinContent(7,2);
   vz_e_cut_stack_2->SetBinContent(8,2);
   vz_e_cut_stack_2->SetBinContent(9,3);
   vz_e_cut_stack_2->SetBinContent(10,1);
   vz_e_cut_stack_2->SetBinContent(11,2);
   vz_e_cut_stack_2->SetBinContent(12,1);
   vz_e_cut_stack_2->SetBinContent(13,1);
   vz_e_cut_stack_2->SetBinContent(14,2);
   vz_e_cut_stack_2->SetBinContent(15,5);
   vz_e_cut_stack_2->SetBinContent(16,3);
   vz_e_cut_stack_2->SetBinContent(17,4);
   vz_e_cut_stack_2->SetBinContent(18,2);
   vz_e_cut_stack_2->SetBinContent(19,8);
   vz_e_cut_stack_2->SetBinContent(20,6);
   vz_e_cut_stack_2->SetBinContent(21,5);
   vz_e_cut_stack_2->SetBinContent(22,7);
   vz_e_cut_stack_2->SetBinContent(23,3);
   vz_e_cut_stack_2->SetBinContent(24,3);
   vz_e_cut_stack_2->SetBinContent(25,5);
   vz_e_cut_stack_2->SetBinContent(26,6);
   vz_e_cut_stack_2->SetBinContent(27,8);
   vz_e_cut_stack_2->SetBinContent(28,3);
   vz_e_cut_stack_2->SetBinContent(29,2);
   vz_e_cut_stack_2->SetBinContent(30,3);
   vz_e_cut_stack_2->SetBinContent(31,7);
   vz_e_cut_stack_2->SetBinContent(32,10);
   vz_e_cut_stack_2->SetBinContent(33,6);
   vz_e_cut_stack_2->SetBinContent(34,13);
   vz_e_cut_stack_2->SetBinContent(35,9);
   vz_e_cut_stack_2->SetBinContent(36,11);
   vz_e_cut_stack_2->SetBinContent(37,12);
   vz_e_cut_stack_2->SetBinContent(38,6);
   vz_e_cut_stack_2->SetBinContent(39,7);
   vz_e_cut_stack_2->SetBinContent(40,4);
   vz_e_cut_stack_2->SetBinContent(41,10);
   vz_e_cut_stack_2->SetBinContent(42,8);
   vz_e_cut_stack_2->SetBinContent(43,7);
   vz_e_cut_stack_2->SetBinContent(44,12);
   vz_e_cut_stack_2->SetBinContent(45,14);
   vz_e_cut_stack_2->SetBinContent(46,6);
   vz_e_cut_stack_2->SetBinContent(47,12);
   vz_e_cut_stack_2->SetBinContent(48,9);
   vz_e_cut_stack_2->SetBinContent(49,19);
   vz_e_cut_stack_2->SetBinContent(50,11);
   vz_e_cut_stack_2->SetBinContent(51,18);
   vz_e_cut_stack_2->SetBinContent(52,18);
   vz_e_cut_stack_2->SetBinContent(53,21);
   vz_e_cut_stack_2->SetBinContent(54,21);
   vz_e_cut_stack_2->SetBinContent(55,21);
   vz_e_cut_stack_2->SetBinContent(56,17);
   vz_e_cut_stack_2->SetBinContent(57,15);
   vz_e_cut_stack_2->SetBinContent(58,21);
   vz_e_cut_stack_2->SetBinContent(59,21);
   vz_e_cut_stack_2->SetBinContent(60,20);
   vz_e_cut_stack_2->SetBinContent(61,29);
   vz_e_cut_stack_2->SetBinContent(62,27);
   vz_e_cut_stack_2->SetBinContent(63,32);
   vz_e_cut_stack_2->SetBinContent(64,30);
   vz_e_cut_stack_2->SetBinContent(65,38);
   vz_e_cut_stack_2->SetBinContent(66,42);
   vz_e_cut_stack_2->SetBinContent(67,40);
   vz_e_cut_stack_2->SetBinContent(68,54);
   vz_e_cut_stack_2->SetBinContent(69,57);
   vz_e_cut_stack_2->SetBinContent(70,65);
   vz_e_cut_stack_2->SetBinContent(71,57);
   vz_e_cut_stack_2->SetBinContent(72,82);
   vz_e_cut_stack_2->SetBinContent(73,89);
   vz_e_cut_stack_2->SetBinContent(74,92);
   vz_e_cut_stack_2->SetBinContent(75,107);
   vz_e_cut_stack_2->SetBinContent(76,126);
   vz_e_cut_stack_2->SetBinContent(77,173);
   vz_e_cut_stack_2->SetBinContent(78,175);
   vz_e_cut_stack_2->SetBinContent(79,215);
   vz_e_cut_stack_2->SetBinContent(80,234);
   vz_e_cut_stack_2->SetBinContent(81,290);
   vz_e_cut_stack_2->SetBinContent(82,339);
   vz_e_cut_stack_2->SetBinContent(83,444);
   vz_e_cut_stack_2->SetBinContent(84,523);
   vz_e_cut_stack_2->SetBinContent(85,644);
   vz_e_cut_stack_2->SetBinContent(86,711);
   vz_e_cut_stack_2->SetBinContent(87,856);
   vz_e_cut_stack_2->SetBinContent(88,955);
   vz_e_cut_stack_2->SetBinContent(89,1075);
   vz_e_cut_stack_2->SetBinContent(90,1236);
   vz_e_cut_stack_2->SetBinContent(91,1283);
   vz_e_cut_stack_2->SetBinContent(92,1355);
   vz_e_cut_stack_2->SetBinContent(93,1410);
   vz_e_cut_stack_2->SetBinContent(94,1441);
   vz_e_cut_stack_2->SetBinContent(95,1455);
   vz_e_cut_stack_2->SetBinContent(96,1430);
   vz_e_cut_stack_2->SetBinContent(97,1497);
   vz_e_cut_stack_2->SetBinContent(98,1467);
   vz_e_cut_stack_2->SetBinContent(99,1455);
   vz_e_cut_stack_2->SetBinContent(100,1434);
   vz_e_cut_stack_2->SetBinContent(101,1381);
   vz_e_cut_stack_2->SetBinContent(102,1323);
   vz_e_cut_stack_2->SetBinContent(103,1296);
   vz_e_cut_stack_2->SetBinContent(104,1213);
   vz_e_cut_stack_2->SetBinContent(105,1112);
   vz_e_cut_stack_2->SetBinContent(106,1002);
   vz_e_cut_stack_2->SetBinContent(107,921);
   vz_e_cut_stack_2->SetBinContent(108,754);
   vz_e_cut_stack_2->SetBinContent(109,633);
   vz_e_cut_stack_2->SetBinContent(110,514);
   vz_e_cut_stack_2->SetBinContent(111,341);
   vz_e_cut_stack_2->SetBinContent(112,259);
   vz_e_cut_stack_2->SetBinContent(113,178);
   vz_e_cut_stack_2->SetBinContent(114,114);
   vz_e_cut_stack_2->SetBinContent(115,103);
   vz_e_cut_stack_2->SetBinContent(116,82);
   vz_e_cut_stack_2->SetBinContent(117,65);
   vz_e_cut_stack_2->SetBinContent(118,65);
   vz_e_cut_stack_2->SetBinContent(119,47);
   vz_e_cut_stack_2->SetBinContent(120,51);
   vz_e_cut_stack_2->SetBinContent(121,28);
   vz_e_cut_stack_2->SetBinContent(122,35);
   vz_e_cut_stack_2->SetBinContent(123,32);
   vz_e_cut_stack_2->SetBinContent(124,34);
   vz_e_cut_stack_2->SetBinContent(125,27);
   vz_e_cut_stack_2->SetBinContent(126,25);
   vz_e_cut_stack_2->SetBinContent(127,15);
   vz_e_cut_stack_2->SetBinContent(128,26);
   vz_e_cut_stack_2->SetBinContent(129,25);
   vz_e_cut_stack_2->SetBinContent(130,19);
   vz_e_cut_stack_2->SetBinContent(131,22);
   vz_e_cut_stack_2->SetBinContent(132,15);
   vz_e_cut_stack_2->SetBinContent(133,19);
   vz_e_cut_stack_2->SetBinContent(134,15);
   vz_e_cut_stack_2->SetBinContent(135,14);
   vz_e_cut_stack_2->SetBinContent(136,19);
   vz_e_cut_stack_2->SetBinContent(137,13);
   vz_e_cut_stack_2->SetBinContent(138,13);
   vz_e_cut_stack_2->SetBinContent(139,14);
   vz_e_cut_stack_2->SetBinContent(140,14);
   vz_e_cut_stack_2->SetBinContent(141,9);
   vz_e_cut_stack_2->SetBinContent(142,5);
   vz_e_cut_stack_2->SetBinContent(143,10);
   vz_e_cut_stack_2->SetBinContent(144,14);
   vz_e_cut_stack_2->SetBinContent(145,6);
   vz_e_cut_stack_2->SetBinContent(146,11);
   vz_e_cut_stack_2->SetBinContent(147,8);
   vz_e_cut_stack_2->SetBinContent(148,8);
   vz_e_cut_stack_2->SetBinContent(149,15);
   vz_e_cut_stack_2->SetBinContent(150,9);
   vz_e_cut_stack_2->SetBinContent(151,6);
   vz_e_cut_stack_2->SetBinContent(152,8);
   vz_e_cut_stack_2->SetBinContent(153,6);
   vz_e_cut_stack_2->SetBinContent(154,4);
   vz_e_cut_stack_2->SetBinContent(155,7);
   vz_e_cut_stack_2->SetBinContent(156,7);
   vz_e_cut_stack_2->SetBinContent(157,4);
   vz_e_cut_stack_2->SetBinContent(158,8);
   vz_e_cut_stack_2->SetBinContent(159,10);
   vz_e_cut_stack_2->SetBinContent(160,13);
   vz_e_cut_stack_2->SetBinContent(161,5);
   vz_e_cut_stack_2->SetBinContent(162,6);
   vz_e_cut_stack_2->SetBinContent(163,4);
   vz_e_cut_stack_2->SetBinContent(164,6);
   vz_e_cut_stack_2->SetBinContent(165,4);
   vz_e_cut_stack_2->SetBinContent(166,9);
   vz_e_cut_stack_2->SetBinContent(167,11);
   vz_e_cut_stack_2->SetBinContent(168,7);
   vz_e_cut_stack_2->SetBinContent(169,3);
   vz_e_cut_stack_2->SetBinContent(170,1);
   vz_e_cut_stack_2->SetBinContent(171,5);
   vz_e_cut_stack_2->SetBinContent(172,1);
   vz_e_cut_stack_2->SetBinContent(173,10);
   vz_e_cut_stack_2->SetBinContent(174,2);
   vz_e_cut_stack_2->SetBinContent(175,2);
   vz_e_cut_stack_2->SetBinContent(176,5);
   vz_e_cut_stack_2->SetBinContent(177,7);
   vz_e_cut_stack_2->SetBinContent(178,3);
   vz_e_cut_stack_2->SetBinContent(179,3);
   vz_e_cut_stack_2->SetBinContent(180,3);
   vz_e_cut_stack_2->SetBinContent(181,3);
   vz_e_cut_stack_2->SetBinContent(182,3);
   vz_e_cut_stack_2->SetBinContent(183,6);
   vz_e_cut_stack_2->SetBinContent(184,6);
   vz_e_cut_stack_2->SetBinContent(185,4);
   vz_e_cut_stack_2->SetBinContent(186,9);
   vz_e_cut_stack_2->SetBinContent(187,4);
   vz_e_cut_stack_2->SetBinContent(188,3);
   vz_e_cut_stack_2->SetBinContent(190,1);
   vz_e_cut_stack_2->SetBinContent(191,4);
   vz_e_cut_stack_2->SetBinContent(192,4);
   vz_e_cut_stack_2->SetBinContent(193,6);
   vz_e_cut_stack_2->SetBinContent(194,5);
   vz_e_cut_stack_2->SetBinContent(195,9);
   vz_e_cut_stack_2->SetBinContent(196,9);
   vz_e_cut_stack_2->SetBinContent(197,11);
   vz_e_cut_stack_2->SetBinContent(198,12);
   vz_e_cut_stack_2->SetBinContent(199,9);
   vz_e_cut_stack_2->SetBinContent(200,18);
   vz_e_cut_stack_2->SetBinContent(201,538);
   vz_e_cut_stack_2->SetBinError(0,13.49074);
   vz_e_cut_stack_2->SetBinError(1,1.414214);
   vz_e_cut_stack_2->SetBinError(2,1.414214);
   vz_e_cut_stack_2->SetBinError(3,1.732051);
   vz_e_cut_stack_2->SetBinError(4,2.44949);
   vz_e_cut_stack_2->SetBinError(5,2.236068);
   vz_e_cut_stack_2->SetBinError(6,1.732051);
   vz_e_cut_stack_2->SetBinError(7,1.414214);
   vz_e_cut_stack_2->SetBinError(8,1.414214);
   vz_e_cut_stack_2->SetBinError(9,1.732051);
   vz_e_cut_stack_2->SetBinError(10,1);
   vz_e_cut_stack_2->SetBinError(11,1.414214);
   vz_e_cut_stack_2->SetBinError(12,1);
   vz_e_cut_stack_2->SetBinError(13,1);
   vz_e_cut_stack_2->SetBinError(14,1.414214);
   vz_e_cut_stack_2->SetBinError(15,2.236068);
   vz_e_cut_stack_2->SetBinError(16,1.732051);
   vz_e_cut_stack_2->SetBinError(17,2);
   vz_e_cut_stack_2->SetBinError(18,1.414214);
   vz_e_cut_stack_2->SetBinError(19,2.828427);
   vz_e_cut_stack_2->SetBinError(20,2.44949);
   vz_e_cut_stack_2->SetBinError(21,2.236068);
   vz_e_cut_stack_2->SetBinError(22,2.645751);
   vz_e_cut_stack_2->SetBinError(23,1.732051);
   vz_e_cut_stack_2->SetBinError(24,1.732051);
   vz_e_cut_stack_2->SetBinError(25,2.236068);
   vz_e_cut_stack_2->SetBinError(26,2.44949);
   vz_e_cut_stack_2->SetBinError(27,2.828427);
   vz_e_cut_stack_2->SetBinError(28,1.732051);
   vz_e_cut_stack_2->SetBinError(29,1.414214);
   vz_e_cut_stack_2->SetBinError(30,1.732051);
   vz_e_cut_stack_2->SetBinError(31,2.645751);
   vz_e_cut_stack_2->SetBinError(32,3.162278);
   vz_e_cut_stack_2->SetBinError(33,2.44949);
   vz_e_cut_stack_2->SetBinError(34,3.605551);
   vz_e_cut_stack_2->SetBinError(35,3);
   vz_e_cut_stack_2->SetBinError(36,3.316625);
   vz_e_cut_stack_2->SetBinError(37,3.464102);
   vz_e_cut_stack_2->SetBinError(38,2.44949);
   vz_e_cut_stack_2->SetBinError(39,2.645751);
   vz_e_cut_stack_2->SetBinError(40,2);
   vz_e_cut_stack_2->SetBinError(41,3.162278);
   vz_e_cut_stack_2->SetBinError(42,2.828427);
   vz_e_cut_stack_2->SetBinError(43,2.645751);
   vz_e_cut_stack_2->SetBinError(44,3.464102);
   vz_e_cut_stack_2->SetBinError(45,3.741657);
   vz_e_cut_stack_2->SetBinError(46,2.44949);
   vz_e_cut_stack_2->SetBinError(47,3.464102);
   vz_e_cut_stack_2->SetBinError(48,3);
   vz_e_cut_stack_2->SetBinError(49,4.358899);
   vz_e_cut_stack_2->SetBinError(50,3.316625);
   vz_e_cut_stack_2->SetBinError(51,4.242641);
   vz_e_cut_stack_2->SetBinError(52,4.242641);
   vz_e_cut_stack_2->SetBinError(53,4.582576);
   vz_e_cut_stack_2->SetBinError(54,4.582576);
   vz_e_cut_stack_2->SetBinError(55,4.582576);
   vz_e_cut_stack_2->SetBinError(56,4.123106);
   vz_e_cut_stack_2->SetBinError(57,3.872983);
   vz_e_cut_stack_2->SetBinError(58,4.582576);
   vz_e_cut_stack_2->SetBinError(59,4.582576);
   vz_e_cut_stack_2->SetBinError(60,4.472136);
   vz_e_cut_stack_2->SetBinError(61,5.385165);
   vz_e_cut_stack_2->SetBinError(62,5.196152);
   vz_e_cut_stack_2->SetBinError(63,5.656854);
   vz_e_cut_stack_2->SetBinError(64,5.477226);
   vz_e_cut_stack_2->SetBinError(65,6.164414);
   vz_e_cut_stack_2->SetBinError(66,6.480741);
   vz_e_cut_stack_2->SetBinError(67,6.324555);
   vz_e_cut_stack_2->SetBinError(68,7.348469);
   vz_e_cut_stack_2->SetBinError(69,7.549834);
   vz_e_cut_stack_2->SetBinError(70,8.062258);
   vz_e_cut_stack_2->SetBinError(71,7.549834);
   vz_e_cut_stack_2->SetBinError(72,9.055385);
   vz_e_cut_stack_2->SetBinError(73,9.433981);
   vz_e_cut_stack_2->SetBinError(74,9.591663);
   vz_e_cut_stack_2->SetBinError(75,10.34408);
   vz_e_cut_stack_2->SetBinError(76,11.22497);
   vz_e_cut_stack_2->SetBinError(77,13.15295);
   vz_e_cut_stack_2->SetBinError(78,13.22876);
   vz_e_cut_stack_2->SetBinError(79,14.66288);
   vz_e_cut_stack_2->SetBinError(80,15.29706);
   vz_e_cut_stack_2->SetBinError(81,17.02939);
   vz_e_cut_stack_2->SetBinError(82,18.41195);
   vz_e_cut_stack_2->SetBinError(83,21.07131);
   vz_e_cut_stack_2->SetBinError(84,22.86919);
   vz_e_cut_stack_2->SetBinError(85,25.37716);
   vz_e_cut_stack_2->SetBinError(86,26.66458);
   vz_e_cut_stack_2->SetBinError(87,29.25748);
   vz_e_cut_stack_2->SetBinError(88,30.90307);
   vz_e_cut_stack_2->SetBinError(89,32.78719);
   vz_e_cut_stack_2->SetBinError(90,35.15679);
   vz_e_cut_stack_2->SetBinError(91,35.81899);
   vz_e_cut_stack_2->SetBinError(92,36.81032);
   vz_e_cut_stack_2->SetBinError(93,37.54997);
   vz_e_cut_stack_2->SetBinError(94,37.96051);
   vz_e_cut_stack_2->SetBinError(95,38.14446);
   vz_e_cut_stack_2->SetBinError(96,37.81534);
   vz_e_cut_stack_2->SetBinError(97,38.69108);
   vz_e_cut_stack_2->SetBinError(98,38.30144);
   vz_e_cut_stack_2->SetBinError(99,38.14446);
   vz_e_cut_stack_2->SetBinError(100,37.86819);
   vz_e_cut_stack_2->SetBinError(101,37.16181);
   vz_e_cut_stack_2->SetBinError(102,36.37307);
   vz_e_cut_stack_2->SetBinError(103,36);
   vz_e_cut_stack_2->SetBinError(104,34.82815);
   vz_e_cut_stack_2->SetBinError(105,33.34666);
   vz_e_cut_stack_2->SetBinError(106,31.65438);
   vz_e_cut_stack_2->SetBinError(107,30.34798);
   vz_e_cut_stack_2->SetBinError(108,27.45906);
   vz_e_cut_stack_2->SetBinError(109,25.15949);
   vz_e_cut_stack_2->SetBinError(110,22.67157);
   vz_e_cut_stack_2->SetBinError(111,18.46619);
   vz_e_cut_stack_2->SetBinError(112,16.09348);
   vz_e_cut_stack_2->SetBinError(113,13.34166);
   vz_e_cut_stack_2->SetBinError(114,10.67708);
   vz_e_cut_stack_2->SetBinError(115,10.14889);
   vz_e_cut_stack_2->SetBinError(116,9.055385);
   vz_e_cut_stack_2->SetBinError(117,8.062258);
   vz_e_cut_stack_2->SetBinError(118,8.062258);
   vz_e_cut_stack_2->SetBinError(119,6.855655);
   vz_e_cut_stack_2->SetBinError(120,7.141428);
   vz_e_cut_stack_2->SetBinError(121,5.291503);
   vz_e_cut_stack_2->SetBinError(122,5.91608);
   vz_e_cut_stack_2->SetBinError(123,5.656854);
   vz_e_cut_stack_2->SetBinError(124,5.830952);
   vz_e_cut_stack_2->SetBinError(125,5.196152);
   vz_e_cut_stack_2->SetBinError(126,5);
   vz_e_cut_stack_2->SetBinError(127,3.872983);
   vz_e_cut_stack_2->SetBinError(128,5.09902);
   vz_e_cut_stack_2->SetBinError(129,5);
   vz_e_cut_stack_2->SetBinError(130,4.358899);
   vz_e_cut_stack_2->SetBinError(131,4.690416);
   vz_e_cut_stack_2->SetBinError(132,3.872983);
   vz_e_cut_stack_2->SetBinError(133,4.358899);
   vz_e_cut_stack_2->SetBinError(134,3.872983);
   vz_e_cut_stack_2->SetBinError(135,3.741657);
   vz_e_cut_stack_2->SetBinError(136,4.358899);
   vz_e_cut_stack_2->SetBinError(137,3.605551);
   vz_e_cut_stack_2->SetBinError(138,3.605551);
   vz_e_cut_stack_2->SetBinError(139,3.741657);
   vz_e_cut_stack_2->SetBinError(140,3.741657);
   vz_e_cut_stack_2->SetBinError(141,3);
   vz_e_cut_stack_2->SetBinError(142,2.236068);
   vz_e_cut_stack_2->SetBinError(143,3.162278);
   vz_e_cut_stack_2->SetBinError(144,3.741657);
   vz_e_cut_stack_2->SetBinError(145,2.44949);
   vz_e_cut_stack_2->SetBinError(146,3.316625);
   vz_e_cut_stack_2->SetBinError(147,2.828427);
   vz_e_cut_stack_2->SetBinError(148,2.828427);
   vz_e_cut_stack_2->SetBinError(149,3.872983);
   vz_e_cut_stack_2->SetBinError(150,3);
   vz_e_cut_stack_2->SetBinError(151,2.44949);
   vz_e_cut_stack_2->SetBinError(152,2.828427);
   vz_e_cut_stack_2->SetBinError(153,2.44949);
   vz_e_cut_stack_2->SetBinError(154,2);
   vz_e_cut_stack_2->SetBinError(155,2.645751);
   vz_e_cut_stack_2->SetBinError(156,2.645751);
   vz_e_cut_stack_2->SetBinError(157,2);
   vz_e_cut_stack_2->SetBinError(158,2.828427);
   vz_e_cut_stack_2->SetBinError(159,3.162278);
   vz_e_cut_stack_2->SetBinError(160,3.605551);
   vz_e_cut_stack_2->SetBinError(161,2.236068);
   vz_e_cut_stack_2->SetBinError(162,2.44949);
   vz_e_cut_stack_2->SetBinError(163,2);
   vz_e_cut_stack_2->SetBinError(164,2.44949);
   vz_e_cut_stack_2->SetBinError(165,2);
   vz_e_cut_stack_2->SetBinError(166,3);
   vz_e_cut_stack_2->SetBinError(167,3.316625);
   vz_e_cut_stack_2->SetBinError(168,2.645751);
   vz_e_cut_stack_2->SetBinError(169,1.732051);
   vz_e_cut_stack_2->SetBinError(170,1);
   vz_e_cut_stack_2->SetBinError(171,2.236068);
   vz_e_cut_stack_2->SetBinError(172,1);
   vz_e_cut_stack_2->SetBinError(173,3.162278);
   vz_e_cut_stack_2->SetBinError(174,1.414214);
   vz_e_cut_stack_2->SetBinError(175,1.414214);
   vz_e_cut_stack_2->SetBinError(176,2.236068);
   vz_e_cut_stack_2->SetBinError(177,2.645751);
   vz_e_cut_stack_2->SetBinError(178,1.732051);
   vz_e_cut_stack_2->SetBinError(179,1.732051);
   vz_e_cut_stack_2->SetBinError(180,1.732051);
   vz_e_cut_stack_2->SetBinError(181,1.732051);
   vz_e_cut_stack_2->SetBinError(182,1.732051);
   vz_e_cut_stack_2->SetBinError(183,2.44949);
   vz_e_cut_stack_2->SetBinError(184,2.44949);
   vz_e_cut_stack_2->SetBinError(185,2);
   vz_e_cut_stack_2->SetBinError(186,3);
   vz_e_cut_stack_2->SetBinError(187,2);
   vz_e_cut_stack_2->SetBinError(188,1.732051);
   vz_e_cut_stack_2->SetBinError(190,1);
   vz_e_cut_stack_2->SetBinError(191,2);
   vz_e_cut_stack_2->SetBinError(192,2);
   vz_e_cut_stack_2->SetBinError(193,2.44949);
   vz_e_cut_stack_2->SetBinError(194,2.236068);
   vz_e_cut_stack_2->SetBinError(195,3);
   vz_e_cut_stack_2->SetBinError(196,3);
   vz_e_cut_stack_2->SetBinError(197,3.316625);
   vz_e_cut_stack_2->SetBinError(198,3.464102);
   vz_e_cut_stack_2->SetBinError(199,3);
   vz_e_cut_stack_2->SetBinError(200,4.242641);
   vz_e_cut_stack_2->SetBinError(201,23.19483);
   vz_e_cut_stack_2->SetEntries(36547);
   vz_e_cut_stack_2->SetDirectory(nullptr);

   ci = 1194;
   color = new TColor(ci, 0.07058824, 0.07843138, 0.08235294, " ", 0);
   vz_e_cut_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   vz_e_cut_stack_2->SetLineColor(ci);
   vz_e_cut_stack_2->GetXaxis()->SetRange(1,200);
   vz_e_cut_stack_2->GetXaxis()->SetNdivisions(505);
   vz_e_cut_stack_2->GetXaxis()->SetLabelFont(42);
   vz_e_cut_stack_2->GetXaxis()->SetTitleOffset(1);
   vz_e_cut_stack_2->GetXaxis()->SetTitleFont(42);
   vz_e_cut_stack_2->GetYaxis()->SetLabelFont(42);
   vz_e_cut_stack_2->GetYaxis()->SetTitleFont(42);
   vz_e_cut_stack_2->GetZaxis()->SetLabelFont(42);
   vz_e_cut_stack_2->GetZaxis()->SetTitleOffset(1);
   vz_e_cut_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(vz_e_cut_stack_2,"hist");
   hs->Draw("nostack");
   TLine *line = new TLine(-15,0,-15,1285.6);
   line->SetLineColor(98);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(5,0,5,1285.6);
   line->SetLineColor(98);
   line->SetLineWidth(2);
   line->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
