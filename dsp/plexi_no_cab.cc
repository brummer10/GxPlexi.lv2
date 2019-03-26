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
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
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
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
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
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec3[2];
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec4[2];
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
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
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	double 	fRec6[2];
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
	double 	fConst205;
	double 	fConst206;
	double 	fConst207;
	double 	fRec7[4];
	double 	fConst208;
	double 	fConst209;
	double 	fConst210;
	double 	fConst211;
	double 	fConst212;
	double 	fRec5[6];
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
	double 	fConst227;
	double 	fConst228;
	double 	fConst229;
	double 	fConst230;
	double 	fConst231;
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
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT	*fslider5_;
	double 	fRec8[2];
	double 	fRec1[6];
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
	double 	fConst285;
	double 	fConst286;

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
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<4; i++) fRec7[i] = 0;
	for (int i=0; i<6; i++) fRec5[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<6; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t RsamplingFreq)
{
	samplingFreq = 4 * RsamplingFreq;
	smp.setup(RsamplingFreq, samplingFreq);
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (8.60995185091346e-24 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (1.10853855898189e-20 + fConst1))) - 2.32580925010789e-18)) - 1.35252203100558e-16)) - 1.14107022001133e-16);
	fConst3 = (1.15287202864694e-23 * fConst0);
	fConst4 = (1.16387813873793e-16 + (fConst0 * (1.37991531166445e-16 + (fConst0 * (2.41360758290699e-18 + (fConst0 * (1.1978459678459e-20 + fConst3)))))));
	fConst5 = (1.15287202864694e-20 * fConst0);
	fConst6 = (1.37991531166445e-13 + (fConst0 * (2.41360758290699e-15 + (fConst0 * (1.1978459678459e-17 + fConst5)))));
	fConst7 = (2.3334608448669e-23 * fConst0);
	fConst8 = ((fConst0 * (1.8478317276844e-22 + (fConst0 * (fConst7 - 2.91538144925964e-21)))) - 1.62773154056433e-22);
	fConst9 = (2.38012186177351e-23 * fConst0);
	fConst10 = (1.62773154056433e-22 + (fConst0 * ((fConst0 * (2.97367316646687e-21 - fConst9)) - 1.87744471107996e-22)));
	fConst11 = (2.38012186177351e-20 * fConst0);
	fConst12 = (1.87744471107996e-19 + (fConst0 * (fConst11 - 2.97367316646687e-18)));
	fConst13 = (1.14107022001133e-16 + (fConst0 * ((fConst0 * (2.32580925010789e-18 + (fConst0 * (fConst1 - 1.10853855898189e-20)))) - 1.35252203100558e-16)));
	fConst14 = ((fConst0 * (1.37991531166445e-16 + (fConst0 * ((fConst0 * (1.1978459678459e-20 - fConst3)) - 2.41360758290699e-18)))) - 1.16387813873793e-16);
	fConst15 = ((fConst0 * (2.41360758290699e-15 + (fConst0 * (fConst5 - 1.1978459678459e-17)))) - 1.37991531166445e-13);
	fConst16 = (4.30497592545673e-23 * fConst0);
	fConst17 = (3.42321066003398e-16 + (fConst0 * ((fConst0 * ((fConst0 * (3.32561567694566e-20 - fConst16)) - 2.32580925010789e-18)) - 1.35252203100558e-16)));
	fConst18 = (5.76436014323472e-23 * fConst0);
	fConst19 = ((fConst0 * (1.37991531166445e-16 + (fConst0 * (2.41360758290699e-18 + (fConst0 * (fConst18 - 3.59353790353771e-20)))))) - 3.4916344162138e-16);
	fConst20 = (3.45861608594083e-20 * fConst0);
	fConst21 = ((fConst0 * (2.41360758290699e-15 + (fConst0 * (1.1978459678459e-17 - fConst20)))) - 4.13974593499336e-13);
	fConst22 = (8.60995185091346e-23 * fConst0);
	fConst23 = (2.28214044002265e-16 + (fConst0 * (2.70504406201115e-16 + (fConst0 * ((fConst0 * (fConst22 - 2.21707711796377e-20)) - 4.65161850021578e-18)))));
	fConst24 = (1.15287202864694e-22 * fConst0);
	fConst25 = ((fConst0 * ((fConst0 * (4.82721516581398e-18 + (fConst0 * (2.39569193569181e-20 - fConst24)))) - 2.75983062332891e-16)) - 2.32775627747587e-16);
	fConst26 = (2.30574405729389e-20 * fConst0);
	fConst27 = ((fConst0 * ((fConst0 * (2.3956919356918e-17 + fConst26)) - 4.82721516581398e-15)) - 2.75983062332891e-13);
	fConst28 = ((fConst0 * (2.70504406201115e-16 + (fConst0 * (4.65161850021578e-18 + (fConst0 * (0 - (2.21707711796377e-20 + fConst22))))))) - 2.28214044002265e-16);
	fConst29 = (2.32775627747587e-16 + (fConst0 * ((fConst0 * ((fConst0 * (2.39569193569181e-20 + fConst24)) - 4.82721516581398e-18)) - 2.75983062332891e-16)));
	fConst30 = (2.75983062332891e-13 + (fConst0 * ((fConst0 * (fConst26 - 2.3956919356918e-17)) - 4.82721516581398e-15)));
	fConst31 = ((fConst0 * ((fConst0 * (2.32580925010789e-18 + (fConst0 * (3.32561567694566e-20 + fConst16)))) - 1.35252203100558e-16)) - 3.42321066003398e-16);
	fConst32 = (3.4916344162138e-16 + (fConst0 * (1.37991531166445e-16 + (fConst0 * ((fConst0 * (0 - (3.59353790353771e-20 + fConst18))) - 2.41360758290699e-18)))));
	fConst33 = (4.13974593499336e-13 + (fConst0 * (2.41360758290699e-15 + (fConst0 * (0 - (1.1978459678459e-17 + fConst20))))));
	fConst34 = (5.71140063390745e-26 * fConst0);
	fConst35 = ((fConst0 * ((fConst0 * ((fConst0 * (0 - (2.19079933314305e-21 + fConst34))) - 9.85847513830281e-18)) - 9.73407549228048e-15)) - 2.05023501468858e-13);
	fConst36 = (6.28835457480362e-27 * fConst0);
	fConst37 = (8.41416450028194e-12 + (fConst0 * (6.2748567015164e-15 + (fConst0 * ((fConst0 * (0 - (2.19721429047455e-22 + fConst36))) - 1.5631404324923e-19)))));
	fConst38 = (6.83143980141387e-26 * fConst0);
	fConst39 = (3.8944520824993e-11 + (fConst0 * (4.60837020243462e-14 + (fConst0 * (1.96263476557925e-17 + (fConst0 * (2.82550700450066e-21 + fConst38)))))));
	fConst40 = (2.28456025356298e-24 * fConst0);
	fConst41 = (8.20094005875433e-12 + (fConst0 * (3.89363019691219e-13 + (fConst0 * (3.94339005532112e-16 + (fConst0 * (8.76319733257222e-20 + fConst40)))))));
	fConst42 = (2.62747684669764e-24 * fConst0);
	fConst43 = (3.64948853049297e-10 + (fConst0 * (8.63729385824201e-13 + (fConst0 * (5.75493421557123e-16 + (fConst0 * (1.04079855336218e-19 + fConst42)))))));
	fConst44 = (1.2250846579039e-26 * fConst0);
	fConst45 = (5.6381462903936e-19 + (fConst0 * (4.25275991505813e-22 + fConst44)));
	fConst46 = (3.65162644807511e-27 * fConst0);
	fConst47 = ((fConst0 * (1.15644079415944e-22 + fConst46)) - 2.17936835495489e-19);
	fConst48 = (4.90033863161559e-25 * fConst0);
	fConst49 = ((fConst0 * (0 - (1.70110396602325e-20 + fConst48))) - 2.25525851615744e-17);
	fConst50 = (6.55700275611026e-25 * fConst0);
	fConst51 = ((fConst0 * (0 - (2.32082150835733e-20 + fConst50))) - 4.56663781668224e-17);
	fConst52 = (1.70482071658867e-26 * fConst0);
	fConst53 = ((fConst0 * ((fConst0 * (0 - (6.33218150155226e-22 + fConst52))) - 2.23212003317829e-18)) - 2.25733780437227e-15);
	fConst54 = (1.06337348306058e-26 * fConst0);
	fConst55 = ((fConst0 * ((fConst0 * (0 - (4.17029233617835e-22 + fConst54))) - 2.15183361025616e-18)) - 2.20400264079023e-15);
	fConst56 = (5.36264606803021e-27 * fConst0);
	fConst57 = (1.33198267673638e-15 + (fConst0 * ((fConst0 * (0 - (1.90787528297247e-22 + fConst56))) - 3.62974376641359e-19)));
	fConst58 = (4.25349393224233e-25 * fConst0);
	fConst59 = (8.8160105631609e-14 + (fConst0 * (8.60733444102465e-17 + (fConst0 * (1.66811693447134e-20 + fConst58)))));
	fConst60 = (6.56869211674411e-25 * fConst0);
	fConst61 = (1.9631006367053e-13 + (fConst0 * (1.34405150727257e-16 + (fConst0 * (2.57532797835268e-20 + fConst60)))));
	fConst62 = (1.70785995035347e-26 * fConst0);
	fConst63 = (9.44774697635675e-12 + (fConst0 * (1.1010746153663e-14 + (fConst0 * (4.66041359273551e-18 + (fConst0 * (6.99442965811442e-22 + fConst62)))))));
	fConst64 = (1.37906949166034e-19 * fConst0);
	fConst65 = (fConst64 - 1.23661181102973e-16);
	fConst66 = (5.51627796664135e-18 * fConst0);
	fConst67 = (4.9464472441189e-15 - fConst66);
	fConst68 = (1.43423227132675e-19 * fConst0);
	fConst69 = ((fConst0 * (3.79347535921698e-16 - fConst68)) - 3.11181454475999e-13);
	fConst70 = (1.18265656406023e-19 * fConst0);
	fConst71 = (3.83247462095989e-13 + (fConst0 * (fConst70 - 5.33446400796538e-16)));
	fConst72 = (1.22996282662264e-19 * fConst0);
	fConst73 = ((fConst0 * (6.49761494546054e-16 - fConst72)) - 8.63652414138443e-13);
	fConst74 = (4.73062625624092e-18 * fConst0);
	fConst75 = ((fConst0 * (2.13378560318615e-14 - fConst74)) - 1.53298984838396e-11);
	fConst76 = (4.80204913900459e-15 * fConst0);
	fConst77 = (fConst76 - 1.98477279602486e-11);
	fConst78 = (1.24853277614119e-16 * fConst0);
	fConst79 = (fConst0 * (fConst78 - 5.16040926966463e-13));
	fConst80 = (3.62343055072572e-10 + fConst79);
	fConst81 = (2.05023501468858e-13 + (fConst0 * ((fConst0 * (9.85847513830281e-18 + (fConst0 * (fConst34 - 2.19079933314305e-21)))) - 9.73407549228048e-15)));
	fConst82 = ((fConst0 * (6.2748567015164e-15 + (fConst0 * (1.5631404324923e-19 + (fConst0 * (fConst36 - 2.19721429047455e-22)))))) - 8.41416450028194e-12);
	fConst83 = ((fConst0 * (4.60837020243462e-14 + (fConst0 * ((fConst0 * (2.82550700450066e-21 - fConst38)) - 1.96263476557925e-17)))) - 3.8944520824993e-11);
	fConst84 = ((fConst0 * (3.89363019691219e-13 + (fConst0 * ((fConst0 * (8.76319733257222e-20 - fConst40)) - 3.94339005532112e-16)))) - 8.20094005875433e-12);
	fConst85 = ((fConst0 * (8.63729385824201e-13 + (fConst0 * ((fConst0 * (1.04079855336218e-19 - fConst42)) - 5.75493421557123e-16)))) - 3.64948853049297e-10);
	fConst86 = ((fConst0 * (4.25275991505813e-22 - fConst44)) - 5.6381462903936e-19);
	fConst87 = (2.17936835495489e-19 + (fConst0 * (1.15644079415944e-22 - fConst46)));
	fConst88 = (2.25525851615744e-17 + (fConst0 * (fConst48 - 1.70110396602325e-20)));
	fConst89 = (4.56663781668224e-17 + (fConst0 * (fConst50 - 2.32082150835733e-20)));
	fConst90 = ((fConst0 * (2.23212003317829e-18 + (fConst0 * (fConst52 - 6.33218150155226e-22)))) - 2.25733780437227e-15);
	fConst91 = ((fConst0 * (2.15183361025616e-18 + (fConst0 * (fConst54 - 4.17029233617835e-22)))) - 2.20400264079023e-15);
	fConst92 = (1.33198267673638e-15 + (fConst0 * (3.62974376641359e-19 + (fConst0 * (fConst56 - 1.90787528297247e-22)))));
	fConst93 = (8.8160105631609e-14 + (fConst0 * ((fConst0 * (1.66811693447134e-20 - fConst58)) - 8.60733444102465e-17)));
	fConst94 = (1.9631006367053e-13 + (fConst0 * ((fConst0 * (2.57532797835268e-20 - fConst60)) - 1.34405150727257e-16)));
	fConst95 = ((fConst0 * (1.1010746153663e-14 + (fConst0 * ((fConst0 * (6.99442965811442e-22 - fConst62)) - 4.66041359273551e-18)))) - 9.44774697635675e-12);
	fConst96 = (2.85570031695372e-25 * fConst0);
	fConst97 = (6.15070504406575e-13 + (fConst0 * ((fConst0 * ((fConst0 * (6.57239799942916e-21 - fConst96)) - 9.85847513830281e-18)) - 9.73407549228048e-15)));
	fConst98 = (3.14417728740181e-26 * fConst0);
	fConst99 = ((fConst0 * (6.2748567015164e-15 + (fConst0 * ((fConst0 * (6.59164287142364e-22 - fConst98)) - 1.5631404324923e-19)))) - 2.52424935008458e-11);
	fConst100 = (3.41571990070694e-25 * fConst0);
	fConst101 = ((fConst0 * (4.60837020243462e-14 + (fConst0 * (1.96263476557925e-17 + (fConst0 * (fConst100 - 8.47652101350198e-21)))))) - 1.16833562474979e-10);
	fConst102 = (1.14228012678149e-23 * fConst0);
	fConst103 = ((fConst0 * (3.89363019691219e-13 + (fConst0 * (3.94339005532112e-16 + (fConst0 * (fConst102 - 2.62895919977167e-19)))))) - 2.4602820176263e-11);
	fConst104 = (1.31373842334882e-23 * fConst0);
	fConst105 = ((fConst0 * (8.63729385824201e-13 + (fConst0 * (5.75493421557123e-16 + (fConst0 * (fConst104 - 3.12239566008655e-19)))))) - 1.09484655914789e-09);
	fConst106 = (6.12542328951948e-26 * fConst0);
	fConst107 = (5.6381462903936e-19 + (fConst0 * (fConst106 - 1.27582797451744e-21)));
	fConst108 = (1.82581322403755e-26 * fConst0);
	fConst109 = ((fConst0 * (fConst108 - 3.46932238247832e-22)) - 2.17936835495489e-19);
	fConst110 = (2.45016931580779e-24 * fConst0);
	fConst111 = ((fConst0 * (5.10331189806976e-20 - fConst110)) - 2.25525851615744e-17);
	fConst112 = (3.27850137805513e-24 * fConst0);
	fConst113 = ((fConst0 * (6.962464525072e-20 - fConst112)) - 4.56663781668224e-17);
	fConst114 = (8.52410358294333e-26 * fConst0);
	fConst115 = ((fConst0 * ((fConst0 * (1.89965445046568e-21 - fConst114)) - 2.23212003317829e-18)) - 2.25733780437227e-15);
	fConst116 = (5.31686741530291e-26 * fConst0);
	fConst117 = ((fConst0 * ((fConst0 * (1.2510877008535e-21 - fConst116)) - 2.15183361025616e-18)) - 2.20400264079023e-15);
	fConst118 = (2.68132303401511e-26 * fConst0);
	fConst119 = (1.33198267673638e-15 + (fConst0 * ((fConst0 * (5.72362584891742e-22 - fConst118)) - 3.62974376641359e-19)));
	fConst120 = (2.12674696612117e-24 * fConst0);
	fConst121 = (8.8160105631609e-14 + (fConst0 * (8.60733444102465e-17 + (fConst0 * (fConst120 - 5.00435080341401e-20)))));
	fConst122 = (3.28434605837205e-24 * fConst0);
	fConst123 = (1.9631006367053e-13 + (fConst0 * (1.34405150727257e-16 + (fConst0 * (fConst122 - 7.72598393505803e-20)))));
	fConst124 = (8.53929975176734e-26 * fConst0);
	fConst125 = ((fConst0 * (1.1010746153663e-14 + (fConst0 * (4.66041359273551e-18 + (fConst0 * (fConst124 - 2.09832889743433e-21)))))) - 2.83432409290702e-11);
	fConst126 = (5.71140063390745e-25 * fConst0);
	fConst127 = (4.10047002937716e-13 + (fConst0 * (1.9468150984561e-14 + (fConst0 * ((fConst0 * (fConst126 - 4.38159866628611e-21)) - 1.97169502766056e-17)))));
	fConst128 = (6.28835457480362e-26 * fConst0);
	fConst129 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst128 - 4.39442858094909e-22)) - 3.12628086498461e-19)) - 1.25497134030328e-14)) - 1.68283290005639e-11);
	fConst130 = (6.83143980141387e-25 * fConst0);
	fConst131 = ((fConst0 * ((fConst0 * (3.92526953115849e-17 + (fConst0 * (5.65101400900132e-21 - fConst130)))) - 9.21674040486925e-14)) - 7.78890416499859e-11);
	fConst132 = (2.28456025356298e-23 * fConst0);
	fConst133 = ((fConst0 * ((fConst0 * (7.88678011064225e-16 + (fConst0 * (1.75263946651444e-19 - fConst132)))) - 7.78726039382438e-13)) - 1.64018801175087e-11);
	fConst134 = (2.62747684669764e-23 * fConst0);
	fConst135 = ((fConst0 * ((fConst0 * (1.15098684311425e-15 + (fConst0 * (2.08159710672437e-19 - fConst134)))) - 1.7274587716484e-12)) - 7.29897706098595e-10);
	fConst136 = (1.2250846579039e-25 * fConst0);
	fConst137 = (1.12762925807872e-18 + (fConst0 * (8.50551983011626e-22 - fConst136)));
	fConst138 = (3.65162644807511e-26 * fConst0);
	fConst139 = ((fConst0 * (2.31288158831888e-22 - fConst138)) - 4.35873670990977e-19);
	fConst140 = (4.90033863161559e-24 * fConst0);
	fConst141 = ((fConst0 * (fConst140 - 3.40220793204651e-20)) - 4.51051703231488e-17);
	fConst142 = (6.55700275611025e-24 * fConst0);
	fConst143 = ((fConst0 * (fConst142 - 4.64164301671467e-20)) - 9.13327563336449e-17);
	fConst144 = (1.70482071658867e-25 * fConst0);
	fConst145 = (4.51467560874454e-15 + (fConst0 * ((fConst0 * (fConst144 - 1.26643630031045e-21)) - 4.46424006635657e-18)));
	fConst146 = (1.06337348306058e-25 * fConst0);
	fConst147 = (4.40800528158045e-15 + (fConst0 * ((fConst0 * (fConst146 - 8.34058467235669e-22)) - 4.30366722051232e-18)));
	fConst148 = (5.36264606803021e-26 * fConst0);
	fConst149 = ((fConst0 * ((fConst0 * (fConst148 - 3.81575056594495e-22)) - 7.25948753282719e-19)) - 2.66396535347277e-15);
	fConst150 = (4.25349393224233e-24 * fConst0);
	fConst151 = ((fConst0 * (1.72146688820493e-16 + (fConst0 * (3.33623386894268e-20 - fConst150)))) - 1.76320211263218e-13);
	fConst152 = (6.56869211674411e-24 * fConst0);
	fConst153 = ((fConst0 * (2.68810301454515e-16 + (fConst0 * (5.15065595670536e-20 - fConst152)))) - 3.9262012734106e-13);
	fConst154 = (1.70785995035347e-25 * fConst0);
	fConst155 = ((fConst0 * ((fConst0 * (9.32082718547102e-18 + (fConst0 * (1.39888593162288e-21 - fConst154)))) - 2.20214923073261e-14)) - 1.88954939527135e-11);
	fConst156 = ((fConst0 * (1.9468150984561e-14 + (fConst0 * (1.97169502766056e-17 + (fConst0 * (0 - (4.38159866628611e-21 + fConst126))))))) - 4.10047002937716e-13);
	fConst157 = (1.68283290005639e-11 + (fConst0 * ((fConst0 * (3.12628086498461e-19 + (fConst0 * (0 - (4.39442858094909e-22 + fConst128))))) - 1.25497134030328e-14)));
	fConst158 = (7.78890416499859e-11 + (fConst0 * ((fConst0 * ((fConst0 * (5.65101400900132e-21 + fConst130)) - 3.92526953115849e-17)) - 9.21674040486925e-14)));
	fConst159 = (1.64018801175087e-11 + (fConst0 * ((fConst0 * ((fConst0 * (1.75263946651444e-19 + fConst132)) - 7.88678011064225e-16)) - 7.78726039382438e-13)));
	fConst160 = (7.29897706098595e-10 + (fConst0 * ((fConst0 * ((fConst0 * (2.08159710672437e-19 + fConst134)) - 1.15098684311425e-15)) - 1.7274587716484e-12)));
	fConst161 = ((fConst0 * (8.50551983011626e-22 + fConst136)) - 1.12762925807872e-18);
	fConst162 = (4.35873670990977e-19 + (fConst0 * (2.31288158831888e-22 + fConst138)));
	fConst163 = (4.51051703231488e-17 + (fConst0 * (0 - (3.40220793204651e-20 + fConst140))));
	fConst164 = (9.13327563336449e-17 + (fConst0 * (0 - (4.64164301671467e-20 + fConst142))));
	fConst165 = (4.51467560874454e-15 + (fConst0 * (4.46424006635657e-18 + (fConst0 * (0 - (1.26643630031045e-21 + fConst144))))));
	fConst166 = (4.40800528158045e-15 + (fConst0 * (4.30366722051232e-18 + (fConst0 * (0 - (8.34058467235669e-22 + fConst146))))));
	fConst167 = ((fConst0 * (7.25948753282719e-19 + (fConst0 * (0 - (3.81575056594495e-22 + fConst148))))) - 2.66396535347277e-15);
	fConst168 = ((fConst0 * ((fConst0 * (3.33623386894268e-20 + fConst150)) - 1.72146688820493e-16)) - 1.76320211263218e-13);
	fConst169 = ((fConst0 * ((fConst0 * (5.15065595670536e-20 + fConst152)) - 2.68810301454515e-16)) - 3.9262012734106e-13);
	fConst170 = (1.88954939527135e-11 + (fConst0 * ((fConst0 * ((fConst0 * (1.39888593162288e-21 + fConst154)) - 9.32082718547102e-18)) - 2.20214923073261e-14)));
	fConst171 = ((fConst0 * ((fConst0 * (9.85847513830281e-18 + (fConst0 * (6.57239799942916e-21 + fConst96)))) - 9.73407549228048e-15)) - 6.15070504406575e-13);
	fConst172 = (2.52424935008458e-11 + (fConst0 * (6.2748567015164e-15 + (fConst0 * (1.5631404324923e-19 + (fConst0 * (6.59164287142364e-22 + fConst98)))))));
	fConst173 = (1.16833562474979e-10 + (fConst0 * (4.60837020243462e-14 + (fConst0 * ((fConst0 * (0 - (8.47652101350198e-21 + fConst100))) - 1.96263476557925e-17)))));
	fConst174 = (2.4602820176263e-11 + (fConst0 * (3.89363019691219e-13 + (fConst0 * ((fConst0 * (0 - (2.62895919977167e-19 + fConst102))) - 3.94339005532112e-16)))));
	fConst175 = (1.09484655914789e-09 + (fConst0 * (8.63729385824201e-13 + (fConst0 * ((fConst0 * (0 - (3.12239566008655e-19 + fConst104))) - 5.75493421557123e-16)))));
	fConst176 = ((fConst0 * (0 - (1.27582797451744e-21 + fConst106))) - 5.6381462903936e-19);
	fConst177 = (2.17936835495489e-19 + (fConst0 * (0 - (3.46932238247832e-22 + fConst108))));
	fConst178 = (2.25525851615744e-17 + (fConst0 * (5.10331189806976e-20 + fConst110)));
	fConst179 = (4.56663781668224e-17 + (fConst0 * (6.962464525072e-20 + fConst112)));
	fConst180 = ((fConst0 * (2.23212003317829e-18 + (fConst0 * (1.89965445046568e-21 + fConst114)))) - 2.25733780437227e-15);
	fConst181 = ((fConst0 * (2.15183361025616e-18 + (fConst0 * (1.2510877008535e-21 + fConst116)))) - 2.20400264079023e-15);
	fConst182 = (1.33198267673638e-15 + (fConst0 * (3.62974376641359e-19 + (fConst0 * (5.72362584891742e-22 + fConst118)))));
	fConst183 = (8.8160105631609e-14 + (fConst0 * ((fConst0 * (0 - (5.00435080341401e-20 + fConst120))) - 8.60733444102465e-17)));
	fConst184 = (1.9631006367053e-13 + (fConst0 * ((fConst0 * (0 - (7.72598393505803e-20 + fConst122))) - 1.34405150727257e-16)));
	fConst185 = (2.83432409290702e-11 + (fConst0 * (1.1010746153663e-14 + (fConst0 * ((fConst0 * (0 - (2.09832889743433e-21 + fConst124))) - 4.66041359273551e-18)))));
	fConst186 = (1.93311418264457e-29 * fConst0);
	fConst187 = (2.74247623683688e-23 + (fConst0 * (6.45290669402119e-25 + fConst186)));
	fConst188 = (2.43107147356825e-29 * fConst0);
	fConst189 = ((fConst0 * (0 - (8.11971910844529e-25 + fConst188))) - 4.97994757198574e-23);
	fConst190 = (5.32933796343052e-15 * fConst0);
	fConst191 = (1.31411465953292e-07 + (fConst0 * (1.07885862738881e-08 + (fConst0 * (1.77994736282848e-10 + fConst190)))));
	fConst192 = (8.7780444052674e-09 * fConst0);
	fConst193 = (2.4329391367149e-07 + fConst192);
	fConst194 = (2.19451110131685e-10 * fConst0);
	fConst195 = (6.08234784178726e-09 + fConst194);
	fConst196 = ((fConst0 * (6.45290669402119e-25 - fConst186)) - 2.74247623683688e-23);
	fConst197 = (4.97994757198574e-23 + (fConst0 * (fConst188 - 8.11971910844529e-25)));
	fConst198 = (1.31411465953292e-07 + (fConst0 * ((fConst0 * (1.77994736282848e-10 - fConst190)) - 1.07885862738881e-08)));
	fConst199 = (5.79934254793371e-29 * fConst0);
	fConst200 = ((fConst0 * (fConst199 - 6.45290669402119e-25)) - 2.74247623683688e-23);
	fConst201 = (7.29321442070476e-29 * fConst0);
	fConst202 = (4.97994757198574e-23 + (fConst0 * (8.11971910844529e-25 - fConst201)));
	fConst203 = (1.59880138902915e-14 * fConst0);
	fConst204 = (3.94234397859877e-07 + (fConst0 * ((fConst0 * (fConst203 - 1.77994736282848e-10)) - 1.07885862738881e-08)));
	fConst205 = (2.74247623683688e-23 + (fConst0 * (0 - (6.45290669402119e-25 + fConst199))));
	fConst206 = ((fConst0 * (8.11971910844529e-25 + fConst201)) - 4.97994757198574e-23);
	fConst207 = (3.94234397859877e-07 + (fConst0 * (1.07885862738881e-08 + (fConst0 * (0 - (1.77994736282848e-10 + fConst203))))));
	fConst208 = (fConst192 - 2.4329391367149e-07);
	fConst209 = (fConst194 - 6.08234784178726e-09);
	fConst210 = (2.4329391367149e-07 - fConst192);
	fConst211 = (6.08234784178726e-09 - fConst194);
	fConst212 = (0 - fConst193);
	fConst213 = (4.13720847498101e-19 * fConst0);
	fConst214 = (1.23661181102973e-16 - fConst213);
	fConst215 = (1.65488338999241e-17 * fConst0);
	fConst216 = (fConst215 - 4.9464472441189e-15);
	fConst217 = (4.30269681398026e-19 * fConst0);
	fConst218 = ((fConst0 * (fConst217 - 3.79347535921698e-16)) - 3.11181454475999e-13);
	fConst219 = (3.54796969218069e-19 * fConst0);
	fConst220 = (3.83247462095989e-13 + (fConst0 * (5.33446400796538e-16 - fConst219)));
	fConst221 = (3.68988847986792e-19 * fConst0);
	fConst222 = ((fConst0 * (fConst221 - 6.49761494546054e-16)) - 8.63652414138443e-13);
	fConst223 = (1.41918787687228e-17 * fConst0);
	fConst224 = ((fConst0 * (fConst223 - 2.13378560318615e-14)) - 1.53298984838396e-11);
	fConst225 = (0 - (1.98477279602486e-11 + fConst76));
	fConst226 = (fConst0 * (0 - (5.16040926966463e-13 + fConst78)));
	fConst227 = (1.08702916521772e-09 + fConst226);
	fConst228 = (2.75813898332068e-19 * fConst0);
	fConst229 = (2.47322362205945e-16 + fConst228);
	fConst230 = (1.10325559332827e-17 * fConst0);
	fConst231 = (0 - (9.89289448823781e-15 + fConst230));
	fConst232 = (2.8684645426535e-19 * fConst0);
	fConst233 = (6.22362908951999e-13 + (fConst0 * (0 - (7.58695071843397e-16 + fConst232))));
	fConst234 = (2.36531312812046e-19 * fConst0);
	fConst235 = ((fConst0 * (1.06689280159308e-15 + fConst234)) - 7.66494924191979e-13);
	fConst236 = (2.45992565324528e-19 * fConst0);
	fConst237 = (1.72730482827689e-12 + (fConst0 * (0 - (1.29952298909211e-15 + fConst236))));
	fConst238 = (9.46125251248183e-18 * fConst0);
	fConst239 = (3.06597969676792e-11 + (fConst0 * (0 - (4.26757120637231e-14 + fConst238))));
	fConst240 = (9.60409827800919e-15 * fConst0);
	fConst241 = (3.96954559204971e-11 - fConst240);
	fConst242 = (2.49706555228239e-16 * fConst0);
	fConst243 = (7.24686110145144e-10 + (fConst0 * (1.03208185393293e-12 - fConst242)));
	fConst244 = (fConst228 - 2.47322362205945e-16);
	fConst245 = (9.89289448823781e-15 - fConst230);
	fConst246 = (6.22362908951999e-13 + (fConst0 * (7.58695071843397e-16 - fConst232)));
	fConst247 = ((fConst0 * (fConst234 - 1.06689280159308e-15)) - 7.66494924191979e-13);
	fConst248 = (1.72730482827689e-12 + (fConst0 * (1.29952298909211e-15 - fConst236)));
	fConst249 = (3.06597969676792e-11 + (fConst0 * (4.26757120637231e-14 - fConst238)));
	fConst250 = (3.96954559204971e-11 + fConst240);
	fConst251 = ((fConst0 * (1.03208185393293e-12 + fConst242)) - 7.24686110145144e-10);
	fConst252 = (0 - (1.23661181102973e-16 + fConst213));
	fConst253 = (4.9464472441189e-15 + fConst215);
	fConst254 = ((fConst0 * (3.79347535921698e-16 + fConst217)) - 3.11181454475999e-13);
	fConst255 = (3.83247462095989e-13 + (fConst0 * (0 - (5.33446400796538e-16 + fConst219))));
	fConst256 = ((fConst0 * (6.49761494546054e-16 + fConst221)) - 8.63652414138443e-13);
	fConst257 = ((fConst0 * (2.13378560318615e-14 + fConst223)) - 1.53298984838396e-11);
	fConst258 = (fConst79 - 1.08702916521772e-09);
	fConst259 = (1.23661181102973e-16 + fConst64);
	fConst260 = (0 - (4.9464472441189e-15 + fConst66));
	fConst261 = ((fConst0 * (0 - (3.79347535921698e-16 + fConst68))) - 3.11181454475999e-13);
	fConst262 = (3.83247462095989e-13 + (fConst0 * (5.33446400796538e-16 + fConst70)));
	fConst263 = ((fConst0 * (0 - (6.49761494546054e-16 + fConst72))) - 8.63652414138443e-13);
	fConst264 = ((fConst0 * (0 - (2.13378560318615e-14 + fConst74))) - 1.53298984838396e-11);
	fConst265 = (fConst226 - 3.62343055072572e-10);
	fConst266 = (1.16673042243345e-22 * fConst0);
	fConst267 = ((fConst0 * ((fConst0 * (8.74614434777892e-21 - fConst266)) - 1.8478317276844e-22)) - 1.62773154056433e-22);
	fConst268 = (1.19006093088676e-22 * fConst0);
	fConst269 = (1.62773154056433e-22 + (fConst0 * (1.87744471107996e-22 + (fConst0 * (fConst268 - 8.9210194994006e-21)))));
	fConst270 = (7.14036558532053e-20 * fConst0);
	fConst271 = (1.87744471107996e-19 + (fConst0 * (2.97367316646687e-18 - fConst270)));
	fConst272 = (2.3334608448669e-22 * fConst0);
	fConst273 = (3.25546308112866e-22 + (fConst0 * ((fConst0 * (fConst272 - 5.83076289851928e-21)) - 3.69566345536879e-22)));
	fConst274 = (2.38012186177351e-22 * fConst0);
	fConst275 = ((fConst0 * (3.75488942215992e-22 + (fConst0 * (5.94734633293373e-21 - fConst274)))) - 3.25546308112866e-22);
	fConst276 = (4.76024372354702e-20 * fConst0);
	fConst277 = ((fConst0 * (5.94734633293373e-18 + fConst276)) - 3.75488942215992e-19);
	fConst278 = (3.25546308112866e-22 + (fConst0 * (3.69566345536879e-22 + (fConst0 * (0 - (5.83076289851928e-21 + fConst272))))));
	fConst279 = ((fConst0 * ((fConst0 * (5.94734633293373e-21 + fConst274)) - 3.75488942215992e-22)) - 3.25546308112866e-22);
	fConst280 = ((fConst0 * (fConst276 - 5.94734633293373e-18)) - 3.75488942215992e-19);
	fConst281 = ((fConst0 * (1.8478317276844e-22 + (fConst0 * (8.74614434777892e-21 + fConst266)))) - 1.62773154056433e-22);
	fConst282 = (1.62773154056433e-22 + (fConst0 * ((fConst0 * (0 - (8.9210194994006e-21 + fConst268))) - 1.87744471107996e-22)));
	fConst283 = (1.87744471107996e-19 + (fConst0 * (0 - (2.97367316646687e-18 + fConst270))));
	fConst284 = ((fConst0 * ((fConst0 * (0 - (2.91538144925964e-21 + fConst7))) - 1.8478317276844e-22)) - 1.62773154056433e-22);
	fConst285 = (1.62773154056433e-22 + (fConst0 * (1.87744471107996e-22 + (fConst0 * (2.97367316646687e-21 + fConst9)))));
	fConst286 = (1.87744471107996e-19 + (fConst0 * (2.97367316646687e-18 + fConst11)));
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
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (1.16387813873793e-13 + (fConst0 * (fConst6 + (fRec0[0] * (fConst4 + (fConst2 * fRec0[0]))))));
		fRec2[0] = (fSlow1 + (0.993 * fRec2[1]));
		fRec3[0] = (fSlow2 + (0.993 * fRec3[1]));
		fRec4[0] = (fSlow3 + (0.993 * fRec4[1]));
		double fTemp1 = (7.64924045480176e-09 + ((fRec4[0] * (1.86385001335326e-09 + (fConst0 * (fConst63 + (((fRec3[0] * (8.014555057419e-11 + (fConst0 * (fConst61 + (fConst59 * fRec2[0]))))) + (fRec2[0] * (2.05023501468858e-12 + (fConst0 * (fConst57 + (fConst55 * fRec2[0])))))) + (fRec4[0] * ((fConst0 * (fConst53 + ((fRec3[0] * ((fConst0 * (fConst51 + (fConst49 * fRec2[0]))) - 2.05023501468858e-14)) + (fRec2[0] * ((fConst0 * (fConst47 + (fConst45 * fRec2[0]))) - 5.12558753672146e-16))))) - 4.65962503338314e-13))))))) + ((fRec3[0] * (7.45540005341303e-09 + (fConst0 * (fConst43 + (fConst41 * fRec2[0]))))) + (fConst0 * (fConst39 + (fRec2[0] * (fConst37 + (fConst35 * fRec2[0]))))))));
		fRec6[0] = (fSlow4 + (0.993 * fRec6[1]));
		double fTemp2 = (fConst191 + (fRec6[0] * ((fConst0 * (fConst189 + (fConst187 * fRec6[0]))) - 6.23290053826565e-22)));
		fRec7[0] = ((double)buf[i] - ((((fRec7[1] * (fConst207 + (fRec6[0] * ((fConst0 * (fConst206 + (fConst205 * fRec6[0]))) - 1.86987016147969e-21)))) + (fRec7[2] * (fConst204 + (fRec6[0] * ((fConst0 * (fConst202 + (fConst200 * fRec6[0]))) - 1.86987016147969e-21))))) + (fRec7[3] * (fConst198 + (fRec6[0] * ((fConst0 * (fConst197 + (fConst196 * fRec6[0]))) - 6.23290053826565e-22))))) / fTemp2));
		double fTemp3 = (fConst0 * (((fRec7[0] * ((fConst212 * fRec6[0]) - fConst195)) + ((fRec7[3] * (fConst211 + (fConst210 * fRec6[0]))) + ((fRec7[1] * (fConst209 + (fConst208 * fRec6[0]))) + (fRec7[2] * (fConst195 + (fConst193 * fRec6[0])))))) / fTemp2));
		fRec5[0] = (((int(signbit(fTemp3)))?plexipoweramp_pre_negclip(fTemp3):plexipoweramp_preclip(fTemp3)) - ((((((fRec5[1] * (3.82462022740088e-08 + ((fRec4[0] * (9.31925006676628e-09 + (fConst0 * (fConst185 + (((fRec3[0] * (2.4043665172257e-10 + (fConst0 * (fConst184 + (fConst183 * fRec2[0]))))) + (fRec2[0] * (6.15070504406575e-12 + (fConst0 * (fConst182 + (fConst181 * fRec2[0])))))) + (fRec4[0] * ((fConst0 * (fConst180 + ((fRec3[0] * ((fConst0 * (fConst179 + (fConst178 * fRec2[0]))) - 2.05023501468858e-14)) + (fRec2[0] * ((fConst0 * (fConst177 + (fConst176 * fRec2[0]))) - 5.12558753672146e-16))))) - 1.39788751001494e-12))))))) + ((fRec3[0] * (3.72770002670651e-08 + (fConst0 * (fConst175 + (fConst174 * fRec2[0]))))) + (fConst0 * (fConst173 + (fRec2[0] * (fConst172 + (fConst171 * fRec2[0]))))))))) + (fRec5[2] * (7.64924045480177e-08 + ((fRec4[0] * (1.86385001335326e-08 + (fConst0 * (fConst170 + (((fRec3[0] * (1.6029110114838e-10 + (fConst0 * (fConst169 + (fConst168 * fRec2[0]))))) + (fRec2[0] * (4.10047002937716e-12 + (fConst0 * (fConst167 + (fConst166 * fRec2[0])))))) + (fRec4[0] * ((fConst0 * (fConst165 + ((fRec3[0] * (4.10047002937716e-14 + (fConst0 * (fConst164 + (fConst163 * fRec2[0]))))) + (fRec2[0] * (1.02511750734429e-15 + (fConst0 * (fConst162 + (fConst161 * fRec2[0])))))))) - 9.31925006676628e-13))))))) + ((fRec3[0] * (7.45540005341303e-08 + (fConst0 * (fConst160 + (fConst159 * fRec2[0]))))) + (fConst0 * (fConst158 + (fRec2[0] * (fConst157 + (fConst156 * fRec2[0])))))))))) + (fRec5[3] * (7.64924045480177e-08 + ((fRec4[0] * (1.86385001335326e-08 + (fConst0 * (fConst155 + (((fRec3[0] * ((fConst0 * (fConst153 + (fConst151 * fRec2[0]))) - 1.6029110114838e-10)) + (fRec2[0] * ((fConst0 * (fConst149 + (fConst147 * fRec2[0]))) - 4.10047002937716e-12))) + (fRec4[0] * (9.31925006676628e-13 + (fConst0 * (fConst145 + ((fRec3[0] * (4.10047002937716e-14 + (fConst0 * (fConst143 + (fConst141 * fRec2[0]))))) + (fRec2[0] * (1.02511750734429e-15 + (fConst0 * (fConst139 + (fConst137 * fRec2[0]))))))))))))))) + ((fRec3[0] * (7.45540005341303e-08 + (fConst0 * (fConst135 + (fConst133 * fRec2[0]))))) + (fConst0 * (fConst131 + (fRec2[0] * (fConst129 + (fConst127 * fRec2[0])))))))))) + (fRec5[4] * (3.82462022740088e-08 + ((fRec4[0] * (9.31925006676628e-09 + (fConst0 * (fConst125 + (((fRec3[0] * ((fConst0 * (fConst123 + (fConst121 * fRec2[0]))) - 2.4043665172257e-10)) + (fRec2[0] * ((fConst0 * (fConst119 + (fConst117 * fRec2[0]))) - 6.15070504406575e-12))) + (fRec4[0] * (1.39788751001494e-12 + (fConst0 * (fConst115 + ((fRec3[0] * ((fConst0 * (fConst113 + (fConst111 * fRec2[0]))) - 2.05023501468858e-14)) + (fRec2[0] * ((fConst0 * (fConst109 + (fConst107 * fRec2[0]))) - 5.12558753672146e-16)))))))))))) + ((fRec3[0] * (3.72770002670651e-08 + (fConst0 * (fConst105 + (fConst103 * fRec2[0]))))) + (fConst0 * (fConst101 + (fRec2[0] * (fConst99 + (fConst97 * fRec2[0])))))))))) + (fRec5[5] * (7.64924045480176e-09 + ((fRec4[0] * (1.86385001335326e-09 + (fConst0 * (fConst95 + (((fRec3[0] * ((fConst0 * (fConst94 + (fConst93 * fRec2[0]))) - 8.014555057419e-11)) + (fRec2[0] * ((fConst0 * (fConst92 + (fConst91 * fRec2[0]))) - 2.05023501468858e-12))) + (fRec4[0] * (4.65962503338314e-13 + (fConst0 * (fConst90 + ((fRec3[0] * ((fConst0 * (fConst89 + (fConst88 * fRec2[0]))) - 2.05023501468858e-14)) + (fRec2[0] * ((fConst0 * (fConst87 + (fConst86 * fRec2[0]))) - 5.12558753672146e-16)))))))))))) + ((fRec3[0] * (7.45540005341303e-09 + (fConst0 * (fConst85 + (fConst84 * fRec2[0]))))) + (fConst0 * (fConst83 + (fRec2[0] * (fConst82 + (fConst81 * fRec2[0])))))))))) / fTemp1));
		fRec8[0] = (fSlow5 + (0.993 * fRec8[1]));
		double fTemp4 = (fConst0 * ((fRec8[0] * ((((((fRec5[0] * (fConst265 + (((fRec3[0] * ((fConst0 * (fConst225 + (fConst264 * fRec2[0]))) - 1.39362713489451e-08)) + (fRec2[0] * ((fConst0 * (fConst263 + (fConst262 * fRec2[0]))) - 3.40664410751991e-10))) + (fRec4[0] * ((fConst0 * (fConst261 + (fConst0 * ((fConst260 * fRec3[0]) + (fConst259 * fRec2[0]))))) - 7.74237297163615e-11))))) + (fRec5[1] * (fConst258 + (((fRec3[0] * ((fConst0 * (fConst77 + (fConst257 * fRec2[0]))) - 4.18088140468352e-08)) + (fRec2[0] * ((fConst0 * (fConst256 + (fConst255 * fRec2[0]))) - 1.02199323225597e-09))) + (fRec4[0] * ((fConst0 * (fConst254 + (fConst0 * ((fConst253 * fRec3[0]) + (fConst252 * fRec2[0]))))) - 2.32271189149085e-10)))))) + (fRec5[2] * (fConst251 + (((fRec3[0] * ((fConst0 * (fConst250 + (fConst249 * fRec2[0]))) - 2.78725426978901e-08)) + (fRec2[0] * ((fConst0 * (fConst248 + (fConst247 * fRec2[0]))) - 6.81328821503981e-10))) + (fRec4[0] * ((fConst0 * (fConst246 + (fConst0 * ((fConst245 * fRec3[0]) + (fConst244 * fRec2[0]))))) - 1.54847459432723e-10)))))) + (fRec5[3] * (fConst243 + (((fRec3[0] * (2.78725426978901e-08 + (fConst0 * (fConst241 + (fConst239 * fRec2[0]))))) + (fRec2[0] * (6.81328821503981e-10 + (fConst0 * (fConst237 + (fConst235 * fRec2[0])))))) + (fRec4[0] * (1.54847459432723e-10 + (fConst0 * (fConst233 + (fConst0 * ((fConst231 * fRec3[0]) + (fConst229 * fRec2[0]))))))))))) + (fRec5[4] * (fConst227 + (((fRec3[0] * (4.18088140468352e-08 + (fConst0 * (fConst225 + (fConst224 * fRec2[0]))))) + (fRec2[0] * (1.02199323225597e-09 + (fConst0 * (fConst222 + (fConst220 * fRec2[0])))))) + (fRec4[0] * (2.32271189149085e-10 + (fConst0 * (fConst218 + (fConst0 * ((fConst216 * fRec3[0]) + (fConst214 * fRec2[0]))))))))))) + (fRec5[5] * (fConst80 + (((fRec3[0] * (1.39362713489451e-08 + (fConst0 * (fConst77 + (fConst75 * fRec2[0]))))) + (fRec2[0] * (3.40664410751991e-10 + (fConst0 * (fConst73 + (fConst71 * fRec2[0])))))) + (fRec4[0] * (7.74237297163615e-11 + (fConst0 * (fConst69 + (fConst0 * ((fConst67 * fRec3[0]) + (fConst65 * fRec2[0])))))))))))) / fTemp1));
		fRec1[0] = (((int(signbit(fTemp4)))?plexipoweramptone_negclip(fTemp4):plexipoweramptoneclip(fTemp4)) - ((((((fRec1[1] * (5.81939069368967e-13 + (fConst0 * (fConst33 + (fRec0[0] * (fConst32 + (fConst31 * fRec0[0]))))))) + (fRec1[2] * (1.16387813873793e-12 + (fConst0 * (fConst30 + (fRec0[0] * (fConst29 + (fConst28 * fRec0[0])))))))) + (fRec1[3] * (1.16387813873793e-12 + (fConst0 * (fConst27 + (fRec0[0] * (fConst25 + (fConst23 * fRec0[0])))))))) + (fRec1[4] * (5.81939069368967e-13 + (fConst0 * (fConst21 + (fRec0[0] * (fConst19 + (fConst17 * fRec0[0])))))))) + (fRec1[5] * (1.16387813873793e-13 + (fConst0 * (fConst15 + (fRec0[0] * (fConst14 + (fConst13 * fRec0[0])))))))) / fTemp0));
		double fTemp5 = (fConst0 * (((((((fRec1[0] * (1.62773154056433e-19 + (fConst0 * (fConst286 + (fRec0[0] * (fConst285 + (fConst284 * fRec0[0]))))))) + (fRec1[1] * (4.88319462169298e-19 + (fConst0 * (fConst283 + (fRec0[0] * (fConst282 + (fConst281 * fRec0[0])))))))) + (fRec1[2] * (3.25546308112866e-19 + (fConst0 * (fConst280 + (fRec0[0] * (fConst279 + (fConst278 * fRec0[0])))))))) + (fRec1[3] * ((fConst0 * (fConst277 + (fRec0[0] * (fConst275 + (fConst273 * fRec0[0]))))) - 3.25546308112866e-19))) + (fRec1[4] * ((fConst0 * (fConst271 + (fRec0[0] * (fConst269 + (fConst267 * fRec0[0]))))) - 4.88319462169298e-19))) + (fRec1[5] * ((fConst0 * (fConst12 + (fRec0[0] * (fConst10 + (fConst8 * fRec0[0]))))) - 1.62773154056433e-19))) / fTemp0));
		buf[i] = (FAUSTFLOAT)((int(signbit(fTemp5)))?plexipoweramp_negclip(fTemp5):plexipowerampclip(fTemp5));
		// post processing
		for (int i=5; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec8[1] = fRec8[0];
		for (int i=5; i>0; i--) fRec5[i] = fRec5[i-1];
		for (int i=3; i>0; i--) fRec7[i] = fRec7[i-1];
		fRec6[1] = fRec6[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec2[1] = fRec2[0];
		fRec0[1] = fRec0[0];
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
