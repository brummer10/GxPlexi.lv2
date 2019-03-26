// generated from file '../dkbuild/plexi//plexi.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)

#include "math.h"
#include "plexipoweramp_neg_table.h"
#include "plexipoweramp_pre_neg_table.h"
#include "plexipoweramp_pre_table.h"
#include "plexipoweramp_table.h"
#include "plexipoweramptone_neg_table.h"
#include "plexipoweramptone_table.h"

namespace plexi {

class Dsp: public PluginLV2 {
private:
	gx_resample::FixedRateResampler smp;
	uint32_t samplingFreq;
	uint32_t fSamplingFreq;
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec2[2];
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec4[2];
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec5[2];
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec6[2];
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fConst159;
	double 	fConst160;
	double 	fConst161;
	double 	fConst162;
	double 	fConst163;
	double 	fConst164;
	double 	fConst165;
	double 	fConst166;
	double 	fConst167;
	double 	fConst168;
	double 	fConst169;
	double 	fConst170;
	double 	fConst171;
	double 	fConst172;
	double 	fConst173;
	double 	fConst174;
	double 	fConst175;
	double 	fConst176;
	double 	fConst177;
	double 	fConst178;
	double 	fConst179;
	double 	fConst180;
	double 	fConst181;
	double 	fConst182;
	double 	fConst183;
	double 	fConst184;
	double 	fConst185;
	double 	fConst186;
	double 	fConst187;
	double 	fConst188;
	double 	fConst189;
	double 	fConst190;
	double 	fConst191;
	double 	fConst192;
	double 	fConst193;
	double 	fConst194;
	double 	fConst195;
	double 	fConst196;
	double 	fConst197;
	double 	fConst198;
	double 	fConst199;
	double 	fConst200;
	double 	fConst201;
	double 	fConst202;
	double 	fConst203;
	double 	fConst204;
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	double 	fRec8[2];
	double 	fConst205;
	double 	fConst206;
	double 	fConst207;
	double 	fConst208;
	double 	fConst209;
	double 	fConst210;
	double 	fConst211;
	double 	fConst212;
	double 	fConst213;
	double 	fConst214;
	double 	fConst215;
	double 	fConst216;
	double 	fConst217;
	double 	fConst218;
	double 	fConst219;
	double 	fConst220;
	double 	fConst221;
	double 	fConst222;
	double 	fConst223;
	double 	fConst224;
	double 	fConst225;
	double 	fConst226;
	double 	fRec9[4];
	double 	fConst227;
	double 	fConst228;
	double 	fConst229;
	double 	fConst230;
	double 	fConst231;
	double 	fRec7[6];
	double 	fConst232;
	double 	fConst233;
	double 	fConst234;
	double 	fConst235;
	double 	fConst236;
	double 	fConst237;
	double 	fConst238;
	double 	fConst239;
	double 	fConst240;
	double 	fConst241;
	double 	fConst242;
	double 	fConst243;
	double 	fConst244;
	double 	fConst245;
	double 	fConst246;
	double 	fConst247;
	double 	fConst248;
	double 	fConst249;
	double 	fConst250;
	double 	fConst251;
	double 	fConst252;
	double 	fConst253;
	double 	fConst254;
	double 	fConst255;
	double 	fConst256;
	double 	fConst257;
	double 	fConst258;
	double 	fConst259;
	double 	fConst260;
	double 	fConst261;
	double 	fConst262;
	double 	fConst263;
	double 	fConst264;
	double 	fConst265;
	double 	fConst266;
	double 	fConst267;
	double 	fConst268;
	double 	fConst269;
	double 	fConst270;
	double 	fConst271;
	double 	fConst272;
	double 	fConst273;
	double 	fConst274;
	double 	fConst275;
	double 	fConst276;
	double 	fConst277;
	double 	fConst278;
	double 	fConst279;
	double 	fConst280;
	double 	fConst281;
	double 	fConst282;
	double 	fConst283;
	double 	fConst284;
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT	*fslider5_;
	double 	fRec10[2];
	double 	fRec3[6];
	double 	fConst285;
	double 	fConst286;
	double 	fConst287;
	double 	fConst288;
	double 	fConst289;
	double 	fConst290;
	double 	fConst291;
	double 	fConst292;
	double 	fConst293;
	double 	fConst294;
	double 	fConst295;
	double 	fConst296;
	double 	fConst297;
	double 	fConst298;
	double 	fConst299;
	double 	fConst300;
	double 	fConst301;
	double 	fConst302;
	double 	fConst303;
	double 	fConst304;
	double 	fConst305;
	double 	fRec1[6];
	double 	fConst306;
	double 	fConst307;
	double 	fConst308;
	double 	fConst309;
	double 	fConst310;
	double 	fConst311;
	double 	fConst312;
	double 	fConst313;
	double 	fConst314;
	double 	fConst315;
	double 	fRec0[6];
	double 	fConst316;
	double 	fConst317;
	double 	fConst318;

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
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<4; i++) fRec9[i] = 0;
	for (int i=0; i<6; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fRec10[i] = 0;
	for (int i=0; i<6; i++) fRec3[i] = 0;
	for (int i=0; i<6; i++) fRec1[i] = 0;
	for (int i=0; i<6; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t RsamplingFreq)
{
	samplingFreq = 2 * RsamplingFreq;
	smp.setup(RsamplingFreq, samplingFreq);
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (2.05029732339091e-24 * fConst0);
	fConst2 = (4.30312374784857e-08 + (fConst0 * ((fConst0 * (1.21185035126741e-11 + (fConst0 * ((fConst0 * (5.87849767541672e-20 - fConst1)) - 1.20685610628971e-15)))) - 8.6068533907021e-08)));
	fConst3 = (1.02514866169546e-23 * fConst0);
	fConst4 = (2.15156187392428e-07 + (fConst0 * ((fConst0 * (1.21185035126741e-11 + (fConst0 * (1.20685610628971e-15 + (fConst0 * (fConst3 - 1.76354930262502e-19)))))) - 2.58205601721063e-07)));
	fConst5 = (2.05029732339091e-23 * fConst0);
	fConst6 = (4.30312374784857e-07 + (fConst0 * ((fConst0 * ((fConst0 * (2.41371221257942e-15 + (fConst0 * (1.17569953508334e-19 - fConst5)))) - 2.42370070253482e-11)) - 1.72137067814042e-07)));
	fConst7 = (4.30312374784857e-07 + (fConst0 * (1.72137067814042e-07 + (fConst0 * ((fConst0 * ((fConst0 * (1.17569953508334e-19 + fConst5)) - 2.41371221257942e-15)) - 2.42370070253482e-11)))));
	fConst8 = (2.15156187392428e-07 + (fConst0 * (2.58205601721063e-07 + (fConst0 * (1.21185035126741e-11 + (fConst0 * ((fConst0 * (0 - (1.76354930262502e-19 + fConst3))) - 1.20685610628971e-15)))))));
	fConst9 = (1.0 / (4.30312374784857e-08 + (fConst0 * (8.6068533907021e-08 + (fConst0 * (1.21185035126741e-11 + (fConst0 * (1.20685610628971e-15 + (fConst0 * (5.87849767541672e-20 + fConst1))))))))));
	fConst10 = (2.92233252024476e-24 * fConst0);
	fConst11 = (1.39026436464115e-08 + (fConst0 * ((fConst0 * (1.64983504337994e-13 + (fConst0 * ((fConst0 * (4.442247247582e-20 - fConst10)) - 1.73429527725774e-16)))) - 1.05419773032574e-10)));
	fConst12 = (1.46116626012238e-23 * fConst0);
	fConst13 = (6.95132182320574e-08 + (fConst0 * ((fConst0 * (1.64983504337994e-13 + (fConst0 * (1.73429527725774e-16 + (fConst0 * (fConst12 - 1.3326741742746e-19)))))) - 3.16259319097723e-10)));
	fConst14 = (2.92233252024476e-23 * fConst0);
	fConst15 = (1.39026436464115e-07 + (fConst0 * ((fConst0 * ((fConst0 * (3.46859055451547e-16 + (fConst0 * (8.884494495164e-20 - fConst14)))) - 3.29967008675989e-13)) - 2.10839546065149e-10)));
	fConst16 = (1.39026436464115e-07 + (fConst0 * (2.10839546065149e-10 + (fConst0 * ((fConst0 * ((fConst0 * (8.884494495164e-20 + fConst14)) - 3.46859055451547e-16)) - 3.29967008675989e-13)))));
	fConst17 = (6.95132182320574e-08 + (fConst0 * (3.16259319097723e-10 + (fConst0 * (1.64983504337994e-13 + (fConst0 * ((fConst0 * (0 - (1.3326741742746e-19 + fConst12))) - 1.73429527725774e-16)))))));
	fConst18 = (1.39026436464115e-08 + (fConst0 * (1.05419773032574e-10 + (fConst0 * (1.64983504337994e-13 + (fConst0 * (1.73429527725774e-16 + (fConst0 * (4.442247247582e-20 + fConst10)))))))));
	fConst19 = (1.0 / fConst18);
	fConst20 = (8.60995185091346e-24 * fConst0);
	fConst21 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.10853855898189e-20 + fConst20))) - 2.32580925010789e-18)) - 1.35252203100558e-16)) - 1.14107022001133e-16);
	fConst22 = (1.15287202864694e-23 * fConst0);
	fConst23 = (1.16387813873793e-16 + (fConst0 * (1.37991531166445e-16 + (fConst0 * (2.41360758290699e-18 + (fConst0 * (1.1978459678459e-20 + fConst22)))))));
	fConst24 = (1.15287202864694e-20 * fConst0);
	fConst25 = (1.37991531166445e-13 + (fConst0 * (2.41360758290699e-15 + (fConst0 * (1.1978459678459e-17 + fConst24)))));
	fConst26 = (2.3334608448669e-23 * fConst0);
	fConst27 = ((fConst0 * (1.8478317276844e-22 + (fConst0 * (fConst26 - 2.91538144925964e-21)))) - 1.62773154056433e-22);
	fConst28 = (2.38012186177351e-23 * fConst0);
	fConst29 = (1.62773154056433e-22 + (fConst0 * ((fConst0 * (2.97367316646687e-21 - fConst28)) - 1.87744471107996e-22)));
	fConst30 = (2.38012186177351e-20 * fConst0);
	fConst31 = (1.87744471107996e-19 + (fConst0 * (fConst30 - 2.97367316646687e-18)));
	fConst32 = (1.14107022001133e-16 + (fConst0 * ((fConst0 * (2.32580925010789e-18 + (fConst0 * (fConst20 - 1.10853855898189e-20)))) - 1.35252203100558e-16)));
	fConst33 = ((fConst0 * (1.37991531166445e-16 + (fConst0 * ((fConst0 * (1.1978459678459e-20 - fConst22)) - 2.41360758290699e-18)))) - 1.16387813873793e-16);
	fConst34 = ((fConst0 * (2.41360758290699e-15 + (fConst0 * (fConst24 - 1.1978459678459e-17)))) - 1.37991531166445e-13);
	fConst35 = (4.30497592545673e-23 * fConst0);
	fConst36 = (3.42321066003398e-16 + (fConst0 * ((fConst0 * ((fConst0 * (3.32561567694566e-20 - fConst35)) - 2.32580925010789e-18)) - 1.35252203100558e-16)));
	fConst37 = (5.76436014323472e-23 * fConst0);
	fConst38 = ((fConst0 * (1.37991531166445e-16 + (fConst0 * (2.41360758290699e-18 + (fConst0 * (fConst37 - 3.59353790353771e-20)))))) - 3.4916344162138e-16);
	fConst39 = (3.45861608594083e-20 * fConst0);
	fConst40 = ((fConst0 * (2.41360758290699e-15 + (fConst0 * (1.1978459678459e-17 - fConst39)))) - 4.13974593499336e-13);
	fConst41 = (8.60995185091346e-23 * fConst0);
	fConst42 = (2.28214044002265e-16 + (fConst0 * (2.70504406201115e-16 + (fConst0 * ((fConst0 * (fConst41 - 2.21707711796377e-20)) - 4.65161850021578e-18)))));
	fConst43 = (1.15287202864694e-22 * fConst0);
	fConst44 = ((fConst0 * ((fConst0 * (4.82721516581398e-18 + (fConst0 * (2.39569193569181e-20 - fConst43)))) - 2.75983062332891e-16)) - 2.32775627747587e-16);
	fConst45 = (2.30574405729389e-20 * fConst0);
	fConst46 = ((fConst0 * ((fConst0 * (2.3956919356918e-17 + fConst45)) - 4.82721516581398e-15)) - 2.75983062332891e-13);
	fConst47 = ((fConst0 * (2.70504406201115e-16 + (fConst0 * (4.65161850021578e-18 + (fConst0 * (0 - (2.21707711796377e-20 + fConst41))))))) - 2.28214044002265e-16);
	fConst48 = (2.32775627747587e-16 + (fConst0 * ((fConst0 * ((fConst0 * (2.39569193569181e-20 + fConst43)) - 4.82721516581398e-18)) - 2.75983062332891e-16)));
	fConst49 = (2.75983062332891e-13 + (fConst0 * ((fConst0 * (fConst45 - 2.3956919356918e-17)) - 4.82721516581398e-15)));
	fConst50 = ((fConst0 * ((fConst0 * (2.32580925010789e-18 + (fConst0 * (3.32561567694566e-20 + fConst35)))) - 1.35252203100558e-16)) - 3.42321066003398e-16);
	fConst51 = (3.4916344162138e-16 + (fConst0 * (1.37991531166445e-16 + (fConst0 * ((fConst0 * (0 - (3.59353790353771e-20 + fConst37))) - 2.41360758290699e-18)))));
	fConst52 = (4.13974593499336e-13 + (fConst0 * (2.41360758290699e-15 + (fConst0 * (0 - (1.1978459678459e-17 + fConst39))))));
	fConst53 = (5.71140063390745e-26 * fConst0);
	fConst54 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.19079933314305e-21 + fConst53))) - 9.85847513830281e-18)) - 9.73407549228048e-15)) - 2.05023501468858e-13);
	fConst55 = (6.28835457480362e-27 * fConst0);
	fConst56 = (8.41416450028194e-12 + (fConst0 * (6.2748567015164e-15 + (fConst0 * ((fConst0 * (0 - (2.19721429047455e-22 + fConst55))) - 1.5631404324923e-19)))));
	fConst57 = (6.83143980141387e-26 * fConst0);
	fConst58 = (3.8944520824993e-11 + (fConst0 * (4.60837020243462e-14 + (fConst0 * (1.96263476557925e-17 + (fConst0 * (2.82550700450066e-21 + fConst57)))))));
	fConst59 = (2.28456025356298e-24 * fConst0);
	fConst60 = (8.20094005875433e-12 + (fConst0 * (3.89363019691219e-13 + (fConst0 * (3.94339005532112e-16 + (fConst0 * (8.76319733257222e-20 + fConst59)))))));
	fConst61 = (2.62747684669764e-24 * fConst0);
	fConst62 = (3.64948853049297e-10 + (fConst0 * (8.63729385824201e-13 + (fConst0 * (5.75493421557123e-16 + (fConst0 * (1.04079855336218e-19 + fConst61)))))));
	fConst63 = (1.2250846579039e-26 * fConst0);
	fConst64 = (5.6381462903936e-19 + (fConst0 * (4.25275991505813e-22 + fConst63)));
	fConst65 = (3.65162644807511e-27 * fConst0);
	fConst66 = ((fConst0 * (1.15644079415944e-22 + fConst65)) - 2.17936835495489e-19);
	fConst67 = (4.90033863161559e-25 * fConst0);
	fConst68 = ((fConst0 * (0 - (1.70110396602325e-20 + fConst67))) - 2.25525851615744e-17);
	fConst69 = (6.55700275611026e-25 * fConst0);
	fConst70 = ((fConst0 * (0 - (2.32082150835733e-20 + fConst69))) - 4.56663781668224e-17);
	fConst71 = (1.70482071658867e-26 * fConst0);
	fConst72 = ((fConst0 * ((fConst0 * (0 - (6.33218150155226e-22 + fConst71))) - 2.23212003317829e-18)) - 2.25733780437227e-15);
	fConst73 = (1.06337348306058e-26 * fConst0);
	fConst74 = ((fConst0 * ((fConst0 * (0 - (4.17029233617835e-22 + fConst73))) - 2.15183361025616e-18)) - 2.20400264079023e-15);
	fConst75 = (5.36264606803021e-27 * fConst0);
	fConst76 = (1.33198267673638e-15 + (fConst0 * ((fConst0 * (0 - (1.90787528297247e-22 + fConst75))) - 3.62974376641359e-19)));
	fConst77 = (4.25349393224233e-25 * fConst0);
	fConst78 = (8.8160105631609e-14 + (fConst0 * (8.60733444102465e-17 + (fConst0 * (1.66811693447134e-20 + fConst77)))));
	fConst79 = (6.56869211674411e-25 * fConst0);
	fConst80 = (1.9631006367053e-13 + (fConst0 * (1.34405150727257e-16 + (fConst0 * (2.57532797835268e-20 + fConst79)))));
	fConst81 = (1.70785995035347e-26 * fConst0);
	fConst82 = (9.44774697635675e-12 + (fConst0 * (1.1010746153663e-14 + (fConst0 * (4.66041359273551e-18 + (fConst0 * (6.99442965811442e-22 + fConst81)))))));
	fConst83 = (1.37906949166034e-19 * fConst0);
	fConst84 = (fConst83 - 1.23661181102973e-16);
	fConst85 = (5.51627796664135e-18 * fConst0);
	fConst86 = (4.9464472441189e-15 - fConst85);
	fConst87 = (1.43423227132675e-19 * fConst0);
	fConst88 = ((fConst0 * (3.79347535921698e-16 - fConst87)) - 3.11181454475999e-13);
	fConst89 = (1.18265656406023e-19 * fConst0);
	fConst90 = (3.83247462095989e-13 + (fConst0 * (fConst89 - 5.33446400796538e-16)));
	fConst91 = (1.22996282662264e-19 * fConst0);
	fConst92 = ((fConst0 * (6.49761494546054e-16 - fConst91)) - 8.63652414138443e-13);
	fConst93 = (4.73062625624092e-18 * fConst0);
	fConst94 = ((fConst0 * (2.13378560318615e-14 - fConst93)) - 1.53298984838396e-11);
	fConst95 = (4.80204913900459e-15 * fConst0);
	fConst96 = (fConst95 - 1.98477279602486e-11);
	fConst97 = (1.24853277614119e-16 * fConst0);
	fConst98 = (fConst0 * (fConst97 - 5.16040926966463e-13));
	fConst99 = (3.62343055072572e-10 + fConst98);
	fConst100 = (2.05023501468858e-13 + (fConst0 * ((fConst0 * (9.85847513830281e-18 + (fConst0 * (fConst53 - 2.19079933314305e-21)))) - 9.73407549228048e-15)));
	fConst101 = ((fConst0 * (6.2748567015164e-15 + (fConst0 * (1.5631404324923e-19 + (fConst0 * (fConst55 - 2.19721429047455e-22)))))) - 8.41416450028194e-12);
	fConst102 = ((fConst0 * (4.60837020243462e-14 + (fConst0 * ((fConst0 * (2.82550700450066e-21 - fConst57)) - 1.96263476557925e-17)))) - 3.8944520824993e-11);
	fConst103 = ((fConst0 * (3.89363019691219e-13 + (fConst0 * ((fConst0 * (8.76319733257222e-20 - fConst59)) - 3.94339005532112e-16)))) - 8.20094005875433e-12);
	fConst104 = ((fConst0 * (8.63729385824201e-13 + (fConst0 * ((fConst0 * (1.04079855336218e-19 - fConst61)) - 5.75493421557123e-16)))) - 3.64948853049297e-10);
	fConst105 = ((fConst0 * (4.25275991505813e-22 - fConst63)) - 5.6381462903936e-19);
	fConst106 = (2.17936835495489e-19 + (fConst0 * (1.15644079415944e-22 - fConst65)));
	fConst107 = (2.25525851615744e-17 + (fConst0 * (fConst67 - 1.70110396602325e-20)));
	fConst108 = (4.56663781668224e-17 + (fConst0 * (fConst69 - 2.32082150835733e-20)));
	fConst109 = ((fConst0 * (2.23212003317829e-18 + (fConst0 * (fConst71 - 6.33218150155226e-22)))) - 2.25733780437227e-15);
	fConst110 = ((fConst0 * (2.15183361025616e-18 + (fConst0 * (fConst73 - 4.17029233617835e-22)))) - 2.20400264079023e-15);
	fConst111 = (1.33198267673638e-15 + (fConst0 * (3.62974376641359e-19 + (fConst0 * (fConst75 - 1.90787528297247e-22)))));
	fConst112 = (8.8160105631609e-14 + (fConst0 * ((fConst0 * (1.66811693447134e-20 - fConst77)) - 8.60733444102465e-17)));
	fConst113 = (1.9631006367053e-13 + (fConst0 * ((fConst0 * (2.57532797835268e-20 - fConst79)) - 1.34405150727257e-16)));
	fConst114 = ((fConst0 * (1.1010746153663e-14 + (fConst0 * ((fConst0 * (6.99442965811442e-22 - fConst81)) - 4.66041359273551e-18)))) - 9.44774697635675e-12);
	fConst115 = (2.85570031695372e-25 * fConst0);
	fConst116 = (6.15070504406575e-13 + (fConst0 * ((fConst0 * ((fConst0 * (6.57239799942916e-21 - fConst115)) - 9.85847513830281e-18)) - 9.73407549228048e-15)));
	fConst117 = (3.14417728740181e-26 * fConst0);
	fConst118 = ((fConst0 * (6.2748567015164e-15 + (fConst0 * ((fConst0 * (6.59164287142364e-22 - fConst117)) - 1.5631404324923e-19)))) - 2.52424935008458e-11);
	fConst119 = (3.41571990070694e-25 * fConst0);
	fConst120 = ((fConst0 * (4.60837020243462e-14 + (fConst0 * (1.96263476557925e-17 + (fConst0 * (fConst119 - 8.47652101350198e-21)))))) - 1.16833562474979e-10);
	fConst121 = (1.14228012678149e-23 * fConst0);
	fConst122 = ((fConst0 * (3.89363019691219e-13 + (fConst0 * (3.94339005532112e-16 + (fConst0 * (fConst121 - 2.62895919977167e-19)))))) - 2.4602820176263e-11);
	fConst123 = (1.31373842334882e-23 * fConst0);
	fConst124 = ((fConst0 * (8.63729385824201e-13 + (fConst0 * (5.75493421557123e-16 + (fConst0 * (fConst123 - 3.12239566008655e-19)))))) - 1.09484655914789e-09);
	fConst125 = (6.12542328951948e-26 * fConst0);
	fConst126 = (5.6381462903936e-19 + (fConst0 * (fConst125 - 1.27582797451744e-21)));
	fConst127 = (1.82581322403755e-26 * fConst0);
	fConst128 = ((fConst0 * (fConst127 - 3.46932238247832e-22)) - 2.17936835495489e-19);
	fConst129 = (2.45016931580779e-24 * fConst0);
	fConst130 = ((fConst0 * (5.10331189806976e-20 - fConst129)) - 2.25525851615744e-17);
	fConst131 = (3.27850137805513e-24 * fConst0);
	fConst132 = ((fConst0 * (6.962464525072e-20 - fConst131)) - 4.56663781668224e-17);
	fConst133 = (8.52410358294333e-26 * fConst0);
	fConst134 = ((fConst0 * ((fConst0 * (1.89965445046568e-21 - fConst133)) - 2.23212003317829e-18)) - 2.25733780437227e-15);
	fConst135 = (5.31686741530291e-26 * fConst0);
	fConst136 = ((fConst0 * ((fConst0 * (1.2510877008535e-21 - fConst135)) - 2.15183361025616e-18)) - 2.20400264079023e-15);
	fConst137 = (2.68132303401511e-26 * fConst0);
	fConst138 = (1.33198267673638e-15 + (fConst0 * ((fConst0 * (5.72362584891742e-22 - fConst137)) - 3.62974376641359e-19)));
	fConst139 = (2.12674696612117e-24 * fConst0);
	fConst140 = (8.8160105631609e-14 + (fConst0 * (8.60733444102465e-17 + (fConst0 * (fConst139 - 5.00435080341401e-20)))));
	fConst141 = (3.28434605837205e-24 * fConst0);
	fConst142 = (1.9631006367053e-13 + (fConst0 * (1.34405150727257e-16 + (fConst0 * (fConst141 - 7.72598393505803e-20)))));
	fConst143 = (8.53929975176734e-26 * fConst0);
	fConst144 = ((fConst0 * (1.1010746153663e-14 + (fConst0 * (4.66041359273551e-18 + (fConst0 * (fConst143 - 2.09832889743433e-21)))))) - 2.83432409290702e-11);
	fConst145 = (5.71140063390745e-25 * fConst0);
	fConst146 = (4.10047002937716e-13 + (fConst0 * (1.9468150984561e-14 + (fConst0 * ((fConst0 * (fConst145 - 4.38159866628611e-21)) - 1.97169502766056e-17)))));
	fConst147 = (6.28835457480362e-26 * fConst0);
	fConst148 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst147 - 4.39442858094909e-22)) - 3.12628086498461e-19)) - 1.25497134030328e-14)) - 1.68283290005639e-11);
	fConst149 = (6.83143980141387e-25 * fConst0);
	fConst150 = ((fConst0 * ((fConst0 * (3.92526953115849e-17 + (fConst0 * (5.65101400900132e-21 - fConst149)))) - 9.21674040486925e-14)) - 7.78890416499859e-11);
	fConst151 = (2.28456025356298e-23 * fConst0);
	fConst152 = ((fConst0 * ((fConst0 * (7.88678011064225e-16 + (fConst0 * (1.75263946651444e-19 - fConst151)))) - 7.78726039382438e-13)) - 1.64018801175087e-11);
	fConst153 = (2.62747684669764e-23 * fConst0);
	fConst154 = ((fConst0 * ((fConst0 * (1.15098684311425e-15 + (fConst0 * (2.08159710672437e-19 - fConst153)))) - 1.7274587716484e-12)) - 7.29897706098595e-10);
	fConst155 = (1.2250846579039e-25 * fConst0);
	fConst156 = (1.12762925807872e-18 + (fConst0 * (8.50551983011626e-22 - fConst155)));
	fConst157 = (3.65162644807511e-26 * fConst0);
	fConst158 = ((fConst0 * (2.31288158831888e-22 - fConst157)) - 4.35873670990977e-19);
	fConst159 = (4.90033863161559e-24 * fConst0);
	fConst160 = ((fConst0 * (fConst159 - 3.40220793204651e-20)) - 4.51051703231488e-17);
	fConst161 = (6.55700275611025e-24 * fConst0);
	fConst162 = ((fConst0 * (fConst161 - 4.64164301671467e-20)) - 9.13327563336449e-17);
	fConst163 = (1.70482071658867e-25 * fConst0);
	fConst164 = (4.51467560874454e-15 + (fConst0 * ((fConst0 * (fConst163 - 1.26643630031045e-21)) - 4.46424006635657e-18)));
	fConst165 = (1.06337348306058e-25 * fConst0);
	fConst166 = (4.40800528158045e-15 + (fConst0 * ((fConst0 * (fConst165 - 8.34058467235669e-22)) - 4.30366722051232e-18)));
	fConst167 = (5.36264606803021e-26 * fConst0);
	fConst168 = ((fConst0 * ((fConst0 * (fConst167 - 3.81575056594495e-22)) - 7.25948753282719e-19)) - 2.66396535347277e-15);
	fConst169 = (4.25349393224233e-24 * fConst0);
	fConst170 = ((fConst0 * (1.72146688820493e-16 + (fConst0 * (3.33623386894268e-20 - fConst169)))) - 1.76320211263218e-13);
	fConst171 = (6.56869211674411e-24 * fConst0);
	fConst172 = ((fConst0 * (2.68810301454515e-16 + (fConst0 * (5.15065595670536e-20 - fConst171)))) - 3.9262012734106e-13);
	fConst173 = (1.70785995035347e-25 * fConst0);
	fConst174 = ((fConst0 * ((fConst0 * (9.32082718547102e-18 + (fConst0 * (1.39888593162288e-21 - fConst173)))) - 2.20214923073261e-14)) - 1.88954939527135e-11);
	fConst175 = ((fConst0 * (1.9468150984561e-14 + (fConst0 * (1.97169502766056e-17 + (fConst0 * (0 - (4.38159866628611e-21 + fConst145))))))) - 4.10047002937716e-13);
	fConst176 = (1.68283290005639e-11 + (fConst0 * ((fConst0 * (3.12628086498461e-19 + (fConst0 * (0 - (4.39442858094909e-22 + fConst147))))) - 1.25497134030328e-14)));
	fConst177 = (7.78890416499859e-11 + (fConst0 * ((fConst0 * ((fConst0 * (5.65101400900132e-21 + fConst149)) - 3.92526953115849e-17)) - 9.21674040486925e-14)));
	fConst178 = (1.64018801175087e-11 + (fConst0 * ((fConst0 * ((fConst0 * (1.75263946651444e-19 + fConst151)) - 7.88678011064225e-16)) - 7.78726039382438e-13)));
	fConst179 = (7.29897706098595e-10 + (fConst0 * ((fConst0 * ((fConst0 * (2.08159710672437e-19 + fConst153)) - 1.15098684311425e-15)) - 1.7274587716484e-12)));
	fConst180 = ((fConst0 * (8.50551983011626e-22 + fConst155)) - 1.12762925807872e-18);
	fConst181 = (4.35873670990977e-19 + (fConst0 * (2.31288158831888e-22 + fConst157)));
	fConst182 = (4.51051703231488e-17 + (fConst0 * (0 - (3.40220793204651e-20 + fConst159))));
	fConst183 = (9.13327563336449e-17 + (fConst0 * (0 - (4.64164301671467e-20 + fConst161))));
	fConst184 = (4.51467560874454e-15 + (fConst0 * (4.46424006635657e-18 + (fConst0 * (0 - (1.26643630031045e-21 + fConst163))))));
	fConst185 = (4.40800528158045e-15 + (fConst0 * (4.30366722051232e-18 + (fConst0 * (0 - (8.34058467235669e-22 + fConst165))))));
	fConst186 = ((fConst0 * (7.25948753282719e-19 + (fConst0 * (0 - (3.81575056594495e-22 + fConst167))))) - 2.66396535347277e-15);
	fConst187 = ((fConst0 * ((fConst0 * (3.33623386894268e-20 + fConst169)) - 1.72146688820493e-16)) - 1.76320211263218e-13);
	fConst188 = ((fConst0 * ((fConst0 * (5.15065595670536e-20 + fConst171)) - 2.68810301454515e-16)) - 3.9262012734106e-13);
	fConst189 = (1.88954939527135e-11 + (fConst0 * ((fConst0 * ((fConst0 * (1.39888593162288e-21 + fConst173)) - 9.32082718547102e-18)) - 2.20214923073261e-14)));
	fConst190 = ((fConst0 * ((fConst0 * (9.85847513830281e-18 + (fConst0 * (6.57239799942916e-21 + fConst115)))) - 9.73407549228048e-15)) - 6.15070504406575e-13);
	fConst191 = (2.52424935008458e-11 + (fConst0 * (6.2748567015164e-15 + (fConst0 * (1.5631404324923e-19 + (fConst0 * (6.59164287142364e-22 + fConst117)))))));
	fConst192 = (1.16833562474979e-10 + (fConst0 * (4.60837020243462e-14 + (fConst0 * ((fConst0 * (0 - (8.47652101350198e-21 + fConst119))) - 1.96263476557925e-17)))));
	fConst193 = (2.4602820176263e-11 + (fConst0 * (3.89363019691219e-13 + (fConst0 * ((fConst0 * (0 - (2.62895919977167e-19 + fConst121))) - 3.94339005532112e-16)))));
	fConst194 = (1.09484655914789e-09 + (fConst0 * (8.63729385824201e-13 + (fConst0 * ((fConst0 * (0 - (3.12239566008655e-19 + fConst123))) - 5.75493421557123e-16)))));
	fConst195 = ((fConst0 * (0 - (1.27582797451744e-21 + fConst125))) - 5.6381462903936e-19);
	fConst196 = (2.17936835495489e-19 + (fConst0 * (0 - (3.46932238247832e-22 + fConst127))));
	fConst197 = (2.25525851615744e-17 + (fConst0 * (5.10331189806976e-20 + fConst129)));
	fConst198 = (4.56663781668224e-17 + (fConst0 * (6.962464525072e-20 + fConst131)));
	fConst199 = ((fConst0 * (2.23212003317829e-18 + (fConst0 * (1.89965445046568e-21 + fConst133)))) - 2.25733780437227e-15);
	fConst200 = ((fConst0 * (2.15183361025616e-18 + (fConst0 * (1.2510877008535e-21 + fConst135)))) - 2.20400264079023e-15);
	fConst201 = (1.33198267673638e-15 + (fConst0 * (3.62974376641359e-19 + (fConst0 * (5.72362584891742e-22 + fConst137)))));
	fConst202 = (8.8160105631609e-14 + (fConst0 * ((fConst0 * (0 - (5.00435080341401e-20 + fConst139))) - 8.60733444102465e-17)));
	fConst203 = (1.9631006367053e-13 + (fConst0 * ((fConst0 * (0 - (7.72598393505803e-20 + fConst141))) - 1.34405150727257e-16)));
	fConst204 = (2.83432409290702e-11 + (fConst0 * (1.1010746153663e-14 + (fConst0 * ((fConst0 * (0 - (2.09832889743433e-21 + fConst143))) - 4.66041359273551e-18)))));
	fConst205 = (1.93311418264457e-29 * fConst0);
	fConst206 = (2.74247623683688e-23 + (fConst0 * (6.45290669402119e-25 + fConst205)));
	fConst207 = (2.43107147356825e-29 * fConst0);
	fConst208 = ((fConst0 * (0 - (8.11971910844529e-25 + fConst207))) - 4.97994757198574e-23);
	fConst209 = (5.32933796343052e-15 * fConst0);
	fConst210 = (1.31411465953292e-07 + (fConst0 * (1.07885862738881e-08 + (fConst0 * (1.77994736282848e-10 + fConst209)))));
	fConst211 = (8.7780444052674e-09 * fConst0);
	fConst212 = (2.4329391367149e-07 + fConst211);
	fConst213 = (2.19451110131685e-10 * fConst0);
	fConst214 = (6.08234784178726e-09 + fConst213);
	fConst215 = ((fConst0 * (6.45290669402119e-25 - fConst205)) - 2.74247623683688e-23);
	fConst216 = (4.97994757198574e-23 + (fConst0 * (fConst207 - 8.11971910844529e-25)));
	fConst217 = (1.31411465953292e-07 + (fConst0 * ((fConst0 * (1.77994736282848e-10 - fConst209)) - 1.07885862738881e-08)));
	fConst218 = (5.79934254793371e-29 * fConst0);
	fConst219 = ((fConst0 * (fConst218 - 6.45290669402119e-25)) - 2.74247623683688e-23);
	fConst220 = (7.29321442070476e-29 * fConst0);
	fConst221 = (4.97994757198574e-23 + (fConst0 * (8.11971910844529e-25 - fConst220)));
	fConst222 = (1.59880138902915e-14 * fConst0);
	fConst223 = (3.94234397859877e-07 + (fConst0 * ((fConst0 * (fConst222 - 1.77994736282848e-10)) - 1.07885862738881e-08)));
	fConst224 = (2.74247623683688e-23 + (fConst0 * (0 - (6.45290669402119e-25 + fConst218))));
	fConst225 = ((fConst0 * (8.11971910844529e-25 + fConst220)) - 4.97994757198574e-23);
	fConst226 = (3.94234397859877e-07 + (fConst0 * (1.07885862738881e-08 + (fConst0 * (0 - (1.77994736282848e-10 + fConst222))))));
	fConst227 = (fConst211 - 2.4329391367149e-07);
	fConst228 = (fConst213 - 6.08234784178726e-09);
	fConst229 = (2.4329391367149e-07 - fConst211);
	fConst230 = (6.08234784178726e-09 - fConst213);
	fConst231 = (0 - fConst212);
	fConst232 = (4.13720847498101e-19 * fConst0);
	fConst233 = (1.23661181102973e-16 - fConst232);
	fConst234 = (1.65488338999241e-17 * fConst0);
	fConst235 = (fConst234 - 4.9464472441189e-15);
	fConst236 = (4.30269681398026e-19 * fConst0);
	fConst237 = ((fConst0 * (fConst236 - 3.79347535921698e-16)) - 3.11181454475999e-13);
	fConst238 = (3.54796969218069e-19 * fConst0);
	fConst239 = (3.83247462095989e-13 + (fConst0 * (5.33446400796538e-16 - fConst238)));
	fConst240 = (3.68988847986792e-19 * fConst0);
	fConst241 = ((fConst0 * (fConst240 - 6.49761494546054e-16)) - 8.63652414138443e-13);
	fConst242 = (1.41918787687228e-17 * fConst0);
	fConst243 = ((fConst0 * (fConst242 - 2.13378560318615e-14)) - 1.53298984838396e-11);
	fConst244 = (0 - (1.98477279602486e-11 + fConst95));
	fConst245 = (fConst0 * (0 - (5.16040926966463e-13 + fConst97)));
	fConst246 = (1.08702916521772e-09 + fConst245);
	fConst247 = (2.75813898332068e-19 * fConst0);
	fConst248 = (2.47322362205945e-16 + fConst247);
	fConst249 = (1.10325559332827e-17 * fConst0);
	fConst250 = (0 - (9.89289448823781e-15 + fConst249));
	fConst251 = (2.8684645426535e-19 * fConst0);
	fConst252 = (6.22362908951999e-13 + (fConst0 * (0 - (7.58695071843397e-16 + fConst251))));
	fConst253 = (2.36531312812046e-19 * fConst0);
	fConst254 = ((fConst0 * (1.06689280159308e-15 + fConst253)) - 7.66494924191979e-13);
	fConst255 = (2.45992565324528e-19 * fConst0);
	fConst256 = (1.72730482827689e-12 + (fConst0 * (0 - (1.29952298909211e-15 + fConst255))));
	fConst257 = (9.46125251248183e-18 * fConst0);
	fConst258 = (3.06597969676792e-11 + (fConst0 * (0 - (4.26757120637231e-14 + fConst257))));
	fConst259 = (9.60409827800919e-15 * fConst0);
	fConst260 = (3.96954559204971e-11 - fConst259);
	fConst261 = (2.49706555228239e-16 * fConst0);
	fConst262 = (7.24686110145144e-10 + (fConst0 * (1.03208185393293e-12 - fConst261)));
	fConst263 = (fConst247 - 2.47322362205945e-16);
	fConst264 = (9.89289448823781e-15 - fConst249);
	fConst265 = (6.22362908951999e-13 + (fConst0 * (7.58695071843397e-16 - fConst251)));
	fConst266 = ((fConst0 * (fConst253 - 1.06689280159308e-15)) - 7.66494924191979e-13);
	fConst267 = (1.72730482827689e-12 + (fConst0 * (1.29952298909211e-15 - fConst255)));
	fConst268 = (3.06597969676792e-11 + (fConst0 * (4.26757120637231e-14 - fConst257)));
	fConst269 = (3.96954559204971e-11 + fConst259);
	fConst270 = ((fConst0 * (1.03208185393293e-12 + fConst261)) - 7.24686110145144e-10);
	fConst271 = (0 - (1.23661181102973e-16 + fConst232));
	fConst272 = (4.9464472441189e-15 + fConst234);
	fConst273 = ((fConst0 * (3.79347535921698e-16 + fConst236)) - 3.11181454475999e-13);
	fConst274 = (3.83247462095989e-13 + (fConst0 * (0 - (5.33446400796538e-16 + fConst238))));
	fConst275 = ((fConst0 * (6.49761494546054e-16 + fConst240)) - 8.63652414138443e-13);
	fConst276 = ((fConst0 * (2.13378560318615e-14 + fConst242)) - 1.53298984838396e-11);
	fConst277 = (fConst98 - 1.08702916521772e-09);
	fConst278 = (1.23661181102973e-16 + fConst83);
	fConst279 = (0 - (4.9464472441189e-15 + fConst85));
	fConst280 = ((fConst0 * (0 - (3.79347535921698e-16 + fConst87))) - 3.11181454475999e-13);
	fConst281 = (3.83247462095989e-13 + (fConst0 * (5.33446400796538e-16 + fConst89)));
	fConst282 = ((fConst0 * (0 - (6.49761494546054e-16 + fConst91))) - 8.63652414138443e-13);
	fConst283 = ((fConst0 * (0 - (2.13378560318615e-14 + fConst93))) - 1.53298984838396e-11);
	fConst284 = (fConst245 - 3.62343055072572e-10);
	fConst285 = (1.16673042243345e-22 * fConst0);
	fConst286 = ((fConst0 * ((fConst0 * (8.74614434777892e-21 - fConst285)) - 1.8478317276844e-22)) - 1.62773154056433e-22);
	fConst287 = (1.19006093088676e-22 * fConst0);
	fConst288 = (1.62773154056433e-22 + (fConst0 * (1.87744471107996e-22 + (fConst0 * (fConst287 - 8.9210194994006e-21)))));
	fConst289 = (7.14036558532053e-20 * fConst0);
	fConst290 = (1.87744471107996e-19 + (fConst0 * (2.97367316646687e-18 - fConst289)));
	fConst291 = (2.3334608448669e-22 * fConst0);
	fConst292 = (3.25546308112866e-22 + (fConst0 * ((fConst0 * (fConst291 - 5.83076289851928e-21)) - 3.69566345536879e-22)));
	fConst293 = (2.38012186177351e-22 * fConst0);
	fConst294 = ((fConst0 * (3.75488942215992e-22 + (fConst0 * (5.94734633293373e-21 - fConst293)))) - 3.25546308112866e-22);
	fConst295 = (4.76024372354702e-20 * fConst0);
	fConst296 = ((fConst0 * (5.94734633293373e-18 + fConst295)) - 3.75488942215992e-19);
	fConst297 = (3.25546308112866e-22 + (fConst0 * (3.69566345536879e-22 + (fConst0 * (0 - (5.83076289851928e-21 + fConst291))))));
	fConst298 = ((fConst0 * ((fConst0 * (5.94734633293373e-21 + fConst293)) - 3.75488942215992e-22)) - 3.25546308112866e-22);
	fConst299 = ((fConst0 * (fConst295 - 5.94734633293373e-18)) - 3.75488942215992e-19);
	fConst300 = ((fConst0 * (1.8478317276844e-22 + (fConst0 * (8.74614434777892e-21 + fConst285)))) - 1.62773154056433e-22);
	fConst301 = (1.62773154056433e-22 + (fConst0 * ((fConst0 * (0 - (8.9210194994006e-21 + fConst287))) - 1.87744471107996e-22)));
	fConst302 = (1.87744471107996e-19 + (fConst0 * (0 - (2.97367316646687e-18 + fConst289))));
	fConst303 = ((fConst0 * ((fConst0 * (0 - (2.91538144925964e-21 + fConst26))) - 1.8478317276844e-22)) - 1.62773154056433e-22);
	fConst304 = (1.62773154056433e-22 + (fConst0 * (1.87744471107996e-22 + (fConst0 * (2.97367316646687e-21 + fConst28)))));
	fConst305 = (1.87744471107996e-19 + (fConst0 * (2.97367316646687e-18 + fConst30)));
	fConst306 = (3.76929357077285e-20 * fConst0);
	fConst307 = (8.91098277318593e-14 + (fConst0 * (fConst306 - 1.36178461848655e-16)));
	fConst308 = (1.13078807123185e-19 * fConst0);
	fConst309 = (8.91098277318593e-14 + (fConst0 * (1.36178461848655e-16 - fConst308)));
	fConst310 = (7.53858714154569e-20 * fConst0);
	fConst311 = ((fConst0 * (2.72356923697309e-16 + fConst310)) - 1.78219655463719e-13);
	fConst312 = ((fConst0 * (fConst310 - 2.72356923697309e-16)) - 1.78219655463719e-13);
	fConst313 = (8.91098277318593e-14 + (fConst0 * (0 - (1.36178461848655e-16 + fConst308))));
	fConst314 = (8.91098277318593e-14 + (fConst0 * (1.36178461848655e-16 + fConst306)));
	fConst315 = (faustpower<2>(fConst0) / fConst18);
	fConst316 = (0 - (2.58182261199872e-07 * fConst0));
	fConst317 = (0 - (1.72121507466581e-07 * fConst0));
	fConst318 = (0 - (8.60607537332906e-08 * fConst0));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
