#ifndef PDFWRITERSTRUCTS_HPP
#define PDFWRITERSTRUCTS_HPP

#include <iostream>
#include <string>


#define PDF_MM_TO_POINT(mm) ((int)((mm)*72.0f / 25.4f))

/*! Point width of a standard A4 page */
#define PDF_A4_WIDTH PDF_MM_TO_POINT(210.0f)

/*! Point height of a standard A4 page */
#define PDF_A4_HEIGHT PDF_MM_TO_POINT(297.0f)

namespace pdfwrite
{
    static int courier[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600, 600,
            600, 0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600,
            0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600,
            0, 600, 600, 600, 600, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 600,
            0, 0, 0, 0, 600, 600, 600, 600, 0, 0, 0, 0,
            0, 600, 0, 0, 0, 600, 0, 0, 600, 600, 600, 600,
            0, 0, 0, 0};

    static int courier_bold[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600, 600,
            600, 0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600,
            0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600,
            0, 600, 600, 600, 600, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 600,
            0, 0, 0, 0, 600, 600, 600, 600, 0, 0, 0, 0,
            0, 600, 0, 0, 0, 600, 0, 0, 600, 600, 600, 600,
            0, 0, 0, 0};

    static int courier_boldoblique[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600, 600,
            600, 0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600,
            0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600,
            0, 600, 600, 600, 600, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 600,
            0, 0, 0, 0, 600, 600, 600, 600, 0, 0, 0, 0,
            0, 600, 0, 0, 0, 600, 0, 0, 600, 600, 600, 600,
            0, 0, 0, 0};

    static int courier_oblique[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 600, 600, 600, 600, 600, 600, 600,
            600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600, 600,
            600, 0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600,
            0, 600, 600, 600, 600, 600, 600, 600, 600, 0, 600, 600,
            0, 600, 600, 600, 600, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 600,
            0, 0, 0, 0, 600, 600, 600, 600, 0, 0, 0, 0,
            0, 600, 0, 0, 0, 600, 0, 0, 600, 600, 600, 600,
            0, 0, 0, 0};

    static int helvetica[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 278, 278, 355, 556,
            556, 889, 667, 222, 333, 333, 389, 584, 278, 333, 278, 278,
            556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 278, 278,
            584, 584, 584, 556, 1015, 667, 667, 722, 722, 667, 611, 778,
            722, 278, 500, 667, 556, 833, 722, 778, 667, 778, 722, 667,
            611, 722, 667, 944, 667, 667, 611, 278, 278, 278, 469, 556,
            222, 556, 556, 500, 556, 556, 278, 556, 556, 222, 222, 500,
            222, 833, 556, 556, 556, 556, 333, 500, 278, 556, 500, 722,
            500, 500, 500, 334, 260, 334, 584, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 333, 556, 556, 167, 556, 556, 556,
            556, 191, 333, 556, 333, 333, 500, 500, 0, 556, 556, 556,
            278, 0, 537, 350, 222, 333, 333, 556, 1000, 1000, 0, 611,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 370,
            0, 0, 0, 0, 556, 778, 1000, 365, 0, 0, 0, 0,
            0, 889, 0, 0, 0, 278, 0, 0, 222, 611, 944, 611,
            0, 0, 0, 0};

    static int helvetica_bold[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 278, 333, 474, 556,
            556, 889, 722, 278, 333, 333, 389, 584, 278, 333, 278, 278,
            556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 333, 333,
            584, 584, 584, 611, 975, 722, 722, 722, 722, 667, 611, 778,
            722, 278, 556, 722, 611, 833, 722, 778, 667, 778, 722, 667,
            611, 722, 667, 944, 667, 667, 611, 333, 278, 333, 584, 556,
            278, 556, 611, 556, 611, 556, 333, 611, 611, 278, 278, 556,
            278, 889, 611, 611, 611, 611, 389, 556, 333, 611, 556, 778,
            556, 556, 500, 389, 280, 389, 584, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 333, 556, 556, 167, 556, 556, 556,
            556, 238, 500, 556, 333, 333, 611, 611, 0, 556, 556, 556,
            278, 0, 556, 350, 278, 500, 500, 556, 1000, 1000, 0, 611,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 370,
            0, 0, 0, 0, 611, 778, 1000, 365, 0, 0, 0, 0,
            0, 889, 0, 0, 0, 278, 0, 0, 278, 611, 944, 611,
            0, 0, 0, 0};

    static int helvetica_boldoblique[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 278, 333, 474, 556,
            556, 889, 722, 278, 333, 333, 389, 584, 278, 333, 278, 278,
            556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 333, 333,
            584, 584, 584, 611, 975, 722, 722, 722, 722, 667, 611, 778,
            722, 278, 556, 722, 611, 833, 722, 778, 667, 778, 722, 667,
            611, 722, 667, 944, 667, 667, 611, 333, 278, 333, 584, 556,
            278, 556, 611, 556, 611, 556, 333, 611, 611, 278, 278, 556,
            278, 889, 611, 611, 611, 611, 389, 556, 333, 611, 556, 778,
            556, 556, 500, 389, 280, 389, 584, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 333, 556, 556, 167, 556, 556, 556,
            556, 238, 500, 556, 333, 333, 611, 611, 0, 556, 556, 556,
            278, 0, 556, 350, 278, 500, 500, 556, 1000, 1000, 0, 611,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 370,
            0, 0, 0, 0, 611, 778, 1000, 365, 0, 0, 0, 0,
            0, 889, 0, 0, 0, 278, 0, 0, 278, 611, 944, 611,
            0, 0, 0, 0};

