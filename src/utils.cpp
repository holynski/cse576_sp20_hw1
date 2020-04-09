#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "utils.h"
#include "image.h"

int tests_total = 0;
int tests_fail = 0;

int same_image(const Image& a, const Image& b) { return a==b; }

bool operator ==(const Image& a, const Image& b)
  {
  if(a.w != b.w || a.h != b.h || a.c != b.c) 
    {
    printf("Expected %d x %d x %d image, got %d x %d x %d\n", b.w, b.h, b.c, a.w, a.h, a.c);
    return 0;
    }
  
  for(int i = 0; i < a.w*a.h*a.c; ++i) if(!within_eps(a.data[i], b.data[i])) 
    {
    printf("The value at %d %d %d should be %f, but it is %f! \n", (i%(a.w*a.h))%a.w, (i%(a.w*a.h))/a.w, i/(a.w*a.h), b.data[i], a.data[i]);
    return 0;
    }
  return 1;
  }


Image Image::abs(void) const 
  {
  Image ret=*this;
  for(int q2=0;q2<h;q2++)for(int q1=0;q1<w;q1++)
    for(int q3=0;q3<c;q3++)
      ret(q1,q2,q3)=fabsf(ret(q1,q2,q3));
  return ret;
  }

Image Image::rgb_to_grayscale(void) const { return ::rgb_to_grayscale(*this); }

void Image::set_channel(int ch, const Image& im)
  {
  assert(im.c==1 && ch<c && ch>=0);
  assert(im.w==w && im.h==h);
  memcpy(&pixel(0,0,ch),im.data,sizeof(float)*im.size());
  }

Image Image::get_channel(int ch) const 
  {
  assert(ch<c && ch>=0);
  Image im(w,h,1);
  memcpy(im.data,&pixel(0,0,ch),sizeof(float)*im.size());
  return im;
  }