#define fslider5 (*fslider5_)
	FAUSTFLOAT buf[smp.max_out_count(count)];
	int ReCount = smp.up(count, input0, buf);
	double 	fSlow0 = (0.007000000000000006 * (1 - double(fslider0)));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	double 	fSlow2 = (0.007000000000000006 * double(fslider2));
	double 	fSlow3 = (0.007000000000000006 * double(fslider3));
	double 	fSlow4 = (0.00036676987543879196 * (exp((3 * double(fslider4))) - 1));
	double 	fSlow5 = (0.00036676987543879196 * (exp((3 * double(fslider5))) - 1));
	for (int i=0; i<ReCount; i++) {
		fRec2[0] = (fSlow0 + (0.993 * fRec2[1]));
		double fTemp0 = (1.16387813873793e-13 + (fConst0 * (fConst25 + (fRec2[0] * (fConst23 + (fConst21 * fRec2[0]))))));
		fRec4[0] = (fSlow1 + (0.993 * fRec4[1]));
		fRec5[0] = (fSlow2 + (0.993 * fRec5[1]));
		fRec6[0] = (fSlow3 + (0.993 * fRec6[1]));
		double fTemp1 = (7.64924045480176e-09 + ((fRec6[0] * (1.86385001335326e-09 + (fConst0 * (fConst82 + (((fRec5[0] * (8.014555057419e-11 + (fConst0 * (fConst80 + (fConst78 * fRec4[0]))))) + (fRec4[0] * (2.05023501468858e-12 + (fConst0 * (fConst76 + (fConst74 * fRec4[0])))))) + (fRec6[0] * ((fConst0 * (fConst72 + ((fRec5[0] * ((fConst0 * (fConst70 + (fConst68 * fRec4[0]))) - 2.05023501468858e-14)) + (fRec4[0] * ((fConst0 * (fConst66 + (fConst64 * fRec4[0]))) - 5.12558753672146e-16))))) - 4.65962503338314e-13))))))) + ((fRec5[0] * (7.45540005341303e-09 + (fConst0 * (fConst62 + (fConst60 * fRec4[0]))))) + (fConst0 * (fConst58 + (fRec4[0] * (fConst56 + (fConst54 * fRec4[0]))))))));
		fRec8[0] = (fSlow4 + (0.993 * fRec8[1]));
		double fTemp2 = (fConst210 + (fRec8[0] * ((fConst0 * (fConst208 + (fConst206 * fRec8[0]))) - 6.23290053826565e-22)));
		fRec9[0] = ((double)buf[i] - ((((fRec9[1] * (fConst226 + (fRec8[0] * ((fConst0 * (fConst225 + (fConst224 * fRec8[0]))) - 1.86987016147969e-21)))) + (fRec9[2] * (fConst223 + (fRec8[0] * ((fConst0 * (fConst221 + (fConst219 * fRec8[0]))) - 1.86987016147969e-21))))) + (fRec9[3] * (fConst217 + (fRec8[0] * ((fConst0 * (fConst216 + (fConst215 * fRec8[0]))) - 6.23290053826565e-22))))) / fTemp2));
		double fTemp3 = (fConst0 * (((fRec9[0] * ((fConst231 * fRec8[0]) - fConst214)) + ((fRec9[3] * (fConst230 + (fConst229 * fRec8[0]))) + ((fRec9[1] * (fConst228 + (fConst227 * fRec8[0]))) + (fRec9[2] * (fConst214 + (fConst212 * fRec8[0])))))) / fTemp2));
		fRec7[0] = (((int(signbit(fTemp3)))?plexipoweramp_pre_negclip(fTemp3):plexipoweramp_preclip(fTemp3)) - ((((((fRec7[1] * (3.82462022740088e-08 + ((fRec6[0] * (9.31925006676628e-09 + (fConst0 * (fConst204 + (((fRec5[0] * (2.4043665172257e-10 + (fConst0 * (fConst203 + (fConst202 * fRec4[0]))))) + (fRec4[0] * (6.15070504406575e-12 + (fConst0 * (fConst201 + (fConst200 * fRec4[0])))))) + (fRec6[0] * ((fConst0 * (fConst199 + ((fRec5[0] * ((fConst0 * (fConst198 + (fConst197 * fRec4[0]))) - 2.05023501468858e-14)) + (fRec4[0] * ((fConst0 * (fConst196 + (fConst195 * fRec4[0]))) - 5.12558753672146e-16))))) - 1.39788751001494e-12))))))) + ((fRec5[0] * (3.72770002670651e-08 + (fConst0 * (fConst194 + (fConst193 * fRec4[0]))))) + (fConst0 * (fConst192 + (fRec4[0] * (fConst191 + (fConst190 * fRec4[0]))))))))) + (fRec7[2] * (7.64924045480177e-08 + ((fRec6[0] * (1.86385001335326e-08 + (fConst0 * (fConst189 + (((fRec5[0] * (1.6029110114838e-10 + (fConst0 * (fConst188 + (fConst187 * fRec4[0]))))) + (fRec4[0] * (4.10047002937716e-12 + (fConst0 * (fConst186 + (fConst185 * fRec4[0])))))) + (fRec6[0] * ((fConst0 * (fConst184 + ((fRec5[0] * (4.10047002937716e-14 + (fConst0 * (fConst183 + (fConst182 * fRec4[0]))))) + (fRec4[0] * (1.02511750734429e-15 + (fConst0 * (fConst181 + (fConst180 * fRec4[0])))))))) - 9.31925006676628e-13))))))) + ((fRec5[0] * (7.45540005341303e-08 + (fConst0 * (fConst179 + (fConst178 * fRec4[0]))))) + (fConst0 * (fConst177 + (fRec4[0] * (fConst176 + (fConst175 * fRec4[0])))))))))) + (fRec7[3] * (7.64924045480177e-08 + ((fRec6[0] * (1.86385001335326e-08 + (fConst0 * (fConst174 + (((fRec5[0] * ((fConst0 * (fConst172 + (fConst170 * fRec4[0]))) - 1.6029110114838e-10)) + (fRec4[0] * ((fConst0 * (fConst168 + (fConst166 * fRec4[0]))) - 4.10047002937716e-12))) + (fRec6[0] * (9.31925006676628e-13 + (fConst0 * (fConst164 + ((fRec5[0] * (4.10047002937716e-14 + (fConst0 * (fConst162 + (fConst160 * fRec4[0]))))) + (fRec4[0] * (1.02511750734429e-15 + (fConst0 * (fConst158 + (fConst156 * fRec4[0]))))))))))))))) + ((fRec5[0] * (7.45540005341303e-08 + (fConst0 * (fConst154 + (fConst152 * fRec4[0]))))) + (fConst0 * (fConst150 + (fRec4[0] * (fConst148 + (fConst146 * fRec4[0])))))))))) + (fRec7[4] * (3.82462022740088e-08 + ((fRec6[0] * (9.31925006676628e-09 + (fConst0 * (fConst144 + (((fRec5[0] * ((fConst0 * (fConst142 + (fConst140 * fRec4[0]))) - 2.4043665172257e-10)) + (fRec4[0] * ((fConst0 * (fConst138 + (fConst136 * fRec4[0]))) - 6.15070504406575e-12))) + (fRec6[0] * (1.39788751001494e-12 + (fConst0 * (fConst134 + ((fRec5[0] * ((fConst0 * (fConst132 + (fConst130 * fRec4[0]))) - 2.05023501468858e-14)) + (fRec4[0] * ((fConst0 * (fConst128 + (fConst126 * fRec4[0]))) - 5.12558753672146e-16)))))))))))) + ((fRec5[0] * (3.72770002670651e-08 + (fConst0 * (fConst124 + (fConst122 * fRec4[0]))))) + (fConst0 * (fConst120 + (fRec4[0] * (fConst118 + (fConst116 * fRec4[0])))))))))) + (fRec7[5] * (7.64924045480176e-09 + ((fRec6[0] * (1.86385001335326e-09 + (fConst0 * (fConst114 + (((fRec5[0] * ((fConst0 * (fConst113 + (fConst112 * fRec4[0]))) - 8.014555057419e-11)) + (fRec4[0] * ((fConst0 * (fConst111 + (fConst110 * fRec4[0]))) - 2.05023501468858e-12))) + (fRec6[0] * (4.65962503338314e-13 + (fConst0 * (fConst109 + ((fRec5[0] * ((fConst0 * (fConst108 + (fConst107 * fRec4[0]))) - 2.05023501468858e-14)) + (fRec4[0] * ((fConst0 * (fConst106 + (fConst105 * fRec4[0]))) - 5.12558753672146e-16)))))))))))) + ((fRec5[0] * (7.45540005341303e-09 + (fConst0 * (fConst104 + (fConst103 * fRec4[0]))))) + (fConst0 * (fConst102 + (fRec4[0] * (fConst101 + (fConst100 * fRec4[0])))))))))) / fTemp1));
		fRec10[0] = (fSlow5 + (0.993 * fRec10[1]));
		double fTemp4 = (fConst0 * ((fRec10[0] * ((((((fRec7[0] * (fConst284 + (((fRec5[0] * ((fConst0 * (fConst244 + (fConst283 * fRec4[0]))) - 1.39362713489451e-08)) + (fRec4[0] * ((fConst0 * (fConst282 + (fConst281 * fRec4[0]))) - 3.40664410751991e-10))) + (fRec6[0] * ((fConst0 * (fConst280 + (fConst0 * ((fConst279 * fRec5[0]) + (fConst278 * fRec4[0]))))) - 7.74237297163615e-11))))) + (fRec7[1] * (fConst277 + (((fRec5[0] * ((fConst0 * (fConst96 + (fConst276 * fRec4[0]))) - 4.18088140468352e-08)) + (fRec4[0] * ((fConst0 * (fConst275 + (fConst274 * fRec4[0]))) - 1.02199323225597e-09))) + (fRec6[0] * ((fConst0 * (fConst273 + (fConst0 * ((fConst272 * fRec5[0]) + (fConst271 * fRec4[0]))))) - 2.32271189149085e-10)))))) + (fRec7[2] * (fConst270 + (((fRec5[0] * ((fConst0 * (fConst269 + (fConst268 * fRec4[0]))) - 2.78725426978901e-08)) + (fRec4[0] * ((fConst0 * (fConst267 + (fConst266 * fRec4[0]))) - 6.81328821503981e-10))) + (fRec6[0] * ((fConst0 * (fConst265 + (fConst0 * ((fConst264 * fRec5[0]) + (fConst263 * fRec4[0]))))) - 1.54847459432723e-10)))))) + (fRec7[3] * (fConst262 + (((fRec5[0] * (2.78725426978901e-08 + (fConst0 * (fConst260 + (fConst258 * fRec4[0]))))) + (fRec4[0] * (6.81328821503981e-10 + (fConst0 * (fConst256 + (fConst254 * fRec4[0])))))) + (fRec6[0] * (1.54847459432723e-10 + (fConst0 * (fConst252 + (fConst0 * ((fConst250 * fRec5[0]) + (fConst248 * fRec4[0]))))))))))) + (fRec7[4] * (fConst246 + (((fRec5[0] * (4.18088140468352e-08 + (fConst0 * (fConst244 + (fConst243 * fRec4[0]))))) + (fRec4[0] * (1.02199323225597e-09 + (fConst0 * (fConst241 + (fConst239 * fRec4[0])))))) + (fRec6[0] * (2.32271189149085e-10 + (fConst0 * (fConst237 + (fConst0 * ((fConst235 * fRec5[0]) + (fConst233 * fRec4[0]))))))))))) + (fRec7[5] * (fConst99 + (((fRec5[0] * (1.39362713489451e-08 + (fConst0 * (fConst96 + (fConst94 * fRec4[0]))))) + (fRec4[0] * (3.40664410751991e-10 + (fConst0 * (fConst92 + (fConst90 * fRec4[0])))))) + (fRec6[0] * (7.74237297163615e-11 + (fConst0 * (fConst88 + (fConst0 * ((fConst86 * fRec5[0]) + (fConst84 * fRec4[0])))))))))))) / fTemp1));
		fRec3[0] = (((int(signbit(fTemp4)))?plexipoweramptone_negclip(fTemp4):plexipoweramptoneclip(fTemp4)) - ((((((fRec3[1] * (5.81939069368967e-13 + (fConst0 * (fConst52 + (fRec2[0] * (fConst51 + (fConst50 * fRec2[0]))))))) + (fRec3[2] * (1.16387813873793e-12 + (fConst0 * (fConst49 + (fRec2[0] * (fConst48 + (fConst47 * fRec2[0])))))))) + (fRec3[3] * (1.16387813873793e-12 + (fConst0 * (fConst46 + (fRec2[0] * (fConst44 + (fConst42 * fRec2[0])))))))) + (fRec3[4] * (5.81939069368967e-13 + (fConst0 * (fConst40 + (fRec2[0] * (fConst38 + (fConst36 * fRec2[0])))))))) + (fRec3[5] * (1.16387813873793e-13 + (fConst0 * (fConst34 + (fRec2[0] * (fConst33 + (fConst32 * fRec2[0])))))))) / fTemp0));
		double fTemp5 = (fConst0 * (((((((fRec3[0] * (1.62773154056433e-19 + (fConst0 * (fConst305 + (fRec2[0] * (fConst304 + (fConst303 * fRec2[0]))))))) + (fRec3[1] * (4.88319462169298e-19 + (fConst0 * (fConst302 + (fRec2[0] * (fConst301 + (fConst300 * fRec2[0])))))))) + (fRec3[2] * (3.25546308112866e-19 + (fConst0 * (fConst299 + (fRec2[0] * (fConst298 + (fConst297 * fRec2[0])))))))) + (fRec3[3] * ((fConst0 * (fConst296 + (fRec2[0] * (fConst294 + (fConst292 * fRec2[0]))))) - 3.25546308112866e-19))) + (fRec3[4] * ((fConst0 * (fConst290 + (fRec2[0] * (fConst288 + (fConst286 * fRec2[0]))))) - 4.88319462169298e-19))) + (fRec3[5] * ((fConst0 * (fConst31 + (fRec2[0] * (fConst29 + (fConst27 * fRec2[0]))))) - 1.62773154056433e-19))) / fTemp0));
		fRec1[0] = (((int(signbit(fTemp5)))?plexipoweramp_negclip(fTemp5):plexipowerampclip(fTemp5)) - (fConst19 * (((((fConst17 * fRec1[1]) + (fConst16 * fRec1[2])) + (fConst15 * fRec1[3])) + (fConst13 * fRec1[4])) + (fConst11 * fRec1[5]))));
		fRec0[0] = ((fConst315 * ((((((fConst314 * fRec1[0]) + (fConst313 * fRec1[1])) + (fConst312 * fRec1[2])) + (fConst311 * fRec1[3])) + (fConst309 * fRec1[4])) + (fConst307 * fRec1[5]))) - (fConst9 * (((((fConst8 * fRec0[1]) + (fConst7 * fRec0[2])) + (fConst6 * fRec0[3])) + (fConst4 * fRec0[4])) + (fConst2 * fRec0[5]))));
		buf[i] = (FAUSTFLOAT)(fConst9 * ((fConst0 * ((8.60607537332906e-08 * fRec0[0]) + ((2.58182261199872e-07 * fRec0[1]) + (1.72121507466581e-07 * fRec0[2])))) + ((fConst318 * fRec0[5]) + ((fConst317 * fRec0[3]) + (fConst316 * fRec0[4])))));
		// post processing
		for (int i=5; i>0; i--) fRec0[i] = fRec0[i-1];
		for (int i=5; i>0; i--) fRec1[i] = fRec1[i-1];
		for (int i=5; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec10[1] = fRec10[0];
		for (int i=5; i>0; i--) fRec7[i] = fRec7[i-1];
		for (int i=3; i>0; i--) fRec9[i] = fRec9[i-1];
		fRec8[1] = fRec8[0];
		fRec6[1] = fRec6[0];
		fRec5[1] = fRec5[0];
		fRec4[1] = fRec4[0];
		fRec2[1] = fRec2[0];
	}
	smp.down(buf, output0);
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
#undef fslider5
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
		fslider2_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case MASTER: 
		fslider5_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case MID: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case PRESENSE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case TREBLE: 
		fslider3_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider4_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
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
