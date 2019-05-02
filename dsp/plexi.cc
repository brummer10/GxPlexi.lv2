// generated from file './/plexi.dsp' by dsp2cc:
// Code generated with Faust 2.15.11 (https://faust.grame.fr)

#include "math.h"
#include "plexipoweramp_neg_table.h"
#include "plexipoweramp_pre_neg_table.h"
#include "plexipoweramp_pre_table.h"
#include "plexipoweramp_table.h"

namespace plexi {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec3[2];
	double fConst10;
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fVec0[2];
	double fConst17;
	double fConst18;
	double fRec10[2];
	double fConst19;
	double fConst20;
	double fRec9[3];
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fRec8[3];
	double fConst31;
	double fConst32;
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fRec7[3];
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fRec6[3];
	double fConst49;
	double fConst50;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec11[2];
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	double fConst63;
	double fConst64;
	double fConst65;
	double fConst66;
	double fRec5[4];
	double fConst67;
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec12[2];
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	double fRec13[2];
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	FAUSTFLOAT fVslider4;
	FAUSTFLOAT	*fVslider4_;
	double fRec14[2];
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fConst95;
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	double fConst121;
	double fConst122;
	double fConst123;
	double fConst124;
	double fConst125;
	double fConst126;
	double fConst127;
	double fConst128;
	double fConst129;
	double fConst130;
	double fConst131;
	double fConst132;
	double fConst133;
	double fConst134;
	double fConst135;
	double fConst136;
	double fConst137;
	double fConst138;
	double fConst139;
	double fConst140;
	double fConst141;
	double fConst142;
	double fConst143;
	double fConst144;
	double fConst145;
	double fConst146;
	double fConst147;
	double fConst148;
	double fConst149;
	double fConst150;
	double fConst151;
	double fConst152;
	double fConst153;
	double fConst154;
	double fConst155;
	double fConst156;
	double fConst157;
	double fConst158;
	double fConst159;
	double fConst160;
	double fConst161;
	double fConst162;
	double fConst163;
	double fConst164;
	double fConst165;
	double fConst166;
	double fConst167;
	double fConst168;
	double fConst169;
	double fConst170;
	double fConst171;
	double fConst172;
	double fConst173;
	double fConst174;
	double fConst175;
	double fConst176;
	double fConst177;
	double fConst178;
	double fConst179;
	double fConst180;
	double fConst181;
	double fConst182;
	double fConst183;
	double fConst184;
	double fConst185;
	double fConst186;
	double fConst187;
	double fConst188;
	double fConst189;
	double fConst190;
	double fConst191;
	double fConst192;
	double fConst193;
	double fConst194;
	double fConst195;
	double fConst196;
	double fConst197;
	double fConst198;
	double fConst199;
	double fConst200;
	double fConst201;
	double fConst202;
	double fConst203;
	double fConst204;
	double fConst205;
	double fConst206;
	double fConst207;
	double fConst208;
	double fConst209;
	double fConst210;
	double fConst211;
	double fRec4[6];
	double fConst212;
	double fConst213;
	double fConst214;
	double fConst215;
	double fConst216;
	double fConst217;
	double fConst218;
	double fConst219;
	double fConst220;
	double fConst221;
	double fConst222;
	double fConst223;
	double fConst224;
	double fConst225;
	double fConst226;
	double fConst227;
	double fConst228;
	double fConst229;
	double fConst230;
	double fConst231;
	double fConst232;
	double fConst233;
	double fConst234;
	double fConst235;
	double fConst236;
	double fConst237;
	double fConst238;
	double fConst239;
	double fConst240;
	double fConst241;
	double fConst242;
	double fConst243;
	double fConst244;
	double fConst245;
	double fConst246;
	double fConst247;
	double fConst248;
	double fConst249;
	double fConst250;
	double fConst251;
	double fConst252;
	double fConst253;
	double fConst254;
	double fConst255;
	double fConst256;
	double fConst257;
	double fConst258;
	double fConst259;
	double fConst260;
	double fConst261;
	double fConst262;
	double fConst263;
	double fConst264;
	double fConst265;
	double fConst266;
	double fConst267;
	double fConst268;
	double fConst269;
	double fConst270;
	double fConst271;
	double fConst272;
	double fConst273;
	double fConst274;
	double fConst275;
	double fConst276;
	double fConst277;
	double fConst278;
	double fConst279;
	double fConst280;
	double fConst281;
	double fConst282;
	double fConst283;
	double fConst284;
	double fConst285;
	double fConst286;
	double fConst287;
	FAUSTFLOAT fVslider5;
	FAUSTFLOAT	*fVslider5_;
	double fRec15[2];
	double fConst288;
	double fConst289;
	double fConst290;
	double fConst291;
	double fConst292;
	double fConst293;
	double fConst294;
	double fConst295;
	double fConst296;
	double fConst297;
	double fConst298;
	double fConst299;
	double fConst300;
	double fConst301;
	double fConst302;
	double fConst303;
	double fConst304;
	double fConst305;
	double fConst306;
	double fConst307;
	double fConst308;
	double fConst309;
	double fConst310;
	double fConst311;
	double fConst312;
	double fRec2[6];
	double fConst313;
	double fConst314;
	double fConst315;
	double fConst316;
	double fConst317;
	double fConst318;
	double fConst319;
	double fConst320;
	double fConst321;
	double fConst322;
	double fConst323;
	double fConst324;
	double fConst325;
	double fConst326;
	double fConst327;
	double fConst328;
	double fConst329;
	double fConst330;
	double fConst331;
	double fConst332;
	double fConst333;
	double fConst334;
	double fConst335;
	double fConst336;
	double fConst337;
	double fConst338;
	double fConst339;
	double fConst340;
	double fConst341;
	double fRec24[2];
	double fRec23[3];
	double fVec1[2];
	double fConst342;
	double fConst343;
	double fRec22[2];
	double fConst344;
	double fRec21[3];
	double fConst345;
	double fRec20[3];
	double fRec19[3];
	double fRec18[4];
	double fRec17[6];
	double fRec16[6];
	double fConst346;
	double fConst347;
	double fConst348;
	double fRec32[2];
	double fRec31[3];
	double fVec2[2];
	double fConst349;
	double fConst350;
	double fRec30[2];
	double fConst351;
	double fRec29[3];
	double fConst352;
	double fRec28[3];
	double fRec27[4];
	double fRec26[6];
	double fRec25[6];
	double fConst353;
	double fConst354;
	double fConst355;
	double fRec39[2];
	double fRec38[3];
	double fVec3[2];
	double fConst356;
	double fConst357;
	double fRec37[2];
	double fConst358;
	double fRec36[3];
	double fConst359;
	double fRec35[4];
	double fRec34[6];
	double fRec33[6];
	double fConst360;
	double fRec44[2];
	double fRec43[3];
	double fRec42[4];
	double fRec41[6];
	double fRec40[6];
	double fConst361;
	double fConst362;
	double fConst363;
	double fConst364;
	double fConst365;
	double fConst366;
	double fConst367;
	double fConst368;
	double fRec1[6];
	double fConst369;
	double fConst370;
	double fConst371;
	double fConst372;
	double fConst373;
	double fConst374;
	double fConst375;
	double fConst376;
	double fConst377;
	double fConst378;
	double fConst379;
	double fConst380;
	double fConst381;
	double fConst382;
	double fRec0[6];
	double fConst383;
	double fConst384;
	double fConst385;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "plexi";
	name = N_("Plexi");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec3[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fVec0[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec10[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec9[l3] = 0.0;
	for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) fRec8[l4] = 0.0;
	for (int l5 = 0; (l5 < 3); l5 = (l5 + 1)) fRec7[l5] = 0.0;
	for (int l6 = 0; (l6 < 3); l6 = (l6 + 1)) fRec6[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fRec11[l7] = 0.0;
	for (int l8 = 0; (l8 < 4); l8 = (l8 + 1)) fRec5[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fRec12[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fRec13[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec14[l11] = 0.0;
	for (int l12 = 0; (l12 < 6); l12 = (l12 + 1)) fRec4[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec15[l13] = 0.0;
	for (int l14 = 0; (l14 < 6); l14 = (l14 + 1)) fRec2[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec24[l15] = 0.0;
	for (int l16 = 0; (l16 < 3); l16 = (l16 + 1)) fRec23[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fVec1[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec22[l18] = 0.0;
	for (int l19 = 0; (l19 < 3); l19 = (l19 + 1)) fRec21[l19] = 0.0;
	for (int l20 = 0; (l20 < 3); l20 = (l20 + 1)) fRec20[l20] = 0.0;
	for (int l21 = 0; (l21 < 3); l21 = (l21 + 1)) fRec19[l21] = 0.0;
	for (int l22 = 0; (l22 < 4); l22 = (l22 + 1)) fRec18[l22] = 0.0;
	for (int l23 = 0; (l23 < 6); l23 = (l23 + 1)) fRec17[l23] = 0.0;
	for (int l24 = 0; (l24 < 6); l24 = (l24 + 1)) fRec16[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec32[l25] = 0.0;
	for (int l26 = 0; (l26 < 3); l26 = (l26 + 1)) fRec31[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fVec2[l27] = 0.0;
	for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) fRec30[l28] = 0.0;
	for (int l29 = 0; (l29 < 3); l29 = (l29 + 1)) fRec29[l29] = 0.0;
	for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) fRec28[l30] = 0.0;
	for (int l31 = 0; (l31 < 4); l31 = (l31 + 1)) fRec27[l31] = 0.0;
	for (int l32 = 0; (l32 < 6); l32 = (l32 + 1)) fRec26[l32] = 0.0;
	for (int l33 = 0; (l33 < 6); l33 = (l33 + 1)) fRec25[l33] = 0.0;
	for (int l34 = 0; (l34 < 2); l34 = (l34 + 1)) fRec39[l34] = 0.0;
	for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) fRec38[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fVec3[l36] = 0.0;
	for (int l37 = 0; (l37 < 2); l37 = (l37 + 1)) fRec37[l37] = 0.0;
	for (int l38 = 0; (l38 < 3); l38 = (l38 + 1)) fRec36[l38] = 0.0;
	for (int l39 = 0; (l39 < 4); l39 = (l39 + 1)) fRec35[l39] = 0.0;
	for (int l40 = 0; (l40 < 6); l40 = (l40 + 1)) fRec34[l40] = 0.0;
	for (int l41 = 0; (l41 < 6); l41 = (l41 + 1)) fRec33[l41] = 0.0;
	for (int l42 = 0; (l42 < 2); l42 = (l42 + 1)) fRec44[l42] = 0.0;
	for (int l43 = 0; (l43 < 3); l43 = (l43 + 1)) fRec43[l43] = 0.0;
	for (int l44 = 0; (l44 < 4); l44 = (l44 + 1)) fRec42[l44] = 0.0;
	for (int l45 = 0; (l45 < 6); l45 = (l45 + 1)) fRec41[l45] = 0.0;
	for (int l46 = 0; (l46 < 6); l46 = (l46 + 1)) fRec40[l46] = 0.0;
	for (int l47 = 0; (l47 < 6); l47 = (l47 + 1)) fRec1[l47] = 0.0;
	for (int l48 = 0; (l48 < 6); l48 = (l48 + 1)) fRec0[l48] = 0.0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSamplingFreq)));
	fConst1 = (2.0502973233909099e-24 * fConst0);
	fConst2 = (1.0 / (((((((((fConst1 + 5.8784976754167206e-20) * fConst0) + 1.20685610628971e-15) * fConst0) + 1.21185035126741e-11) * fConst0) + 8.6068533907021e-08) * fConst0) + 4.3031237478485699e-08));
	fConst3 = mydsp_faustpower2_f(fConst0);
	fConst4 = (2.92233252024476e-24 * fConst0);
	fConst5 = (((((((((fConst4 + 4.442247247582e-20) * fConst0) + 1.7342952772577399e-16) * fConst0) + 1.64983504337994e-13) * fConst0) + 1.05419773032574e-10) * fConst0) + 1.39026436464115e-08);
	fConst6 = (fConst3 / fConst5);
	fConst7 = (3.7692935707728497e-20 * fConst0);
	fConst8 = (((fConst7 + 1.3617846184865501e-16) * fConst0) + 8.9109827731859304e-14);
	fConst9 = (0.5 * fConst0);
	fConst10 = std::tan((20517.741620594938 / fConst0));
	fConst11 = (1.0 / fConst10);
	fConst12 = (1.0 / (((fConst11 + 1.0000000000000004) / fConst10) + 1.0));
	fConst13 = mydsp_faustpower2_f(fConst10);
	fConst14 = (1.0 / fConst13);
	fConst15 = (fConst11 + 1.0);
	fConst16 = (0.0 - (1.0 / (fConst15 * fConst10)));
	fConst17 = (1.0 / fConst15);
	fConst18 = (1.0 - fConst11);
	fConst19 = (((fConst11 + -1.0000000000000004) / fConst10) + 1.0);
	fConst20 = (2.0 * (1.0 - fConst14));
	fConst21 = (0.0 - (2.0 / fConst13));
	fConst22 = std::tan((3769.9111843077517 / fConst0));
	fConst23 = (1.0 / fConst22);
	fConst24 = (fConst23 + 1.0);
	fConst25 = (1.0 / ((fConst24 / fConst22) + 1.0));
	fConst26 = (1.0 - fConst23);
	fConst27 = (1.0 - (fConst26 / fConst22));
	fConst28 = mydsp_faustpower2_f(fConst22);
	fConst29 = (1.0 / fConst28);
	fConst30 = (2.0 * (1.0 - fConst29));
	fConst31 = std::tan((659.73445725385659 / fConst0));
	fConst32 = (1.0 / fConst31);
	fConst33 = (fConst32 + 1.0);
	fConst34 = (1.0 / ((fConst33 / fConst31) + 1.0));
	fConst35 = (1.0 - fConst32);
	fConst36 = (1.0 - (fConst35 / fConst31));
	fConst37 = mydsp_faustpower2_f(fConst31);
	fConst38 = (1.0 / fConst37);
	fConst39 = (2.0 * (1.0 - fConst38));
	fConst40 = std::tan((270.1769682087222 / fConst0));
	fConst41 = (1.0 / fConst40);
	fConst42 = (fConst41 + 1.0);
	fConst43 = (1.0 / ((fConst42 / fConst40) + 1.0));
	fConst44 = (1.0 - fConst41);
	fConst45 = (1.0 - (fConst44 / fConst40));
	fConst46 = mydsp_faustpower2_f(fConst40);
	fConst47 = (1.0 / fConst46);
	fConst48 = (2.0 * (1.0 - fConst47));
	fConst49 = (1.5988013890291499e-14 * fConst0);
	fConst50 = ((((-1.7799473628284799e-10 - fConst49) * fConst0) + 1.07885862738881e-08) * fConst0);
	fConst51 = (7.2932144207047599e-29 * fConst0);
	fConst52 = (((fConst51 + 8.1197191084452904e-25) * fConst0) + -4.97994757198574e-23);
	fConst53 = (5.7993425479337096e-29 * fConst0);
	fConst54 = (((-6.4529066940211896e-25 - fConst53) * fConst0) + 2.7424762368368802e-23);
	fConst55 = ((((fConst49 + -1.7799473628284799e-10) * fConst0) + -1.07885862738881e-08) * fConst0);
	fConst56 = (((8.1197191084452904e-25 - fConst51) * fConst0) + 4.97994757198574e-23);
	fConst57 = (((fConst53 + -6.4529066940211896e-25) * fConst0) + -2.7424762368368802e-23);
	fConst58 = (5.3293379634305197e-15 * fConst0);
	fConst59 = ((((1.7799473628284799e-10 - fConst58) * fConst0) + -1.07885862738881e-08) * fConst0);
	fConst60 = (2.43107147356825e-29 * fConst0);
	fConst61 = (((fConst60 + -8.1197191084452904e-25) * fConst0) + 4.97994757198574e-23);
	fConst62 = (1.93311418264457e-29 * fConst0);
	fConst63 = (((6.4529066940211896e-25 - fConst62) * fConst0) + -2.7424762368368802e-23);
	fConst64 = ((((fConst58 + 1.7799473628284799e-10) * fConst0) + 1.07885862738881e-08) * fConst0);
	fConst65 = (((-8.1197191084452904e-25 - fConst60) * fConst0) + -4.97994757198574e-23);
	fConst66 = (((fConst62 + 6.4529066940211896e-25) * fConst0) + 2.7424762368368802e-23);
	fConst67 = (2.1945111013168499e-10 * fConst0);
	fConst68 = (-6.0823478417872599e-09 - fConst67);
	fConst69 = (8.7780444052674003e-09 * fConst0);
	fConst70 = (-2.4329391367148998e-07 - fConst69);
	fConst71 = (fConst67 + -6.0823478417872599e-09);
	fConst72 = (fConst69 + -2.4329391367148998e-07);
	fConst73 = (fConst67 + 6.0823478417872599e-09);
	fConst74 = (fConst69 + 2.4329391367148998e-07);
	fConst75 = (6.0823478417872599e-09 - fConst67);
	fConst76 = (2.4329391367148998e-07 - fConst69);
	fConst77 = (3.41571990070694e-25 * fConst0);
	fConst78 = (((((((-8.4765210135019795e-21 - fConst77) * fConst0) + -1.96263476557925e-17) * fConst0) + 4.6083702024346198e-14) * fConst0) + 1.16833562474979e-10);
	fConst79 = (3.1441772874018101e-26 * fConst0);
	fConst80 = (((((((fConst79 + 6.5916428714236397e-22) * fConst0) + 1.5631404324923e-19) * fConst0) + 6.2748567015163999e-15) * fConst0) + 2.5242493500845798e-11);
	fConst81 = (2.8557003169537202e-25 * fConst0);
	fConst82 = (((((((fConst81 + 6.57239799942916e-21) * fConst0) + 9.8584751383028106e-18) * fConst0) + -9.7340754922804799e-15) * fConst0) + -6.1507050440657501e-13);
	fConst83 = (1.31373842334882e-23 * fConst0);
	fConst84 = (((((((-3.1223956600865499e-19 - fConst83) * fConst0) + -5.7549342155712296e-16) * fConst0) + 8.6372938582420099e-13) * fConst0) + 1.09484655914789e-09);
	fConst85 = (1.14228012678149e-23 * fConst0);
	fConst86 = (((((((-2.6289591997716702e-19 - fConst85) * fConst0) + -3.9433900553211202e-16) * fConst0) + 3.89363019691219e-13) * fConst0) + 2.4602820176262999e-11);
	fConst87 = (8.5392997517673398e-26 * fConst0);
	fConst88 = (((((((-2.0983288974343302e-21 - fConst87) * fConst0) + -4.6604135927355104e-18) * fConst0) + 1.1010746153663e-14) * fConst0) + 2.8343240929070199e-11);
	fConst89 = (3.2843460583720499e-24 * fConst0);
	fConst90 = (((((((-7.7259839350580303e-20 - fConst89) * fConst0) + -1.3440515072725699e-16) * fConst0) + 1.9631006367053e-13) * fConst0) + 2.4043665172256999e-10);
	fConst91 = (2.1267469661211699e-24 * fConst0);
	fConst92 = ((((((-5.0043508034140103e-20 - fConst91) * fConst0) + -8.6073344410246503e-17) * fConst0) + 8.8160105631608994e-14) * fConst0);
	fConst93 = (2.6813230340151098e-26 * fConst0);
	fConst94 = (((((((fConst93 + 5.7236258489174201e-22) * fConst0) + 3.6297437664135902e-19) * fConst0) + 1.33198267673638e-15) * fConst0) + 6.1507050440657499e-12);
	fConst95 = (5.3168674153029106e-26 * fConst0);
	fConst96 = ((((((fConst95 + 1.2510877008535e-21) * fConst0) + 2.15183361025616e-18) * fConst0) + -2.2040026407902298e-15) * fConst0);
	fConst97 = (8.5241035829433305e-26 * fConst0);
	fConst98 = (((((((fConst97 + 1.8996544504656799e-21) * fConst0) + 2.2321200331782899e-18) * fConst0) + -2.25733780437227e-15) * fConst0) + -1.39788751001494e-12);
	fConst99 = (3.27850137805513e-24 * fConst0);
	fConst100 = (((((fConst99 + 6.9624645250719998e-20) * fConst0) + 4.5666378166822401e-17) * fConst0) + -2.05023501468858e-14);
	fConst101 = (2.4501693158077899e-24 * fConst0);
	fConst102 = ((((fConst101 + 5.1033118980697597e-20) * fConst0) + 2.2552585161574399e-17) * fConst0);
	fConst103 = (1.8258132240375499e-26 * fConst0);
	fConst104 = (((((-3.4693223824783202e-22 - fConst103) * fConst0) + 2.1793683549548899e-19) * fConst0) + -5.1255875367214595e-16);
	fConst105 = (6.1254232895194803e-26 * fConst0);
	fConst106 = ((((-1.27582797451744e-21 - fConst105) * fConst0) + -5.6381462903935998e-19) * fConst0);
	fConst107 = (6.83143980141387e-25 * fConst0);
	fConst108 = (((((((fConst107 + 5.6510140090013199e-21) * fConst0) + -3.9252695311584901e-17) * fConst0) + -9.2167404048692497e-14) * fConst0) + 7.7889041649985896e-11);
	fConst109 = (6.2883545748036203e-26 * fConst0);
	fConst110 = (((((((-4.3944285809490903e-22 - fConst109) * fConst0) + 3.1262808649846102e-19) * fConst0) + -1.25497134030328e-14) * fConst0) + 1.6828329000563901e-11);
	fConst111 = (5.7114006339074496e-25 * fConst0);
	fConst112 = (((((((-4.3815986662861097e-21 - fConst111) * fConst0) + 1.97169502766056e-17) * fConst0) + 1.9468150984561001e-14) * fConst0) + -4.1004700293771598e-13);
	fConst113 = (2.62747684669764e-23 * fConst0);
	fConst114 = (((((((fConst113 + 2.08159710672437e-19) * fConst0) + -1.1509868431142501e-15) * fConst0) + -1.7274587716484e-12) * fConst0) + 7.2989770609859495e-10);
	fConst115 = (2.2845602535629801e-23 * fConst0);
	fConst116 = (((((((fConst115 + 1.7526394665144399e-19) * fConst0) + -7.8867801106422502e-16) * fConst0) + -7.7872603938243799e-13) * fConst0) + 1.6401880117508699e-11);
	fConst117 = (1.70785995035347e-25 * fConst0);
	fConst118 = (((((((fConst117 + 1.3988859316228801e-21) * fConst0) + -9.3208271854710207e-18) * fConst0) + -2.2021492307326101e-14) * fConst0) + 1.88954939527135e-11);
	fConst119 = (6.5686921167441102e-24 * fConst0);
	fConst120 = (((((((fConst119 + 5.1506559567053599e-20) * fConst0) + -2.6881030145451502e-16) * fConst0) + -3.9262012734105999e-13) * fConst0) + 1.6029110114838e-10);
	fConst121 = (4.2534939322423303e-24 * fConst0);
	fConst122 = ((((((fConst121 + 3.3362338689426801e-20) * fConst0) + -1.7214668882049301e-16) * fConst0) + -1.7632021126321799e-13) * fConst0);
	fConst123 = (5.3626460680302104e-26 * fConst0);
	fConst124 = (((((((-3.81575056594495e-22 - fConst123) * fConst0) + 7.25948753282719e-19) * fConst0) + -2.6639653534727698e-15) * fConst0) + 4.1004700293771601e-12);
	fConst125 = (1.06337348306058e-25 * fConst0);
	fConst126 = ((((((-8.3405846723566902e-22 - fConst125) * fConst0) + 4.3036672205123199e-18) * fConst0) + 4.4080052815804502e-15) * fConst0);
	fConst127 = (1.70482071658867e-25 * fConst0);
	fConst128 = (((((((-1.26643630031045e-21 - fConst127) * fConst0) + 4.4642400663565698e-18) * fConst0) + 4.5146756087445399e-15) * fConst0) + -9.3192500667662809e-13);
	fConst129 = (6.5570027561102496e-24 * fConst0);
	fConst130 = (((((-4.6416430167146697e-20 - fConst129) * fConst0) + 9.13327563336449e-17) * fConst0) + 4.1004700293771601e-14);
	fConst131 = (4.9003386316155902e-24 * fConst0);
	fConst132 = ((((-3.4022079320465099e-20 - fConst131) * fConst0) + 4.5105170323148798e-17) * fConst0);
	fConst133 = (3.6516264480751101e-26 * fConst0);
	fConst134 = (((((fConst133 + 2.3128815883188798e-22) * fConst0) + 4.3587367099097702e-19) * fConst0) + 1.0251175073442899e-15);
	fConst135 = (1.2250846579039e-25 * fConst0);
	fConst136 = ((((fConst135 + 8.5055198301162604e-22) * fConst0) + -1.12762925807872e-18) * fConst0);
	fConst137 = (((((((5.6510140090013199e-21 - fConst107) * fConst0) + 3.9252695311584901e-17) * fConst0) + -9.2167404048692497e-14) * fConst0) + -7.7889041649985896e-11);
	fConst138 = (((((((fConst109 + -4.3944285809490903e-22) * fConst0) + -3.1262808649846102e-19) * fConst0) + -1.25497134030328e-14) * fConst0) + -1.6828329000563901e-11);
	fConst139 = (((((((fConst111 + -4.3815986662861097e-21) * fConst0) + -1.97169502766056e-17) * fConst0) + 1.9468150984561001e-14) * fConst0) + 4.1004700293771598e-13);
	fConst140 = (((((((2.08159710672437e-19 - fConst113) * fConst0) + 1.1509868431142501e-15) * fConst0) + -1.7274587716484e-12) * fConst0) + -7.2989770609859495e-10);
	fConst141 = (((((((1.7526394665144399e-19 - fConst115) * fConst0) + 7.8867801106422502e-16) * fConst0) + -7.7872603938243799e-13) * fConst0) + -1.6401880117508699e-11);
	fConst142 = (((((((1.3988859316228801e-21 - fConst117) * fConst0) + 9.3208271854710207e-18) * fConst0) + -2.2021492307326101e-14) * fConst0) + -1.88954939527135e-11);
	fConst143 = (((((((5.1506559567053599e-20 - fConst119) * fConst0) + 2.6881030145451502e-16) * fConst0) + -3.9262012734105999e-13) * fConst0) + -1.6029110114838e-10);
	fConst144 = ((((((3.3362338689426801e-20 - fConst121) * fConst0) + 1.7214668882049301e-16) * fConst0) + -1.7632021126321799e-13) * fConst0);
	fConst145 = (((((((fConst123 + -3.81575056594495e-22) * fConst0) + -7.25948753282719e-19) * fConst0) + -2.6639653534727698e-15) * fConst0) + -4.1004700293771601e-12);
	fConst146 = ((((((fConst125 + -8.3405846723566902e-22) * fConst0) + -4.3036672205123199e-18) * fConst0) + 4.4080052815804502e-15) * fConst0);
	fConst147 = (((((((fConst127 + -1.26643630031045e-21) * fConst0) + -4.4642400663565698e-18) * fConst0) + 4.5146756087445399e-15) * fConst0) + 9.3192500667662809e-13);
	fConst148 = (((((fConst129 + -4.6416430167146697e-20) * fConst0) + -9.13327563336449e-17) * fConst0) + 4.1004700293771601e-14);
	fConst149 = ((((fConst131 + -3.4022079320465099e-20) * fConst0) + -4.5105170323148798e-17) * fConst0);
	fConst150 = (((((2.3128815883188798e-22 - fConst133) * fConst0) + -4.3587367099097702e-19) * fConst0) + 1.0251175073442899e-15);
	fConst151 = ((((8.5055198301162604e-22 - fConst135) * fConst0) + 1.12762925807872e-18) * fConst0);
	fConst152 = (((((((fConst77 + -8.4765210135019795e-21) * fConst0) + 1.96263476557925e-17) * fConst0) + 4.6083702024346198e-14) * fConst0) + -1.16833562474979e-10);
	fConst153 = (((((((6.5916428714236397e-22 - fConst79) * fConst0) + -1.5631404324923e-19) * fConst0) + 6.2748567015163999e-15) * fConst0) + -2.5242493500845798e-11);
	fConst154 = (((((((6.57239799942916e-21 - fConst81) * fConst0) + -9.8584751383028106e-18) * fConst0) + -9.7340754922804799e-15) * fConst0) + 6.1507050440657501e-13);
	fConst155 = (((((((fConst83 + -3.1223956600865499e-19) * fConst0) + 5.7549342155712296e-16) * fConst0) + 8.6372938582420099e-13) * fConst0) + -1.09484655914789e-09);
	fConst156 = (((((((fConst85 + -2.6289591997716702e-19) * fConst0) + 3.9433900553211202e-16) * fConst0) + 3.89363019691219e-13) * fConst0) + -2.4602820176262999e-11);
	fConst157 = (((((((fConst87 + -2.0983288974343302e-21) * fConst0) + 4.6604135927355104e-18) * fConst0) + 1.1010746153663e-14) * fConst0) + -2.8343240929070199e-11);
	fConst158 = (((((((fConst89 + -7.7259839350580303e-20) * fConst0) + 1.3440515072725699e-16) * fConst0) + 1.9631006367053e-13) * fConst0) + -2.4043665172256999e-10);
	fConst159 = ((((((fConst91 + -5.0043508034140103e-20) * fConst0) + 8.6073344410246503e-17) * fConst0) + 8.8160105631608994e-14) * fConst0);
	fConst160 = (((((((5.7236258489174201e-22 - fConst93) * fConst0) + -3.6297437664135902e-19) * fConst0) + 1.33198267673638e-15) * fConst0) + -6.1507050440657499e-12);
	fConst161 = ((((((1.2510877008535e-21 - fConst95) * fConst0) + -2.15183361025616e-18) * fConst0) + -2.2040026407902298e-15) * fConst0);
	fConst162 = (((((((1.8996544504656799e-21 - fConst97) * fConst0) + -2.2321200331782899e-18) * fConst0) + -2.25733780437227e-15) * fConst0) + 1.39788751001494e-12);
	fConst163 = (((((6.9624645250719998e-20 - fConst99) * fConst0) + -4.5666378166822401e-17) * fConst0) + -2.05023501468858e-14);
	fConst164 = ((((5.1033118980697597e-20 - fConst101) * fConst0) + -2.2552585161574399e-17) * fConst0);
	fConst165 = (((((fConst103 + -3.4693223824783202e-22) * fConst0) + -2.1793683549548899e-19) * fConst0) + -5.1255875367214595e-16);
	fConst166 = ((((fConst105 + -1.27582797451744e-21) * fConst0) + 5.6381462903935998e-19) * fConst0);
	fConst167 = (6.8314398014138702e-26 * fConst0);
	fConst168 = (((((((2.82550700450066e-21 - fConst167) * fConst0) + -1.96263476557925e-17) * fConst0) + 4.6083702024346198e-14) * fConst0) + -3.8944520824992999e-11);
	fConst169 = (6.2883545748036199e-27 * fConst0);
	fConst170 = (((((((fConst169 + -2.1972142904745499e-22) * fConst0) + 1.5631404324923e-19) * fConst0) + 6.2748567015163999e-15) * fConst0) + -8.4141645002819393e-12);
	fConst171 = (5.7114006339074499e-26 * fConst0);
	fConst172 = (((((((fConst171 + -2.1907993331430499e-21) * fConst0) + 9.8584751383028106e-18) * fConst0) + -9.7340754922804799e-15) * fConst0) + 2.0502350146885799e-13);
	fConst173 = (2.6274768466976401e-24 * fConst0);
	fConst174 = (((((((1.04079855336218e-19 - fConst173) * fConst0) + -5.7549342155712296e-16) * fConst0) + 8.6372938582420099e-13) * fConst0) + -3.6494885304929701e-10);
	fConst175 = (2.2845602535629799e-24 * fConst0);
	fConst176 = (((((((8.7631973325722199e-20 - fConst175) * fConst0) + -3.9433900553211202e-16) * fConst0) + 3.89363019691219e-13) * fConst0) + -8.2009400587543299e-12);
	fConst177 = (1.7078599503534701e-26 * fConst0);
	fConst178 = (((((((6.9944296581144201e-22 - fConst177) * fConst0) + -4.6604135927355104e-18) * fConst0) + 1.1010746153663e-14) * fConst0) + -9.4477469763567502e-12);
	fConst179 = (6.5686921167441104e-25 * fConst0);
	fConst180 = (((((((2.57532797835268e-20 - fConst179) * fConst0) + -1.3440515072725699e-16) * fConst0) + 1.9631006367053e-13) * fConst0) + -8.014555057419e-11);
	fConst181 = (4.2534939322423303e-25 * fConst0);
	fConst182 = ((((((1.6681169344713401e-20 - fConst181) * fConst0) + -8.6073344410246503e-17) * fConst0) + 8.8160105631608994e-14) * fConst0);
	fConst183 = (5.3626460680302097e-27 * fConst0);
	fConst184 = (((((((fConst183 + -1.9078752829724701e-22) * fConst0) + 3.6297437664135902e-19) * fConst0) + 1.33198267673638e-15) * fConst0) + -2.0502350146885801e-12);
	fConst185 = (1.0633734830605799e-26 * fConst0);
	fConst186 = ((((((fConst185 + -4.1702923361783498e-22) * fConst0) + 2.15183361025616e-18) * fConst0) + -2.2040026407902298e-15) * fConst0);
	fConst187 = (1.7048207165886701e-26 * fConst0);
	fConst188 = (((((((fConst187 + -6.3321815015522602e-22) * fConst0) + 2.2321200331782899e-18) * fConst0) + -2.25733780437227e-15) * fConst0) + 4.6596250333831404e-13);
	fConst189 = (6.5570027561102599e-25 * fConst0);
	fConst190 = (((((fConst189 + -2.32082150835733e-20) * fConst0) + 4.5666378166822401e-17) * fConst0) + -2.05023501468858e-14);
	fConst191 = (4.9003386316155898e-25 * fConst0);
	fConst192 = ((((fConst191 + -1.7011039660232501e-20) * fConst0) + 2.2552585161574399e-17) * fConst0);
	fConst193 = (3.6516264480751102e-27 * fConst0);
	fConst194 = (((((1.1564407941594399e-22 - fConst193) * fConst0) + 2.1793683549548899e-19) * fConst0) + -5.1255875367214595e-16);
	fConst195 = (1.2250846579039e-26 * fConst0);
	fConst196 = ((((4.2527599150581302e-22 - fConst195) * fConst0) + -5.6381462903935998e-19) * fConst0);
	fConst197 = (((((((fConst167 + 2.82550700450066e-21) * fConst0) + 1.96263476557925e-17) * fConst0) + 4.6083702024346198e-14) * fConst0) + 3.8944520824992999e-11);
	fConst198 = (((((((-2.1972142904745499e-22 - fConst169) * fConst0) + -1.5631404324923e-19) * fConst0) + 6.2748567015163999e-15) * fConst0) + 8.4141645002819393e-12);
	fConst199 = (((((((-2.1907993331430499e-21 - fConst171) * fConst0) + -9.8584751383028106e-18) * fConst0) + -9.7340754922804799e-15) * fConst0) + -2.0502350146885799e-13);
	fConst200 = (((((((fConst173 + 1.04079855336218e-19) * fConst0) + 5.7549342155712296e-16) * fConst0) + 8.6372938582420099e-13) * fConst0) + 3.6494885304929701e-10);
	fConst201 = (((((((fConst175 + 8.7631973325722199e-20) * fConst0) + 3.9433900553211202e-16) * fConst0) + 3.89363019691219e-13) * fConst0) + 8.2009400587543299e-12);
	fConst202 = (((((((fConst177 + 6.9944296581144201e-22) * fConst0) + 4.6604135927355104e-18) * fConst0) + 1.1010746153663e-14) * fConst0) + 9.4477469763567502e-12);
	fConst203 = (((((((fConst179 + 2.57532797835268e-20) * fConst0) + 1.3440515072725699e-16) * fConst0) + 1.9631006367053e-13) * fConst0) + 8.014555057419e-11);
	fConst204 = ((((((fConst181 + 1.6681169344713401e-20) * fConst0) + 8.6073344410246503e-17) * fConst0) + 8.8160105631608994e-14) * fConst0);
	fConst205 = (((((((-1.9078752829724701e-22 - fConst183) * fConst0) + -3.6297437664135902e-19) * fConst0) + 1.33198267673638e-15) * fConst0) + 2.0502350146885801e-12);
	fConst206 = ((((((-4.1702923361783498e-22 - fConst185) * fConst0) + -2.15183361025616e-18) * fConst0) + -2.2040026407902298e-15) * fConst0);
	fConst207 = (((((((-6.3321815015522602e-22 - fConst187) * fConst0) + -2.2321200331782899e-18) * fConst0) + -2.25733780437227e-15) * fConst0) + -4.6596250333831404e-13);
	fConst208 = (((((-2.32082150835733e-20 - fConst189) * fConst0) + -4.5666378166822401e-17) * fConst0) + -2.05023501468858e-14);
	fConst209 = ((((-1.7011039660232501e-20 - fConst191) * fConst0) + -2.2552585161574399e-17) * fConst0);
	fConst210 = (((((fConst193 + 1.1564407941594399e-22) * fConst0) + -2.1793683549548899e-19) * fConst0) + -5.1255875367214595e-16);
	fConst211 = ((((fConst195 + 4.2527599150581302e-22) * fConst0) + 5.6381462903935998e-19) * fConst0);
	fConst212 = (1.2485327761411901e-16 * fConst0);
	fConst213 = ((-5.1604092696646299e-13 - fConst212) * fConst0);
	fConst214 = (fConst213 + -3.6234305507257199e-10);
	fConst215 = (4.8020491390045902e-15 * fConst0);
	fConst216 = ((-1.98477279602486e-11 - fConst215) * fConst0);
	fConst217 = (fConst216 + -1.3936271348945099e-08);
	fConst218 = (4.7306262562409197e-18 * fConst0);
	fConst219 = ((((-2.13378560318615e-14 - fConst218) * fConst0) + -1.5329898483839598e-11) * fConst0);
	fConst220 = (1.2299628266226399e-19 * fConst0);
	fConst221 = (((((-6.4976149454605399e-16 - fConst220) * fConst0) + -8.6365241413844299e-13) * fConst0) + -3.4066441075199102e-10);
	fConst222 = (1.1826565640602299e-19 * fConst0);
	fConst223 = ((((fConst222 + 5.3344640079653798e-16) * fConst0) + 3.8324746209598902e-13) * fConst0);
	fConst224 = (1.4342322713267501e-19 * fConst0);
	fConst225 = (((((-3.7934753592169802e-16 - fConst224) * fConst0) + -3.1118145447599902e-13) * fConst0) + -7.7423729716361497e-11);
	fConst226 = (5.5162779666413499e-18 * fConst0);
	fConst227 = (-4.9464472441189002e-15 - fConst226);
	fConst228 = (1.37906949166034e-19 * fConst0);
	fConst229 = (fConst228 + 1.23661181102973e-16);
	fConst230 = ((fConst212 + -5.1604092696646299e-13) * fConst0);
	fConst231 = (fConst230 + -1.08702916521772e-09);
	fConst232 = ((fConst215 + -1.98477279602486e-11) * fConst0);
	fConst233 = (fConst232 + -4.1808814046835199e-08);
	fConst234 = (1.41918787687228e-17 * fConst0);
	fConst235 = ((((fConst234 + 2.13378560318615e-14) * fConst0) + -1.5329898483839598e-11) * fConst0);
	fConst236 = (3.6898884798679202e-19 * fConst0);
	fConst237 = (((((fConst236 + 6.4976149454605399e-16) * fConst0) + -8.6365241413844299e-13) * fConst0) + -1.0219932322559699e-09);
	fConst238 = (3.5479696921806898e-19 * fConst0);
	fConst239 = ((((-5.3344640079653798e-16 - fConst238) * fConst0) + 3.8324746209598902e-13) * fConst0);
	fConst240 = (4.3026968139802599e-19 * fConst0);
	fConst241 = (((((fConst240 + 3.7934753592169802e-16) * fConst0) + -3.1118145447599902e-13) * fConst0) + -2.3227118914908501e-10);
	fConst242 = (1.6548833899924099e-17 * fConst0);
	fConst243 = (fConst242 + 4.9464472441189002e-15);
	fConst244 = (4.1372084749810099e-19 * fConst0);
	fConst245 = (-1.23661181102973e-16 - fConst244);
	fConst246 = (2.49706555228239e-16 * fConst0);
	fConst247 = (((fConst246 + 1.03208185393293e-12) * fConst0) + -7.2468611014514398e-10);
	fConst248 = (9.6040982780091899e-15 * fConst0);
	fConst249 = (((fConst248 + 3.9695455920497102e-11) * fConst0) + -2.7872542697890099e-08);
	fConst250 = (9.4612525124818302e-18 * fConst0);
	fConst251 = ((((4.2675712063723101e-14 - fConst250) * fConst0) + 3.0659796967679197e-11) * fConst0);
	fConst252 = (2.4599256532452798e-19 * fConst0);
	fConst253 = (((((1.29952298909211e-15 - fConst252) * fConst0) + 1.72730482827689e-12) * fConst0) + -6.8132882150398101e-10);
	fConst254 = (2.3653131281204599e-19 * fConst0);
	fConst255 = ((((fConst254 + -1.0668928015930799e-15) * fConst0) + -7.6649492419197895e-13) * fConst0);
	fConst256 = (2.8684645426535002e-19 * fConst0);
	fConst257 = (((((7.5869507184339703e-16 - fConst256) * fConst0) + 6.2236290895199905e-13) * fConst0) + -1.5484745943272299e-10);
	fConst258 = (1.10325559332827e-17 * fConst0);
	fConst259 = (9.8928944882378099e-15 - fConst258);
	fConst260 = (2.75813898332068e-19 * fConst0);
	fConst261 = (fConst260 + -2.4732236220594501e-16);
	fConst262 = (((1.03208185393293e-12 - fConst246) * fConst0) + 7.2468611014514398e-10);
	fConst263 = (((3.9695455920497102e-11 - fConst248) * fConst0) + 2.7872542697890099e-08);
	fConst264 = ((((-4.2675712063723101e-14 - fConst250) * fConst0) + 3.0659796967679197e-11) * fConst0);
	fConst265 = (((((-1.29952298909211e-15 - fConst252) * fConst0) + 1.72730482827689e-12) * fConst0) + 6.8132882150398101e-10);
	fConst266 = ((((fConst254 + 1.0668928015930799e-15) * fConst0) + -7.6649492419197895e-13) * fConst0);
	fConst267 = (((((-7.5869507184339703e-16 - fConst256) * fConst0) + 6.2236290895199905e-13) * fConst0) + 1.5484745943272299e-10);
	fConst268 = (-9.8928944882378099e-15 - fConst258);
	fConst269 = (fConst260 + 2.4732236220594501e-16);
	fConst270 = (fConst213 + 1.08702916521772e-09);
	fConst271 = (fConst216 + 4.1808814046835199e-08);
	fConst272 = ((((fConst234 + -2.13378560318615e-14) * fConst0) + -1.5329898483839598e-11) * fConst0);
	fConst273 = (((((fConst236 + -6.4976149454605399e-16) * fConst0) + -8.6365241413844299e-13) * fConst0) + 1.0219932322559699e-09);
	fConst274 = ((((5.3344640079653798e-16 - fConst238) * fConst0) + 3.8324746209598902e-13) * fConst0);
	fConst275 = (((((fConst240 + -3.7934753592169802e-16) * fConst0) + -3.1118145447599902e-13) * fConst0) + 2.3227118914908501e-10);
	fConst276 = (fConst242 + -4.9464472441189002e-15);
	fConst277 = (1.23661181102973e-16 - fConst244);
	fConst278 = (fConst230 + 3.6234305507257199e-10);
	fConst279 = (fConst232 + 1.3936271348945099e-08);
	fConst280 = ((((2.13378560318615e-14 - fConst218) * fConst0) + -1.5329898483839598e-11) * fConst0);
	fConst281 = (((((6.4976149454605399e-16 - fConst220) * fConst0) + -8.6365241413844299e-13) * fConst0) + 3.4066441075199102e-10);
	fConst282 = ((((fConst222 + -5.3344640079653798e-16) * fConst0) + 3.8324746209598902e-13) * fConst0);
	fConst283 = (((((3.7934753592169802e-16 - fConst224) * fConst0) + -3.1118145447599902e-13) * fConst0) + 7.7423729716361497e-11);
	fConst284 = (4.9464472441189002e-15 - fConst226);
	fConst285 = (fConst228 + -1.23661181102973e-16);
	fConst286 = (3.4586160859408301e-20 * fConst0);
	fConst287 = (((((-1.1978459678459e-17 - fConst286) * fConst0) + 2.4136075829069901e-15) * fConst0) + 4.1397459349933598e-13);
	fConst288 = (5.76436014323472e-23 * fConst0);
	fConst289 = (((((((-3.5935379035377098e-20 - fConst288) * fConst0) + -2.4136075829069899e-18) * fConst0) + 1.3799153116644501e-16) * fConst0) + 3.4916344162138e-16);
	fConst290 = (4.3049759254567299e-23 * fConst0);
	fConst291 = (((((((fConst290 + 3.3256156769456601e-20) * fConst0) + 2.3258092501078899e-18) * fConst0) + -1.3525220310055801e-16) * fConst0) + -3.42321066003398e-16);
	fConst292 = (2.30574405729389e-20 * fConst0);
	fConst293 = (((((fConst292 + -2.3956919356918e-17) * fConst0) + -4.8272151658139803e-15) * fConst0) + 2.7598306233289099e-13);
	fConst294 = (1.15287202864694e-22 * fConst0);
	fConst295 = (((((((fConst294 + 2.3956919356918099e-20) * fConst0) + -4.8272151658139797e-18) * fConst0) + -2.75983062332891e-16) * fConst0) + 2.3277562774758701e-16);
	fConst296 = (8.6099518509134598e-23 * fConst0);
	fConst297 = (((((((-2.2170771179637701e-20 - fConst296) * fConst0) + 4.6516185002157798e-18) * fConst0) + 2.7050440620111498e-16) * fConst0) + -2.2821404400226502e-16);
	fConst298 = (((((fConst292 + 2.3956919356918e-17) * fConst0) + -4.8272151658139803e-15) * fConst0) + -2.7598306233289099e-13);
	fConst299 = (((((((2.3956919356918099e-20 - fConst294) * fConst0) + 4.8272151658139797e-18) * fConst0) + -2.75983062332891e-16) * fConst0) + -2.3277562774758701e-16);
	fConst300 = (((((((fConst296 + -2.2170771179637701e-20) * fConst0) + -4.6516185002157798e-18) * fConst0) + 2.7050440620111498e-16) * fConst0) + 2.2821404400226502e-16);
	fConst301 = (((((1.1978459678459e-17 - fConst286) * fConst0) + 2.4136075829069901e-15) * fConst0) + -4.1397459349933598e-13);
	fConst302 = (((((((fConst288 + -3.5935379035377098e-20) * fConst0) + 2.4136075829069899e-18) * fConst0) + 1.3799153116644501e-16) * fConst0) + -3.4916344162138e-16);
	fConst303 = (((((((3.3256156769456601e-20 - fConst290) * fConst0) + -2.3258092501078899e-18) * fConst0) + -1.3525220310055801e-16) * fConst0) + 3.42321066003398e-16);
	fConst304 = (1.15287202864694e-20 * fConst0);
	fConst305 = (((((fConst304 + -1.1978459678459e-17) * fConst0) + 2.4136075829069901e-15) * fConst0) + -1.3799153116644499e-13);
	fConst306 = (1.15287202864694e-23 * fConst0);
	fConst307 = (((((((1.1978459678459e-20 - fConst306) * fConst0) + -2.4136075829069899e-18) * fConst0) + 1.3799153116644501e-16) * fConst0) + -1.1638781387379301e-16);
	fConst308 = (8.6099518509134607e-24 * fConst0);
	fConst309 = (((((((fConst308 + -1.10853855898189e-20) * fConst0) + 2.3258092501078899e-18) * fConst0) + -1.3525220310055801e-16) * fConst0) + 1.14107022001133e-16);
	fConst310 = (((((fConst304 + 1.1978459678459e-17) * fConst0) + 2.4136075829069901e-15) * fConst0) + 1.3799153116644499e-13);
	fConst311 = (((((((fConst306 + 1.1978459678459e-20) * fConst0) + 2.4136075829069899e-18) * fConst0) + 1.3799153116644501e-16) * fConst0) + 1.1638781387379301e-16);
	fConst312 = (((((((-1.10853855898189e-20 - fConst308) * fConst0) + -2.3258092501078899e-18) * fConst0) + -1.3525220310055801e-16) * fConst0) + -1.14107022001133e-16);
	fConst313 = (2.3801218617735099e-20 * fConst0);
	fConst314 = (((((fConst313 + 2.9736731664668699e-18) * fConst0) + 1.8774447110799601e-19) * fConst0) + 1.62773154056433e-19);
	fConst315 = (2.38012186177351e-23 * fConst0);
	fConst316 = (((((fConst315 + 2.9736731664668699e-21) * fConst0) + 1.87744471107996e-22) * fConst0) + 1.62773154056433e-22);
	fConst317 = (2.3334608448668999e-23 * fConst0);
	fConst318 = (((((-2.9153814492596399e-21 - fConst317) * fConst0) + -1.8478317276844e-22) * fConst0) + -1.62773154056433e-22);
	fConst319 = (7.1403655853205295e-20 * fConst0);
	fConst320 = (((((-2.9736731664668699e-18 - fConst319) * fConst0) + 1.8774447110799601e-19) * fConst0) + 4.8831946216929798e-19);
	fConst321 = (1.1900609308867601e-22 * fConst0);
	fConst322 = (((((-8.9210194994006007e-21 - fConst321) * fConst0) + -1.87744471107996e-22) * fConst0) + 1.62773154056433e-22);
	fConst323 = (1.1667304224334501e-22 * fConst0);
	fConst324 = (((((fConst323 + 8.74614434777892e-21) * fConst0) + 1.8478317276844e-22) * fConst0) + -1.62773154056433e-22);
	fConst325 = (4.7602437235470199e-20 * fConst0);
	fConst326 = (((((fConst325 + -5.9473463329337297e-18) * fConst0) + -3.7548894221599201e-19) * fConst0) + 3.2554630811286601e-19);
	fConst327 = (2.3801218617735098e-22 * fConst0);
	fConst328 = (((((fConst327 + 5.94734633293373e-21) * fConst0) + -3.7548894221599199e-22) * fConst0) + -3.2554630811286599e-22);
	fConst329 = (2.3334608448669002e-22 * fConst0);
	fConst330 = (((((-5.8307628985192797e-21 - fConst329) * fConst0) + 3.6956634553687901e-22) * fConst0) + 3.2554630811286599e-22);
	fConst331 = (((((fConst325 + 5.9473463329337297e-18) * fConst0) + -3.7548894221599201e-19) * fConst0) + -3.2554630811286601e-19);
	fConst332 = (((((5.94734633293373e-21 - fConst327) * fConst0) + 3.7548894221599199e-22) * fConst0) + -3.2554630811286599e-22);
	fConst333 = (((((fConst329 + -5.8307628985192797e-21) * fConst0) + -3.6956634553687901e-22) * fConst0) + 3.2554630811286599e-22);
	fConst334 = (((((2.9736731664668699e-18 - fConst319) * fConst0) + 1.8774447110799601e-19) * fConst0) + -4.8831946216929798e-19);
	fConst335 = (((((fConst321 + -8.9210194994006007e-21) * fConst0) + 1.87744471107996e-22) * fConst0) + 1.62773154056433e-22);
	fConst336 = (((((8.74614434777892e-21 - fConst323) * fConst0) + -1.8478317276844e-22) * fConst0) + -1.62773154056433e-22);
	fConst337 = (((((fConst313 + -2.9736731664668699e-18) * fConst0) + 1.8774447110799601e-19) * fConst0) + -1.62773154056433e-19);
	fConst338 = (((((2.9736731664668699e-21 - fConst315) * fConst0) + -1.87744471107996e-22) * fConst0) + 1.62773154056433e-22);
	fConst339 = (((((fConst317 + -2.9153814492596399e-21) * fConst0) + 1.8478317276844e-22) * fConst0) + -1.62773154056433e-22);
	fConst340 = (1.0 / (((fConst23 + 1.0000000000000004) / fConst22) + 1.0));
	fConst341 = (1.0 / (fConst22 * fConst24));
	fConst342 = (0.0 - fConst341);
	fConst343 = (fConst26 / fConst24);
	fConst344 = (((fConst23 + -1.0000000000000004) / fConst22) + 1.0);
	fConst345 = (0.0 - (2.0 / fConst28));
	fConst346 = (1.0 / (((fConst32 + 1.0000000000000004) / fConst31) + 1.0));
	fConst347 = (1.0 / (fConst31 * fConst33));
	fConst348 = (1.0 / fConst24);
	fConst349 = (0.0 - fConst347);
	fConst350 = (fConst35 / fConst33);
	fConst351 = (((fConst32 + -1.0000000000000004) / fConst31) + 1.0);
	fConst352 = (0.0 - (2.0 / fConst37));
	fConst353 = (1.0 / (((fConst41 + 1.0000000000000004) / fConst40) + 1.0));
	fConst354 = (1.0 / (fConst40 * fConst42));
	fConst355 = (1.0 / fConst33);
	fConst356 = (0.0 - fConst354);
	fConst357 = (fConst44 / fConst42);
	fConst358 = (((fConst41 + -1.0000000000000004) / fConst40) + 1.0);
	fConst359 = (0.0 - (2.0 / fConst46));
	fConst360 = (1.0 / fConst42);
	fConst361 = (1.0 / fConst5);
	fConst362 = (1.4611662601223799e-23 * fConst0);
	fConst363 = (((((((((-1.3326741742746001e-19 - fConst362) * fConst0) + -1.7342952772577399e-16) * fConst0) + 1.64983504337994e-13) * fConst0) + 3.1625931909772299e-10) * fConst0) + 6.95132182320574e-08);
	fConst364 = (2.9223325202447598e-23 * fConst0);
	fConst365 = (((((((((fConst364 + 8.8844944951639999e-20) * fConst0) + -3.4685905545154699e-16) * fConst0) + -3.2996700867598901e-13) * fConst0) + 2.1083954606514901e-10) * fConst0) + 1.3902643646411501e-07);
	fConst366 = (((((((((8.8844944951639999e-20 - fConst364) * fConst0) + 3.4685905545154699e-16) * fConst0) + -3.2996700867598901e-13) * fConst0) + -2.1083954606514901e-10) * fConst0) + 1.3902643646411501e-07);
	fConst367 = (((((((((fConst362 + -1.3326741742746001e-19) * fConst0) + 1.7342952772577399e-16) * fConst0) + 1.64983504337994e-13) * fConst0) + -3.1625931909772299e-10) * fConst0) + 6.95132182320574e-08);
	fConst368 = (((((((((4.442247247582e-20 - fConst4) * fConst0) + -1.7342952772577399e-16) * fConst0) + 1.64983504337994e-13) * fConst0) + -1.05419773032574e-10) * fConst0) + 1.39026436464115e-08);
	fConst369 = (1.1307880712318499e-19 * fConst0);
	fConst370 = (((-1.3617846184865501e-16 - fConst369) * fConst0) + 8.9109827731859304e-14);
	fConst371 = (7.5385871415456898e-20 * fConst0);
	fConst372 = (((fConst371 + -2.7235692369730899e-16) * fConst0) + -1.7821965546371901e-13);
	fConst373 = (((fConst371 + 2.7235692369730899e-16) * fConst0) + -1.7821965546371901e-13);
	fConst374 = (((1.3617846184865501e-16 - fConst369) * fConst0) + 8.9109827731859304e-14);
	fConst375 = (((fConst7 + -1.3617846184865501e-16) * fConst0) + 8.9109827731859304e-14);
	fConst376 = (1.02514866169546e-23 * fConst0);
	fConst377 = (((((((((-1.76354930262502e-19 - fConst376) * fConst0) + -1.20685610628971e-15) * fConst0) + 1.21185035126741e-11) * fConst0) + 2.5820560172106301e-07) * fConst0) + 2.15156187392428e-07);
	fConst378 = (2.0502973233909101e-23 * fConst0);
	fConst379 = (((((((((fConst378 + 1.17569953508334e-19) * fConst0) + -2.4137122125794201e-15) * fConst0) + -2.42370070253482e-11) * fConst0) + 1.72137067814042e-07) * fConst0) + 4.30312374784857e-07);
	fConst380 = (((((((((1.17569953508334e-19 - fConst378) * fConst0) + 2.4137122125794201e-15) * fConst0) + -2.42370070253482e-11) * fConst0) + -1.72137067814042e-07) * fConst0) + 4.30312374784857e-07);
	fConst381 = (((((((((fConst376 + -1.76354930262502e-19) * fConst0) + 1.20685610628971e-15) * fConst0) + 1.21185035126741e-11) * fConst0) + -2.5820560172106301e-07) * fConst0) + 2.15156187392428e-07);
	fConst382 = (((((((((5.8784976754167206e-20 - fConst1) * fConst0) + -1.20685610628971e-15) * fConst0) + 1.21185035126741e-11) * fConst0) + -8.6068533907021e-08) * fConst0) + 4.3031237478485699e-08);
	fConst383 = (0.0 - (1.72121507466581e-07 * fConst0));
	fConst384 = (0.0 - (2.5818226119987198e-07 * fConst0));
	fConst385 = (0.0 - (8.6060753733290606e-08 * fConst0));
	fVslider0 = FAUSTFLOAT(0.5);
	fVslider1 = FAUSTFLOAT(0.5);
	fVslider2 = FAUSTFLOAT(0.5);
	fVslider3 = FAUSTFLOAT(0.5);
	fVslider4 = FAUSTFLOAT(0.5);
	fVslider5 = FAUSTFLOAT(0.5);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fVslider3 (*fVslider3_)
#define fVslider4 (*fVslider4_)
#define fVslider5 (*fVslider5_)
	double fSlow0 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider0))) + -1.0));
	double fSlow1 = (0.00036676987543879196 * (std::exp((3.0 * double(fVslider1))) + -1.0));
	double fSlow2 = (0.0070000000000000062 * double(fVslider2));
	double fSlow3 = (0.0070000000000000062 * double(fVslider3));
	double fSlow4 = (0.0070000000000000062 * double(fVslider4));
	double fSlow5 = (0.0070000000000000062 * (1.0 - double(fVslider5)));
	for (int i = 0; (i < count); i = (i + 1)) {
		fRec3[0] = (fSlow0 + (0.99299999999999999 * fRec3[1]));
		double fTemp0 = double(input0[i]);
		fVec0[0] = fTemp0;
		fRec10[0] = ((fConst16 * fVec0[1]) - (fConst17 * ((fConst18 * fRec10[1]) - (fConst11 * fTemp0))));
		fRec9[0] = (fRec10[0] - (fConst12 * ((fConst19 * fRec9[2]) + (fConst20 * fRec9[1]))));
		double fTemp1 = (fConst30 * fRec8[1]);
		fRec8[0] = ((fConst12 * (((fConst14 * fRec9[0]) + (fConst21 * fRec9[1])) + (fConst14 * fRec9[2]))) - (fConst25 * ((fConst27 * fRec8[2]) + fTemp1)));
		double fTemp2 = (fConst39 * fRec7[1]);
		fRec7[0] = ((fRec8[2] + (fConst25 * (fTemp1 + (fConst27 * fRec8[0])))) - (fConst34 * ((fConst36 * fRec7[2]) + fTemp2)));
		double fTemp3 = (fConst48 * fRec6[1]);
		fRec6[0] = ((fRec7[2] + (fConst34 * (fTemp2 + (fConst36 * fRec7[0])))) - (fConst43 * ((fConst45 * fRec6[2]) + fTemp3)));
		fRec11[0] = (fSlow1 + (0.99299999999999999 * fRec11[1]));
		double fTemp4 = (fConst50 + ((fRec11[0] * ((fConst0 * (fConst52 + (fConst54 * fRec11[0]))) + -1.8698701614796901e-21)) + 3.94234397859877e-07));
		double fTemp5 = (fConst55 + ((fRec11[0] * ((fConst0 * (fConst56 + (fConst57 * fRec11[0]))) + -1.8698701614796901e-21)) + 3.94234397859877e-07));
		double fTemp6 = (fConst59 + ((fRec11[0] * ((fConst0 * (fConst61 + (fConst63 * fRec11[0]))) + -6.2329005382656503e-22)) + 1.3141146595329199e-07));
		double fTemp7 = (fConst64 + ((fRec11[0] * ((fConst0 * (fConst65 + (fConst66 * fRec11[0]))) + -6.2329005382656503e-22)) + 1.3141146595329199e-07));
		fRec5[0] = ((fRec6[2] + (fConst43 * (fTemp3 + (fConst45 * fRec6[0])))) - ((((fRec5[1] * fTemp4) + (fRec5[2] * fTemp5)) + (fRec5[3] * fTemp6)) / fTemp7));
		double fTemp8 = (fConst68 + (fConst70 * fRec11[0]));
		double fTemp9 = (fConst71 + (fConst72 * fRec11[0]));
		double fTemp10 = (fConst73 + (fConst74 * fRec11[0]));
		double fTemp11 = (fConst75 + (fConst76 * fRec11[0]));
		double fTemp12 = (fConst0 * (((((fRec5[0] * fTemp8) + (fRec5[1] * fTemp9)) + (fRec5[2] * fTemp10)) + (fRec5[3] * fTemp11)) / fTemp7));
		fRec12[0] = (fSlow2 + (0.99299999999999999 * fRec12[1]));
		fRec13[0] = (fSlow3 + (0.99299999999999999 * fRec13[1]));
		fRec14[0] = (fSlow4 + (0.99299999999999999 * fRec14[1]));
		double fTemp13 = (((fConst0 * (fConst78 + (fRec12[0] * (fConst80 + (fConst82 * fRec12[0]))))) + ((fRec13[0] * ((fConst0 * (fConst84 + (fConst86 * fRec12[0]))) + 3.7277000267065098e-08)) + (fRec14[0] * ((fConst0 * (fConst88 + (((fRec13[0] * (fConst90 + (fConst92 * fRec12[0]))) + (fRec12[0] * (fConst94 + (fConst96 * fRec12[0])))) + (fRec14[0] * (fConst98 + (fConst0 * ((fRec13[0] * (fConst100 + (fConst102 * fRec12[0]))) + (fRec12[0] * (fConst104 + (fConst106 * fRec12[0])))))))))) + 9.3192500667662794e-09)))) + 3.8246202274008801e-08);
		double fTemp14 = (((fConst0 * (fConst108 + (fRec12[0] * (fConst110 + (fConst112 * fRec12[0]))))) + ((fRec13[0] * ((fConst0 * (fConst114 + (fConst116 * fRec12[0]))) + 7.4554000534130301e-08)) + (fRec14[0] * ((fConst0 * (fConst118 + (((fRec13[0] * (fConst120 + (fConst122 * fRec12[0]))) + (fRec12[0] * (fConst124 + (fConst126 * fRec12[0])))) + (fRec14[0] * (fConst128 + (fConst0 * ((fRec13[0] * (fConst130 + (fConst132 * fRec12[0]))) + (fRec12[0] * (fConst134 + (fConst136 * fRec12[0])))))))))) + 1.8638500133532599e-08)))) + 7.6492404548017695e-08);
		double fTemp15 = (((fConst0 * (fConst137 + (fRec12[0] * (fConst138 + (fConst139 * fRec12[0]))))) + ((fRec13[0] * ((fConst0 * (fConst140 + (fConst141 * fRec12[0]))) + 7.4554000534130301e-08)) + (fRec14[0] * ((fConst0 * (fConst142 + (((fRec13[0] * (fConst143 + (fConst144 * fRec12[0]))) + (fRec12[0] * (fConst145 + (fConst146 * fRec12[0])))) + (fRec14[0] * (fConst147 + (fConst0 * ((fRec13[0] * (fConst148 + (fConst149 * fRec12[0]))) + (fRec12[0] * (fConst150 + (fConst151 * fRec12[0])))))))))) + 1.8638500133532599e-08)))) + 7.6492404548017695e-08);
		double fTemp16 = (((fConst0 * (fConst152 + (fRec12[0] * (fConst153 + (fConst154 * fRec12[0]))))) + ((fRec13[0] * ((fConst0 * (fConst155 + (fConst156 * fRec12[0]))) + 3.7277000267065098e-08)) + (fRec14[0] * ((fConst0 * (fConst157 + (((fRec13[0] * (fConst158 + (fConst159 * fRec12[0]))) + (fRec12[0] * (fConst160 + (fConst161 * fRec12[0])))) + (fRec14[0] * (fConst162 + (fConst0 * ((fRec13[0] * (fConst163 + (fConst164 * fRec12[0]))) + (fRec12[0] * (fConst165 + (fConst166 * fRec12[0])))))))))) + 9.3192500667662794e-09)))) + 3.8246202274008801e-08);
		double fTemp17 = (((fConst0 * (fConst168 + (fRec12[0] * (fConst170 + (fConst172 * fRec12[0]))))) + ((fRec13[0] * ((fConst0 * (fConst174 + (fConst176 * fRec12[0]))) + 7.4554000534130305e-09)) + (fRec14[0] * ((fConst0 * (fConst178 + (((fRec13[0] * (fConst180 + (fConst182 * fRec12[0]))) + (fRec12[0] * (fConst184 + (fConst186 * fRec12[0])))) + (fRec14[0] * (fConst188 + (fConst0 * ((fRec13[0] * (fConst190 + (fConst192 * fRec12[0]))) + (fRec12[0] * (fConst194 + (fConst196 * fRec12[0])))))))))) + 1.8638500133532601e-09)))) + 7.6492404548017596e-09);
		double fTemp18 = (((fConst0 * (fConst197 + (fRec12[0] * (fConst198 + (fConst199 * fRec12[0]))))) + ((fRec13[0] * ((fConst0 * (fConst200 + (fConst201 * fRec12[0]))) + 7.4554000534130305e-09)) + (fRec14[0] * ((fConst0 * (fConst202 + (((fRec13[0] * (fConst203 + (fConst204 * fRec12[0]))) + (fRec12[0] * (fConst205 + (fConst206 * fRec12[0])))) + (fRec14[0] * (fConst207 + (fConst0 * ((fRec13[0] * (fConst208 + (fConst209 * fRec12[0]))) + (fRec12[0] * (fConst210 + (fConst211 * fRec12[0])))))))))) + 1.8638500133532601e-09)))) + 7.6492404548017596e-09);
		fRec4[0] = ((0.5 * (int(signbit(double(fTemp12)))?double(plexipoweramp_pre_negclip(double(fTemp12))):double(plexipoweramp_preclip(double(fTemp12))))) - ((((((fRec4[1] * fTemp13) + (fRec4[2] * fTemp14)) + (fRec4[3] * fTemp15)) + (fRec4[4] * fTemp16)) + (fRec4[5] * fTemp17)) / fTemp18));
		double fTemp19 = (((fConst214 + (fRec13[0] * (fConst217 + (fConst219 * fRec12[0])))) + (fRec12[0] * (fConst221 + (fConst223 * fRec12[0])))) + (fRec14[0] * (fConst225 + (fConst3 * ((fConst227 * fRec13[0]) + (fConst229 * fRec12[0]))))));
		double fTemp20 = (((fConst231 + (fRec13[0] * (fConst233 + (fConst235 * fRec12[0])))) + (fRec12[0] * (fConst237 + (fConst239 * fRec12[0])))) + (fRec14[0] * (fConst241 + (fConst3 * ((fConst243 * fRec13[0]) + (fConst245 * fRec12[0]))))));
		double fTemp21 = (((fConst247 + (fRec13[0] * (fConst249 + (fConst251 * fRec12[0])))) + (fRec12[0] * (fConst253 + (fConst255 * fRec12[0])))) + (fRec14[0] * (fConst257 + (fConst3 * ((fConst259 * fRec13[0]) + (fConst261 * fRec12[0]))))));
		double fTemp22 = (((fConst262 + (fRec13[0] * (fConst263 + (fConst264 * fRec12[0])))) + (fRec12[0] * (fConst265 + (fConst266 * fRec12[0])))) + (fRec14[0] * (fConst267 + (fConst3 * ((fConst268 * fRec13[0]) + (fConst269 * fRec12[0]))))));
		double fTemp23 = (((fConst270 + (fRec13[0] * (fConst271 + (fConst272 * fRec12[0])))) + (fRec12[0] * (fConst273 + (fConst274 * fRec12[0])))) + (fRec14[0] * (fConst275 + (fConst3 * ((fConst276 * fRec13[0]) + (fConst277 * fRec12[0]))))));
		double fTemp24 = (((fConst278 + (fRec13[0] * (fConst279 + (fConst280 * fRec12[0])))) + (fRec12[0] * (fConst281 + (fConst282 * fRec12[0])))) + (fRec14[0] * (fConst283 + (fConst3 * ((fConst284 * fRec13[0]) + (fConst285 * fRec12[0]))))));
		fRec15[0] = (fSlow5 + (0.99299999999999999 * fRec15[1]));
		double fTemp25 = ((fConst0 * (fConst287 + (fRec15[0] * (fConst289 + (fConst291 * fRec15[0]))))) + 5.8193906936896698e-13);
		double fTemp26 = ((fConst0 * (fConst293 + (fRec15[0] * (fConst295 + (fConst297 * fRec15[0]))))) + 1.1638781387379299e-12);
		double fTemp27 = ((fConst0 * (fConst298 + (fRec15[0] * (fConst299 + (fConst300 * fRec15[0]))))) + 1.1638781387379299e-12);
		double fTemp28 = ((fConst0 * (fConst301 + (fRec15[0] * (fConst302 + (fConst303 * fRec15[0]))))) + 5.8193906936896698e-13);
		double fTemp29 = ((fConst0 * (fConst305 + (fRec15[0] * (fConst307 + (fConst309 * fRec15[0]))))) + 1.1638781387379301e-13);
		double fTemp30 = ((fConst0 * (fConst310 + (fRec15[0] * (fConst311 + (fConst312 * fRec15[0]))))) + 1.1638781387379301e-13);
		fRec2[0] = ((fConst9 * ((fRec3[0] * ((((((fRec4[0] * fTemp19) + (fRec4[1] * fTemp20)) + (fRec4[2] * fTemp21)) + (fRec4[3] * fTemp22)) + (fRec4[4] * fTemp23)) + (fRec4[5] * fTemp24))) / fTemp18)) - ((((((fRec2[1] * fTemp25) + (fRec2[2] * fTemp26)) + (fRec2[3] * fTemp27)) + (fRec2[4] * fTemp28)) + (fRec2[5] * fTemp29)) / fTemp30));
		double fTemp31 = (fConst314 + (fConst0 * (fRec15[0] * (fConst316 + (fConst318 * fRec15[0])))));
		double fTemp32 = (fConst320 + (fConst0 * (fRec15[0] * (fConst322 + (fConst324 * fRec15[0])))));
		double fTemp33 = (fConst326 + (fConst0 * (fRec15[0] * (fConst328 + (fConst330 * fRec15[0])))));
		double fTemp34 = (fConst331 + (fConst0 * (fRec15[0] * (fConst332 + (fConst333 * fRec15[0])))));
		double fTemp35 = (fConst334 + (fConst0 * (fRec15[0] * (fConst335 + (fConst336 * fRec15[0])))));
		double fTemp36 = (fConst337 + (fConst0 * (fRec15[0] * (fConst338 + (fConst339 * fRec15[0])))));
		double fTemp37 = (fConst0 * (((((((fRec2[0] * fTemp31) + (fRec2[1] * fTemp32)) + (fRec2[2] * fTemp33)) + (fRec2[3] * fTemp34)) + (fRec2[4] * fTemp35)) + (fRec2[5] * fTemp36)) / fTemp30));
		fRec24[0] = (0.0 - (fConst17 * ((fConst18 * fRec24[1]) - (fVec0[1] + fTemp0))));
		fRec23[0] = (fRec24[0] - (fConst12 * ((fConst19 * fRec23[2]) + (fConst20 * fRec23[1]))));
		double fTemp38 = (fRec23[2] + (fRec23[0] + (2.0 * fRec23[1])));
		fVec1[0] = fTemp38;
		fRec22[0] = ((fConst12 * ((fConst341 * fTemp38) + (fConst342 * fVec1[1]))) - (fConst343 * fRec22[1]));
		fRec21[0] = (fRec22[0] - (fConst340 * ((fConst344 * fRec21[2]) + (fConst30 * fRec21[1]))));
		double fTemp39 = (fConst39 * fRec20[1]);
		fRec20[0] = ((fConst340 * (((fConst29 * fRec21[0]) + (fConst345 * fRec21[1])) + (fConst29 * fRec21[2]))) - (fConst34 * ((fConst36 * fRec20[2]) + fTemp39)));
		double fTemp40 = (fConst48 * fRec19[1]);
		fRec19[0] = ((fRec20[2] + (fConst34 * (fTemp39 + (fConst36 * fRec20[0])))) - (fConst43 * ((fConst45 * fRec19[2]) + fTemp40)));
		fRec18[0] = ((fRec19[2] + (fConst43 * (fTemp40 + (fConst45 * fRec19[0])))) - (((fTemp6 * fRec18[3]) + ((fTemp4 * fRec18[1]) + (fTemp5 * fRec18[2]))) / fTemp7));
		double fTemp41 = (fConst0 * (((((fRec18[0] * fTemp8) + (fTemp9 * fRec18[1])) + (fTemp10 * fRec18[2])) + (fTemp11 * fRec18[3])) / fTemp7));
		fRec17[0] = ((0.5 * (int(signbit(double(fTemp41)))?double(plexipoweramp_pre_negclip(double(fTemp41))):double(plexipoweramp_preclip(double(fTemp41))))) - ((((((fTemp13 * fRec17[1]) + (fTemp14 * fRec17[2])) + (fTemp15 * fRec17[3])) + (fTemp16 * fRec17[4])) + (fTemp17 * fRec17[5])) / fTemp18));
		fRec16[0] = ((fConst9 * ((fRec3[0] * ((((((fRec17[0] * fTemp19) + (fTemp20 * fRec17[1])) + (fTemp21 * fRec17[2])) + (fTemp22 * fRec17[3])) + (fTemp23 * fRec17[4])) + (fTemp24 * fRec17[5]))) / fTemp18)) - ((((((fTemp25 * fRec16[1]) + (fTemp26 * fRec16[2])) + (fTemp27 * fRec16[3])) + (fTemp28 * fRec16[4])) + (fTemp29 * fRec16[5])) / fTemp30));
		double fTemp42 = (fConst0 * (((((((fRec16[0] * fTemp31) + (fTemp32 * fRec16[1])) + (fTemp33 * fRec16[2])) + (fTemp34 * fRec16[3])) + (fTemp35 * fRec16[4])) + (fTemp36 * fRec16[5])) / fTemp30));
		fRec32[0] = (0.0 - (fConst348 * ((fConst26 * fRec32[1]) - (fConst12 * (fTemp38 + fVec1[1])))));
		fRec31[0] = (fRec32[0] - (fConst340 * ((fConst344 * fRec31[2]) + (fConst30 * fRec31[1]))));
		double fTemp43 = (fRec31[2] + (fRec31[0] + (2.0 * fRec31[1])));
		fVec2[0] = fTemp43;
		fRec30[0] = ((fConst340 * ((fConst347 * fTemp43) + (fConst349 * fVec2[1]))) - (fConst350 * fRec30[1]));
		fRec29[0] = (fRec30[0] - (fConst346 * ((fConst351 * fRec29[2]) + (fConst39 * fRec29[1]))));
		double fTemp44 = (fConst48 * fRec28[1]);
		fRec28[0] = ((fConst346 * (((fConst38 * fRec29[0]) + (fConst352 * fRec29[1])) + (fConst38 * fRec29[2]))) - (fConst43 * ((fConst45 * fRec28[2]) + fTemp44)));
		fRec27[0] = ((fRec28[2] + (fConst43 * (fTemp44 + (fConst45 * fRec28[0])))) - ((((fTemp4 * fRec27[1]) + (fTemp5 * fRec27[2])) + (fTemp6 * fRec27[3])) / fTemp7));
		double fTemp45 = (fConst0 * (((((fRec27[0] * fTemp8) + (fTemp9 * fRec27[1])) + (fTemp10 * fRec27[2])) + (fTemp11 * fRec27[3])) / fTemp7));
		fRec26[0] = ((0.5 * (int(signbit(double(fTemp45)))?double(plexipoweramp_pre_negclip(double(fTemp45))):double(plexipoweramp_preclip(double(fTemp45))))) - ((((((fTemp13 * fRec26[1]) + (fTemp14 * fRec26[2])) + (fTemp15 * fRec26[3])) + (fTemp16 * fRec26[4])) + (fTemp17 * fRec26[5])) / fTemp18));
		fRec25[0] = ((fConst9 * ((fRec3[0] * ((((((fRec26[0] * fTemp19) + (fTemp20 * fRec26[1])) + (fTemp21 * fRec26[2])) + (fTemp22 * fRec26[3])) + (fTemp23 * fRec26[4])) + (fTemp24 * fRec26[5]))) / fTemp18)) - ((((((fTemp25 * fRec25[1]) + (fTemp26 * fRec25[2])) + (fTemp27 * fRec25[3])) + (fTemp28 * fRec25[4])) + (fTemp29 * fRec25[5])) / fTemp30));
		double fTemp46 = (fConst0 * (((((((fRec25[0] * fTemp31) + (fTemp32 * fRec25[1])) + (fTemp33 * fRec25[2])) + (fTemp34 * fRec25[3])) + (fTemp35 * fRec25[4])) + (fTemp36 * fRec25[5])) / fTemp30));
		fRec39[0] = (0.0 - (fConst355 * ((fConst35 * fRec39[1]) - (fConst340 * (fTemp43 + fVec2[1])))));
		fRec38[0] = (fRec39[0] - (fConst346 * ((fConst351 * fRec38[2]) + (fConst39 * fRec38[1]))));
		double fTemp47 = (fRec38[2] + (fRec38[0] + (2.0 * fRec38[1])));
		fVec3[0] = fTemp47;
		fRec37[0] = ((fConst346 * ((fConst354 * fTemp47) + (fConst356 * fVec3[1]))) - (fConst357 * fRec37[1]));
		fRec36[0] = (fRec37[0] - (fConst353 * ((fConst358 * fRec36[2]) + (fConst48 * fRec36[1]))));
		fRec35[0] = ((fConst353 * (((fConst47 * fRec36[0]) + (fConst359 * fRec36[1])) + (fConst47 * fRec36[2]))) - ((((fTemp4 * fRec35[1]) + (fTemp5 * fRec35[2])) + (fTemp6 * fRec35[3])) / fTemp7));
		double fTemp48 = (fConst0 * (((((fRec35[0] * fTemp8) + (fTemp9 * fRec35[1])) + (fTemp10 * fRec35[2])) + (fTemp11 * fRec35[3])) / fTemp7));
		fRec34[0] = ((0.5 * (int(signbit(double(fTemp48)))?double(plexipoweramp_pre_negclip(double(fTemp48))):double(plexipoweramp_preclip(double(fTemp48))))) - ((((((fTemp13 * fRec34[1]) + (fTemp14 * fRec34[2])) + (fTemp15 * fRec34[3])) + (fTemp16 * fRec34[4])) + (fTemp17 * fRec34[5])) / fTemp18));
		fRec33[0] = ((fConst9 * ((fRec3[0] * ((((((fRec34[0] * fTemp19) + (fTemp20 * fRec34[1])) + (fTemp21 * fRec34[2])) + (fTemp22 * fRec34[3])) + (fTemp23 * fRec34[4])) + (fTemp24 * fRec34[5]))) / fTemp18)) - ((((((fTemp25 * fRec33[1]) + (fTemp26 * fRec33[2])) + (fTemp27 * fRec33[3])) + (fTemp28 * fRec33[4])) + (fTemp29 * fRec33[5])) / fTemp30));
		double fTemp49 = (fConst0 * (((((((fRec33[0] * fTemp31) + (fTemp32 * fRec33[1])) + (fTemp33 * fRec33[2])) + (fTemp34 * fRec33[3])) + (fTemp35 * fRec33[4])) + (fTemp36 * fRec33[5])) / fTemp30));
		fRec44[0] = (0.0 - (fConst360 * ((fConst44 * fRec44[1]) - (fConst346 * (fTemp47 + fVec3[1])))));
		fRec43[0] = (fRec44[0] - (fConst353 * ((fConst358 * fRec43[2]) + (fConst48 * fRec43[1]))));
		fRec42[0] = ((fConst353 * (fRec43[2] + (fRec43[0] + (2.0 * fRec43[1])))) - ((((fTemp4 * fRec42[1]) + (fTemp5 * fRec42[2])) + (fTemp6 * fRec42[3])) / fTemp7));
		double fTemp50 = (fConst0 * (((((fRec42[0] * fTemp8) + (fTemp9 * fRec42[1])) + (fTemp10 * fRec42[2])) + (fTemp11 * fRec42[3])) / fTemp7));
		fRec41[0] = ((0.5 * (int(signbit(double(fTemp50)))?double(plexipoweramp_pre_negclip(double(fTemp50))):double(plexipoweramp_preclip(double(fTemp50))))) - ((((((fTemp13 * fRec41[1]) + (fTemp14 * fRec41[2])) + (fTemp15 * fRec41[3])) + (fTemp16 * fRec41[4])) + (fTemp17 * fRec41[5])) / fTemp18));
		fRec40[0] = ((fConst9 * ((fRec3[0] * ((((((fRec41[0] * fTemp19) + (fTemp20 * fRec41[1])) + (fTemp21 * fRec41[2])) + (fTemp22 * fRec41[3])) + (fTemp23 * fRec41[4])) + (fTemp24 * fRec41[5]))) / fTemp18)) - ((((((fTemp25 * fRec40[1]) + (fTemp26 * fRec40[2])) + (fTemp27 * fRec40[3])) + (fTemp28 * fRec40[4])) + (fTemp29 * fRec40[5])) / fTemp30));
		double fTemp51 = (fConst0 * (((((((fRec40[0] * fTemp31) + (fTemp32 * fRec40[1])) + (fTemp33 * fRec40[2])) + (fTemp34 * fRec40[3])) + (fTemp35 * fRec40[4])) + (fTemp36 * fRec40[5])) / fTemp30));
		fRec1[0] = ((0.5 * (((((int(signbit(double(fTemp37)))?double(plexipoweramp_negclip(double(fTemp37))):double(plexipowerampclip(double(fTemp37)))) + (int(signbit(double(fTemp42)))?double(plexipoweramp_negclip(double(fTemp42))):double(plexipowerampclip(double(fTemp42))))) + (int(signbit(double(fTemp46)))?double(plexipoweramp_negclip(double(fTemp46))):double(plexipowerampclip(double(fTemp46))))) + (int(signbit(double(fTemp49)))?double(plexipoweramp_negclip(double(fTemp49))):double(plexipowerampclip(double(fTemp49))))) + (int(signbit(double(fTemp51)))?double(plexipoweramp_negclip(double(fTemp51))):double(plexipowerampclip(double(fTemp51)))))) - (fConst361 * (((((fConst363 * fRec1[1]) + (fConst365 * fRec1[2])) + (fConst366 * fRec1[3])) + (fConst367 * fRec1[4])) + (fConst368 * fRec1[5]))));
		fRec0[0] = ((fConst6 * ((((((fConst8 * fRec1[0]) + (fConst370 * fRec1[1])) + (fConst372 * fRec1[2])) + (fConst373 * fRec1[3])) + (fConst374 * fRec1[4])) + (fConst375 * fRec1[5]))) - (fConst2 * (((((fConst377 * fRec0[1]) + (fConst379 * fRec0[2])) + (fConst380 * fRec0[3])) + (fConst381 * fRec0[4])) + (fConst382 * fRec0[5]))));
		output0[i] = FAUSTFLOAT((fConst2 * ((((fConst0 * (((8.6060753733290606e-08 * fRec0[0]) + (2.5818226119987198e-07 * fRec0[1])) + (1.72121507466581e-07 * fRec0[2]))) + (fConst383 * fRec0[3])) + (fConst384 * fRec0[4])) + (fConst385 * fRec0[5]))));
		fRec3[1] = fRec3[0];
		fVec0[1] = fVec0[0];
		fRec10[1] = fRec10[0];
		fRec9[2] = fRec9[1];
		fRec9[1] = fRec9[0];
		fRec8[2] = fRec8[1];
		fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec11[1] = fRec11[0];
		for (int j0 = 3; (j0 > 0); j0 = (j0 - 1)) {
			fRec5[j0] = fRec5[(j0 - 1)];
		}
		fRec12[1] = fRec12[0];
		fRec13[1] = fRec13[0];
		fRec14[1] = fRec14[0];
		for (int j1 = 5; (j1 > 0); j1 = (j1 - 1)) {
			fRec4[j1] = fRec4[(j1 - 1)];
		}
		fRec15[1] = fRec15[0];
		for (int j2 = 5; (j2 > 0); j2 = (j2 - 1)) {
			fRec2[j2] = fRec2[(j2 - 1)];
		}
		fRec24[1] = fRec24[0];
		fRec23[2] = fRec23[1];
		fRec23[1] = fRec23[0];
		fVec1[1] = fVec1[0];
		fRec22[1] = fRec22[0];
		fRec21[2] = fRec21[1];
		fRec21[1] = fRec21[0];
		fRec20[2] = fRec20[1];
		fRec20[1] = fRec20[0];
		fRec19[2] = fRec19[1];
		fRec19[1] = fRec19[0];
		for (int j3 = 3; (j3 > 0); j3 = (j3 - 1)) {
			fRec18[j3] = fRec18[(j3 - 1)];
		}
		for (int j4 = 5; (j4 > 0); j4 = (j4 - 1)) {
			fRec17[j4] = fRec17[(j4 - 1)];
		}
		for (int j5 = 5; (j5 > 0); j5 = (j5 - 1)) {
			fRec16[j5] = fRec16[(j5 - 1)];
		}
		fRec32[1] = fRec32[0];
		fRec31[2] = fRec31[1];
		fRec31[1] = fRec31[0];
		fVec2[1] = fVec2[0];
		fRec30[1] = fRec30[0];
		fRec29[2] = fRec29[1];
		fRec29[1] = fRec29[0];
		fRec28[2] = fRec28[1];
		fRec28[1] = fRec28[0];
		for (int j6 = 3; (j6 > 0); j6 = (j6 - 1)) {
			fRec27[j6] = fRec27[(j6 - 1)];
		}
		for (int j7 = 5; (j7 > 0); j7 = (j7 - 1)) {
			fRec26[j7] = fRec26[(j7 - 1)];
		}
		for (int j8 = 5; (j8 > 0); j8 = (j8 - 1)) {
			fRec25[j8] = fRec25[(j8 - 1)];
		}
		fRec39[1] = fRec39[0];
		fRec38[2] = fRec38[1];
		fRec38[1] = fRec38[0];
		fVec3[1] = fVec3[0];
		fRec37[1] = fRec37[0];
		fRec36[2] = fRec36[1];
		fRec36[1] = fRec36[0];
		for (int j9 = 3; (j9 > 0); j9 = (j9 - 1)) {
			fRec35[j9] = fRec35[(j9 - 1)];
		}
		for (int j10 = 5; (j10 > 0); j10 = (j10 - 1)) {
			fRec34[j10] = fRec34[(j10 - 1)];
		}
		for (int j11 = 5; (j11 > 0); j11 = (j11 - 1)) {
			fRec33[j11] = fRec33[(j11 - 1)];
		}
		fRec44[1] = fRec44[0];
		fRec43[2] = fRec43[1];
		fRec43[1] = fRec43[0];
		for (int j12 = 3; (j12 > 0); j12 = (j12 - 1)) {
			fRec42[j12] = fRec42[(j12 - 1)];
		}
		for (int j13 = 5; (j13 > 0); j13 = (j13 - 1)) {
			fRec41[j13] = fRec41[(j13 - 1)];
		}
		for (int j14 = 5; (j14 > 0); j14 = (j14 - 1)) {
			fRec40[j14] = fRec40[(j14 - 1)];
		}
		for (int j15 = 5; (j15 > 0); j15 = (j15 - 1)) {
			fRec1[j15] = fRec1[(j15 - 1)];
		}
		for (int j16 = 5; (j16 > 0); j16 = (j16 - 1)) {
			fRec0[j16] = fRec0[(j16 - 1)];
		}
	}
#undef fVslider0
#undef fVslider1
#undef fVslider2
#undef fVslider3
#undef fVslider4
#undef fVslider5
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BASS: 
		fVslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case MASTER: 
		fVslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case MID: 
		fVslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case PRESENSE: 
		fVslider5_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
		fVslider4_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fVslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BASS, 
   MASTER, 
   MID, 
   PRESENSE, 
   TREBLE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace plexi
