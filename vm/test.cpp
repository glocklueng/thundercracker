#include <sifteo.h>
using namespace Sifteo;

Cube c;

void siftmain()
{
#if 0    // For split testing...
    _SYS_enableCubes(0);
    _SYS_enableCubes(1);
    _SYS_enableCubes(2);
    _SYS_enableCubes(3);
    _SYS_enableCubes(4);
    _SYS_enableCubes(5);
    _SYS_enableCubes(6);
    _SYS_enableCubes(7);
    _SYS_enableCubes(8);
    _SYS_enableCubes(9);
    _SYS_enableCubes(10);
    _SYS_enableCubes(11);
    _SYS_enableCubes(12);
    _SYS_enableCubes(13);
    _SYS_enableCubes(14);
    _SYS_enableCubes(15);
    _SYS_enableCubes(16);
    _SYS_enableCubes(17);
    _SYS_enableCubes(18);
    _SYS_enableCubes(19);
    _SYS_enableCubes(20);
    _SYS_enableCubes(21);
    _SYS_enableCubes(22);
    _SYS_enableCubes(23);
    _SYS_enableCubes(24);
    _SYS_enableCubes(25);
    _SYS_enableCubes(26);
    _SYS_enableCubes(27);
    _SYS_enableCubes(28);
    _SYS_enableCubes(29);
    _SYS_enableCubes(30);
    _SYS_enableCubes(31);
    _SYS_enableCubes(32);
    _SYS_enableCubes(33);
    _SYS_enableCubes(34);
    _SYS_enableCubes(35);
    _SYS_enableCubes(36);
    _SYS_enableCubes(37);
    _SYS_enableCubes(38);
    _SYS_enableCubes(39);
    _SYS_enableCubes(40);
    _SYS_enableCubes(41);
    _SYS_enableCubes(42);
    _SYS_enableCubes(43);
    _SYS_enableCubes(44);
    _SYS_enableCubes(45);
    _SYS_enableCubes(46);
    _SYS_enableCubes(47);
    _SYS_enableCubes(48);
    _SYS_enableCubes(49);
    _SYS_enableCubes(50);
    _SYS_enableCubes(51);
    _SYS_enableCubes(52);
    _SYS_enableCubes(53);
    _SYS_enableCubes(54);
    _SYS_enableCubes(55);
    _SYS_enableCubes(56);
    _SYS_enableCubes(57);
    _SYS_enableCubes(58);
    _SYS_enableCubes(59);
    _SYS_enableCubes(60);
    _SYS_enableCubes(61);
    _SYS_enableCubes(62);
    _SYS_enableCubes(63);
    _SYS_enableCubes(64);
    _SYS_enableCubes(65);
    _SYS_enableCubes(66);
    _SYS_enableCubes(67);
    _SYS_enableCubes(68);
    _SYS_enableCubes(69);
    _SYS_enableCubes(70);
    _SYS_enableCubes(71);
    _SYS_enableCubes(72);
    _SYS_enableCubes(73);
    _SYS_enableCubes(74);
    _SYS_enableCubes(75);
    _SYS_enableCubes(76);
    _SYS_enableCubes(77);
    _SYS_enableCubes(78);
    _SYS_enableCubes(79);
    _SYS_enableCubes(80);
    _SYS_enableCubes(81);
    _SYS_enableCubes(82);
    _SYS_enableCubes(83);
    _SYS_enableCubes(84);
    _SYS_enableCubes(85);
    _SYS_enableCubes(86);
    _SYS_enableCubes(87);
    _SYS_enableCubes(88);
    _SYS_enableCubes(89);
    _SYS_enableCubes(90);
    _SYS_enableCubes(91);
    _SYS_enableCubes(92);
    _SYS_enableCubes(93);
    _SYS_enableCubes(94);
    _SYS_enableCubes(95);
    _SYS_enableCubes(96);
    _SYS_enableCubes(97);
    _SYS_enableCubes(98);
    _SYS_enableCubes(99);
    _SYS_enableCubes(100);
    _SYS_enableCubes(101);
    _SYS_enableCubes(102);
    _SYS_enableCubes(103);
    _SYS_enableCubes(104);
    _SYS_enableCubes(105);
    _SYS_enableCubes(106);
    _SYS_enableCubes(107);
    _SYS_enableCubes(108);
    _SYS_enableCubes(109);
    _SYS_enableCubes(110);
    _SYS_enableCubes(111);
    _SYS_enableCubes(112);
    _SYS_enableCubes(113);
    _SYS_enableCubes(114);
    _SYS_enableCubes(115);
    _SYS_enableCubes(116);
    _SYS_enableCubes(117);
    _SYS_enableCubes(118);
    _SYS_enableCubes(119);
    _SYS_enableCubes(120);
    _SYS_enableCubes(121);
    _SYS_enableCubes(122);
    _SYS_enableCubes(123);
    _SYS_enableCubes(124);
    _SYS_enableCubes(125);
    _SYS_enableCubes(126);
    _SYS_enableCubes(127);
    _SYS_enableCubes(128);
    _SYS_enableCubes(129);
    _SYS_enableCubes(130);
    _SYS_enableCubes(131);
    _SYS_enableCubes(132);
    _SYS_enableCubes(133);
    _SYS_enableCubes(134);
    _SYS_enableCubes(135);
    _SYS_enableCubes(136);
    _SYS_enableCubes(137);
    _SYS_enableCubes(138);
    _SYS_enableCubes(139);
    _SYS_enableCubes(140);
    _SYS_enableCubes(141);
    _SYS_enableCubes(142);
    _SYS_enableCubes(143);
    _SYS_enableCubes(144);
    _SYS_enableCubes(145);
    _SYS_enableCubes(146);
    _SYS_enableCubes(147);
    _SYS_enableCubes(148);
    _SYS_enableCubes(149);
    _SYS_enableCubes(150);
    _SYS_enableCubes(151);
    _SYS_enableCubes(152);
    _SYS_enableCubes(153);
    _SYS_enableCubes(154);
    _SYS_enableCubes(155);
    _SYS_enableCubes(156);
    _SYS_enableCubes(157);
    _SYS_enableCubes(158);
    _SYS_enableCubes(159);
    _SYS_enableCubes(160);
    _SYS_enableCubes(161);
    _SYS_enableCubes(162);
    _SYS_enableCubes(163);
    _SYS_enableCubes(164);
    _SYS_enableCubes(165);
    _SYS_enableCubes(166);
    _SYS_enableCubes(167);
    _SYS_enableCubes(168);
    _SYS_enableCubes(169);
    _SYS_enableCubes(170);
    _SYS_enableCubes(171);
    _SYS_enableCubes(172);
    _SYS_enableCubes(173);
    _SYS_enableCubes(174);
    _SYS_enableCubes(175);
    _SYS_enableCubes(176);
    _SYS_enableCubes(177);
    _SYS_enableCubes(178);
    _SYS_enableCubes(179);
    _SYS_enableCubes(180);
    _SYS_enableCubes(181);
    _SYS_enableCubes(182);
    _SYS_enableCubes(183);
    _SYS_enableCubes(184);
    _SYS_enableCubes(185);
    _SYS_enableCubes(186);
    _SYS_enableCubes(187);
    _SYS_enableCubes(188);
    _SYS_enableCubes(189);
    _SYS_enableCubes(190);
    _SYS_enableCubes(191);
    _SYS_enableCubes(192);
    _SYS_enableCubes(193);
    _SYS_enableCubes(194);
    _SYS_enableCubes(195);
    _SYS_enableCubes(196);
    _SYS_enableCubes(197);
    _SYS_enableCubes(198);
    _SYS_enableCubes(199);
    _SYS_enableCubes(200);
    _SYS_enableCubes(201);
    _SYS_enableCubes(202);
    _SYS_enableCubes(203);
    _SYS_enableCubes(204);
    _SYS_enableCubes(205);
    _SYS_enableCubes(206);
    _SYS_enableCubes(207);
    _SYS_enableCubes(208);
    _SYS_enableCubes(209);
    _SYS_enableCubes(210);
    _SYS_enableCubes(211);
    _SYS_enableCubes(212);
    _SYS_enableCubes(213);
    _SYS_enableCubes(214);
    _SYS_enableCubes(215);
    _SYS_enableCubes(216);
    _SYS_enableCubes(217);
    _SYS_enableCubes(218);
    _SYS_enableCubes(219);
    _SYS_enableCubes(220);
    _SYS_enableCubes(221);
    _SYS_enableCubes(222);
    _SYS_enableCubes(223);
    _SYS_enableCubes(224);
    _SYS_enableCubes(225);
    _SYS_enableCubes(226);
    _SYS_enableCubes(227);
    _SYS_enableCubes(228);
    _SYS_enableCubes(229);
    _SYS_enableCubes(230);
    _SYS_enableCubes(231);
    _SYS_enableCubes(232);
    _SYS_enableCubes(233);
    _SYS_enableCubes(234);
    _SYS_enableCubes(235);
    _SYS_enableCubes(236);
    _SYS_enableCubes(237);
    _SYS_enableCubes(238);
    _SYS_enableCubes(239);
    _SYS_enableCubes(240);
    _SYS_enableCubes(241);
    _SYS_enableCubes(242);
    _SYS_enableCubes(243);
    _SYS_enableCubes(244);
    _SYS_enableCubes(245);
    _SYS_enableCubes(246);
    _SYS_enableCubes(247);
    _SYS_enableCubes(248);
    _SYS_enableCubes(249);
    _SYS_enableCubes(250);
    _SYS_enableCubes(251);
    _SYS_enableCubes(252);
    _SYS_enableCubes(253);
    _SYS_enableCubes(254);
    _SYS_enableCubes(255);
#endif
    
#if 1
    c.enable(0);
    VidMode_BG0_ROM vid(c.vbuf);

    vid.init();
    vid.BG0_text(Vec2(1,1), "Hello World!");

    while (1)
        System::paint();
#endif
}