    static int helvetica_oblique[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 278, 278, 355, 556,
            556, 889, 667, 222, 333, 333, 389, 584, 278, 333, 278, 278,
            556, 556, 556, 556, 556, 556, 556, 556, 556, 556, 278, 278,
            584, 584, 584, 556, 1015, 667, 667, 722, 722, 667, 611, 778,
            722, 278, 500, 667, 556, 833, 722, 778, 667, 778, 722, 667,
            611, 722, 667, 944, 667, 667, 611, 278, 278, 278, 469, 556,
            222, 556, 556, 500, 556, 556, 278, 556, 556, 222, 222, 500,
            222, 833, 556, 556, 556, 556, 333, 500, 278, 556, 500, 722,
            500, 500, 500, 334, 260, 334, 584, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 333, 556, 556, 167, 556, 556, 556,
            556, 191, 333, 556, 333, 333, 500, 500, 0, 556, 556, 556,
            278, 0, 537, 350, 222, 333, 333, 556, 1000, 1000, 0, 611,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 370,
            0, 0, 0, 0, 556, 778, 1000, 365, 0, 0, 0, 0,
            0, 889, 0, 0, 0, 278, 0, 0, 222, 611, 944, 611,
            0, 0, 0, 0};

    static int symbol[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 250, 333, 713, 500,
            549, 833, 778, 439, 333, 333, 500, 549, 250, 549, 250, 278,
            500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 278, 278,
            549, 549, 549, 444, 549, 722, 667, 722, 612, 611, 763, 603,
            722, 333, 631, 722, 686, 889, 722, 722, 768, 741, 556, 592,
            611, 690, 439, 768, 645, 795, 611, 333, 863, 333, 658, 500,
            500, 631, 549, 549, 494, 439, 521, 411, 603, 329, 603, 549,
            549, 576, 521, 549, 549, 521, 549, 603, 439, 576, 713, 686,
            493, 686, 494, 480, 200, 480, 549, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 750, 620, 247, 549, 167, 713, 500, 753,
            753, 753, 753, 1042, 987, 603, 987, 603, 400, 549, 411, 549,
            549, 713, 494, 460, 549, 549, 549, 549, 1000, 603, 1000, 658,
            823, 686, 795, 987, 768, 768, 823, 768, 768, 713, 713, 713,
            713, 713, 713, 713, 768, 713, 790, 790, 890, 823, 549, 250,
            713, 603, 603, 1042, 987, 603, 987, 603, 494, 329, 790, 790,
            786, 713, 384, 384, 384, 384, 384, 384, 494, 494, 494, 494,
            0, 329, 274, 686, 686, 686, 384, 384, 384, 384, 384, 384,
            494, 494, 494, 0};

    static int times_bold[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 250, 333, 555, 500,
            500, 1000, 833, 333, 333, 333, 500, 570, 250, 333, 250, 278,
            500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 333, 333,
            570, 570, 570, 500, 930, 722, 667, 722, 722, 667, 611, 778,
            778, 389, 500, 778, 667, 944, 722, 778, 611, 778, 722, 556,
            667, 722, 722, 1000, 722, 722, 667, 333, 278, 333, 581, 500,
            333, 500, 556, 444, 556, 444, 333, 500, 556, 278, 333, 556,
            278, 833, 556, 500, 556, 556, 444, 389, 333, 556, 500, 722,
            500, 500, 444, 394, 220, 394, 520, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 333, 500, 500, 167, 500, 500, 500,
            500, 278, 500, 500, 333, 333, 556, 556, 0, 500, 500, 500,
            250, 0, 540, 350, 333, 500, 500, 500, 1000, 1000, 0, 500,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 300,
            0, 0, 0, 0, 667, 778, 1000, 330, 0, 0, 0, 0,
            0, 722, 0, 0, 0, 278, 0, 0, 278, 500, 722, 556,
            0, 0, 0, 0};

    static int times_bolditalic[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 250, 389, 555, 500,
            500, 833, 778, 333, 333, 333, 500, 570, 250, 333, 250, 278,
            500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 333, 333,
            570, 570, 570, 500, 832, 667, 667, 667, 722, 667, 667, 722,
            778, 389, 500, 667, 611, 889, 722, 722, 611, 722, 667, 556,
            611, 722, 667, 889, 667, 611, 611, 333, 278, 333, 570, 500,
            333, 500, 500, 444, 500, 444, 333, 500, 556, 278, 278, 500,
            278, 778, 556, 500, 500, 500, 389, 389, 278, 556, 444, 667,
            500, 444, 389, 348, 220, 348, 570, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 389, 500, 500, 167, 500, 500, 500,
            500, 278, 500, 500, 333, 333, 556, 556, 0, 500, 500, 500,
            250, 0, 500, 350, 333, 500, 500, 500, 1000, 1000, 0, 500,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 266,
            0, 0, 0, 0, 611, 722, 944, 300, 0, 0, 0, 0,
            0, 722, 0, 0, 0, 278, 0, 0, 278, 500, 722, 500,
            0, 0, 0, 0};

