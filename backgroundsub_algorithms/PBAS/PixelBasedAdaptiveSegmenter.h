﻿#ifndef PIXEL_BASED_ADAPTIVE_SEGMENTER
#define PIXEL_BASED_ADAPTIVE_SEGMENTER

#include <iostream>
#include <opencv2/opencv.hpp>

#include "PBAS.h"
#include "../IBGS.h"

class PixelBasedAdaptiveSegmenter : public IBGS
{
private:
  PBAS pbas;

  bool firstTime;
  bool showOutput;
  bool enableInputBlur;
  bool enableOutputBlur;

  float alpha;
  float beta;
  int N;
  int Raute_min;
  float R_incdec;
  int R_lower;
  int R_scale;
  float T_dec;
  int T_inc;
  int T_init;
  int T_lower;
  int T_upper;

public:
  PixelBasedAdaptiveSegmenter();
  ~PixelBasedAdaptiveSegmenter();

  void process(const cv::Mat &img_input, cv::Mat &img_output);

private:
  void saveConfig();
  void loadConfig();
};

#endif // PIXEL_BASED_ADAPTIVE_SEGMENTER
