// From http://rucalgary.hackhut.com/2011/04/26/upov-with-better-firmware-pics-video-and-source/
// This defines a character array based off of dot matrix font.
unsigned char characterArray[113][6] = {
{0,	0,	0,	0,	0,	0},// 
{0,	0,	125,	0,	0,	0},// !
{0,	112,	0,	112,	0,	0},// "
{20,	127,	20,	127,	20,	0},// #
{18,	42,	127,	42,	36,	0},// $
{18,	42,	127,	42,	36,	0},// %
{54,	73,	85,	34,	5,	0},// &
{0,	0,	96,	0,	0,	0},// '
{0,	28,	34,	65,	0,	0},// (
{0,	65,	34,	28,	0,	0},// )
{20,	8,	62,	8,	20,	0},// *
{8,	8,	62,	8,	8,	0},// +
{0,	0,	5,	6,	0,	0},// ,
{0,	0,	5,	6,	0,	0},// -
{0,	0,	3,	3,	0,	0},// .
{2,	4,	8,	16,	32,	0},// /
{62,	69,	73,	81,	62,	0},// 0
{0,	33,	127,	1,	0,	0},// 1
{33,	67,	69,	73,	49,	0},// 2
{34,	65,	73,	73,	54,	0},// 3
{12,	20,	36,	127,	4,	0},// 4
{114,	81,	81,	81,	78,	0},// 5
{30,	41,	73,	73,	6,	0},// 6
{96,	71,	72,	80,	96,	0},// 7
{54,	73,	73,	73,	54,	0},// 8
{48,	73,	73,	74,	60,	0},// 9
{0,	0,	54,	54,	0,	0},// :
{0,	0,	53,	54,	0,	0},// ;
{8,	20,	34,	65,	0,	0},// <
{20,	20,	20,	20,	20,	0},// =
{0,	65,	34,	20,	8,	0},// >
{32,	64,	69,	72,	48,	0},// ?
{38,	73,	79,	65,	62,	0},// @
{63,	68,	68,	68,	63,	0},// A
{127,	73,	73,	73,	54,	0},// B
{62,	65,	65,	65,	34,	0},// C
{127,	65,	65,	65,	62,	0},// D
{127,	73,	73,	73,	65,	0},// E
{127,	72,	72,	72,	64,	0},// F
{62,	65,	65,	73,	47,	0},// G
{127,	8,	8,	8,	127,	0},// H
{0,	65,	127,	65,	0,	0},// I
{2,	65,	65,	126,	64,	0},// J
{127,	8,	20,	34,	65,	0},// K
{127,	1,	1,	1,	1,	0},// L
{127,	32,	24,	32,	127,	0},// M
{127,	16,	8,	4,	127,	0},// N
{62,	65,	65,	65,	62,	0},// O
{127,	72,	72,	72,	48,	0},// P
{62,	65,	69,	66,	61,	0},// Q
{127,	72,	76,	74,	49,	0},// R
{50,	73,	73,	73,	38,	0},// S
{64,	64,	127,	64,	64,	0},// T
{126,	1,	1,	1,	126,	0},// U
{124,	2,	1,	2,	124,	0},// V
{126,	1,	14,	1,	126,	0},// W
{99,	20,	8,	20,	99,	0},// X
{112,	8,	7,	8,	112,	0},// Y
{67,	69,	73,	81,	97,	0},// Z
{0,	127,	65,	65,	0,	0},// [
{0,	65,	65,	127,	0,	0},// ]
{32,	16,	8,	4,	2,	0},//  
{0,	65,	65,	127,	0,	0},// ]
{16,	32,	64,	32,	16,	0},// ^
{1,	1,	1,	1,	1,	0},// _
{0,	64,	32,	16,	0,	0},// `
{2,	21,	21,	21,	15,	0},// a
{127,	9,	17,	17,	14,	0},// b
{14,	17,	17,	17,	2,	0},// c
{14,	17,	17,	9,	127,	0},// d
{14,	21,	21,	21,	12,	0},// e
{8,	63,	72,	64,	32,	0},// f
{8,	21,	21,	21,	30,	0},// g
{127,	8,	16,	16,	15,	0},// h
{0,	9,	95,	1,	0,	0},// i
{0,	2,	1,	17,	94,	0},// j
{0,	127,	4,	10,	17,	0},// k
{0,	65,	127,	1,	0,	0},// l
{31,	16,	15,	16,	15,	0},// m
{31,	8,	16,	16,	15,	0},// n
{14,	17,	17,	17,	14,	0},// o
{31,	20,	20,	20,	8,	0},// p
{8,	20,	20,	12,	31,	0},// q
{31,	8,	16,	16,	8,	0},// r
{9,	21,	21,	21,	2,	0},// s
{16,	126,	17,	1,	2,	0},// t
{30,	1,	1,	2,	31,	0},// u
{28,	2,	1,	2,	28,	0},// v
{30,	1,	6,	1,	30,	0},// w
{17,	10,	4,	10,	17,	0},// x
{24,	5,	5,	5,	30,	0},// y
{17,	19,	21,	25,	17,	0},// z
{0,	8,	54,	65,	0,	0},// {
{0,	0,	127,	0,	0,	0},// |
{0,	65,	54,	8,	0,	0},// }
{4,	8,	8,	4,	8,	0},// ~
{24,	36,	18,	36,	24,	0},// HEART
{8,	20,	34,	20,	8,	0},// DIAMOND
{8,	28,	42,	8,	8,	0},// ARROW LEFT
{8,	8,	42,	28,	8,	0},// ARROW RIGHT
{32,	64,	127,	64,	32,	0},// ARROW UP
{56,	100,	127,	98,	52,	0},// ARROW DOWN
{64,	136,	88,	136,	16,	0},// SQUARED
{20,	52,	28,	22,	20,	0},// DOES NOT EQUALS
{20,	10,	115,	60,	32,	0},//SQRT
{0,	32,	80,	32,	0,	0},// Degree
{16,	30,	32,	62,	32,	0},// Pi
{1,	1,	14,	48,	64,	64},//  SIN1
{66,	178,	68,	102,	129,	129},// SIN2 
{101,	105,	50,	42,	89,	89},// RAZZLE1
{148,	152,	50,	42,	150,	150},// RAZZLE2
{4,	50,	2,	50,	4,	0},// SMILEY
{2,	52,	4,	68,	2,	0}// SADNESS
};