    static int times_italic[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 250, 333, 420, 500,
            500, 833, 778, 333, 333, 333, 500, 675, 250, 333, 250, 278,
            500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 333, 333,
            675, 675, 675, 500, 920, 611, 611, 667, 722, 611, 611, 722,
            722, 333, 444, 667, 556, 833, 667, 722, 611, 722, 611, 500,
            556, 722, 611, 833, 611, 556, 556, 389, 278, 389, 422, 500,
            333, 500, 500, 444, 500, 444, 278, 500, 500, 278, 278, 444,
            278, 722, 500, 500, 500, 500, 389, 389, 278, 500, 444, 667,
            444, 444, 389, 400, 275, 400, 541, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 389, 500, 500, 167, 500, 500, 500,
            500, 214, 556, 500, 333, 333, 500, 500, 0, 500, 500, 500,
            250, 0, 523, 350, 333, 556, 556, 500, 889, 1000, 0, 500,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 889, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 276,
            0, 0, 0, 0, 556, 722, 944, 310, 0, 0, 0, 0,
            0, 667, 0, 0, 0, 278, 0, 0, 278, 500, 667, 500,
            0, 0, 0, 0};

    static int times_roman[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 250, 333, 408, 500,
            500, 833, 778, 333, 333, 333, 500, 564, 250, 333, 250, 278,
            500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 278, 278,
            564, 564, 564, 444, 921, 722, 667, 667, 722, 611, 556, 722,
            722, 333, 389, 722, 611, 889, 722, 722, 556, 722, 667, 556,
            611, 722, 722, 944, 722, 722, 611, 333, 278, 333, 469, 500,
            333, 444, 500, 444, 500, 444, 333, 500, 500, 278, 278, 500,
            278, 778, 500, 500, 500, 500, 333, 389, 278, 500, 500, 722,
            500, 500, 444, 480, 200, 480, 541, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 333, 500, 500, 167, 500, 500, 500,
            500, 180, 444, 500, 333, 333, 556, 556, 0, 500, 500, 500,
            250, 0, 453, 350, 333, 444, 444, 500, 1000, 1000, 0, 444,
            0, 333, 333, 333, 333, 333, 333, 333, 333, 0, 333, 333,
            0, 333, 333, 333, 1000, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 276,
            0, 0, 0, 0, 611, 722, 889, 310, 0, 0, 0, 0,
            0, 667, 0, 0, 0, 278, 0, 0, 278, 500, 722, 500,
            0, 0, 0, 0};

    static int zapfdingbats[] =
        {
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 278, 974, 961, 974,
            980, 719, 789, 790, 791, 690, 960, 939, 549, 855, 911, 933,
            911, 945, 974, 755, 846, 762, 761, 571, 677, 763, 760, 759,
            754, 494, 552, 537, 577, 692, 786, 788, 788, 790, 793, 794,
            816, 823, 789, 841, 823, 833, 816, 831, 923, 744, 723, 749,
            790, 792, 695, 776, 768, 792, 759, 707, 708, 682, 701, 826,
            815, 789, 789, 707, 687, 696, 689, 786, 787, 713, 791, 785,
            791, 873, 761, 762, 762, 759, 759, 892, 892, 788, 784, 438,
            138, 277, 415, 392, 392, 668, 668, 0, 390, 390, 317, 317,
            276, 276, 509, 509, 410, 410, 234, 234, 334, 334, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 732, 544, 544, 910, 667, 760, 760,
            776, 595, 694, 626, 788, 788, 788, 788, 788, 788, 788, 788,
            788, 788, 788, 788, 788, 788, 788, 788, 788, 788, 788, 788,
            788, 788, 788, 788, 788, 788, 788, 788, 788, 788, 788, 788,
            788, 788, 788, 788, 788, 788, 788, 788, 894, 838, 1016, 458,
            748, 924, 748, 918, 927, 928, 928, 834, 873, 828, 924, 924,
            917, 930, 931, 463, 883, 836, 836, 867, 867, 696, 696, 874,
            0, 874, 760, 946, 771, 865, 771, 888, 967, 888, 831, 873,
            927, 970, 918, 0};

    enum Font
    {
        NONE,
        COURIER,
        COURIER_BOLD,
        COURIER_OBLIQUE,
        COURIER_BOLD_OBLIQUE,
        HELVETICA,
        HELVETICA_BOLD,
        HELVETICA_OBLIQUE,
        HELVETICA_BOLD_OBLIQUE,
        SYMBOL,
        TIMES,
        TIMES_BOLD,
        TIMES_ITALIC,
        TIMES_BOLD_ITALIC,
        ZAPF_DINGBATS
    };

    int *getFont(pdfwrite::Font theFont);

} // namespace pdfwrite

#endif
