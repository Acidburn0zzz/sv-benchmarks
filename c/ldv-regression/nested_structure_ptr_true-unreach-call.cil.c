extern void __VERIFIER_error() __attribute__ ((__noreturn__));

/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct Innermost {
   int c ;
};
struct Inner {
   int b ;
   struct Innermost *y ;
};
struct Toplev {
   int a ;
   struct Inner *x ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const   *__assertion ,
                                                                      char const   *__file ,
                                                                      unsigned int __line ,
                                                                      char const   *__function ) ;

int main(void) 
{ struct Innermost im ;
  struct Inner inner ;
  struct Toplev good ;
  struct Toplev *ptr ;
  struct Innermost *__cil_tmp5 ;
  struct Inner *__cil_tmp6 ;
  unsigned int __cil_tmp7 ;
  struct Toplev *__cil_tmp8 ;
  unsigned int __cil_tmp9 ;
  unsigned int __cil_tmp10 ;
  unsigned int __cil_tmp11 ;
  struct Inner *__cil_tmp12 ;
  unsigned int __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct Innermost *__cil_tmp15 ;
  unsigned int __cil_tmp16 ;
  unsigned int __cil_tmp17 ;
  struct Inner *__cil_tmp18 ;
  unsigned int __cil_tmp19 ;
  unsigned int __cil_tmp20 ;
  struct Innermost *__cil_tmp21 ;
  int __cil_tmp22 ;

  {
  __cil_tmp5 = & im;
  *((int *)__cil_tmp5) = 3;
  __cil_tmp6 = & inner;
  *((int *)__cil_tmp6) = 2;
  __cil_tmp7 = (unsigned int )(& inner) + 4;
  *((struct Innermost **)__cil_tmp7) = & im;
  __cil_tmp8 = & good;
  *((int *)__cil_tmp8) = 1;
  __cil_tmp9 = (unsigned int )(& good) + 4;
  *((struct Inner **)__cil_tmp9) = & inner;
  ptr = & good;
  __cil_tmp10 = (unsigned int )ptr;
  __cil_tmp11 = __cil_tmp10 + 4;
  __cil_tmp12 = *((struct Inner **)__cil_tmp11);
  __cil_tmp13 = (unsigned int )__cil_tmp12;
  __cil_tmp14 = __cil_tmp13 + 4;
  __cil_tmp15 = *((struct Innermost **)__cil_tmp14);
  *((int *)__cil_tmp15) = 4;
  {
  __cil_tmp16 = (unsigned int )ptr;
  __cil_tmp17 = __cil_tmp16 + 4;
  __cil_tmp18 = *((struct Inner **)__cil_tmp17);
  __cil_tmp19 = (unsigned int )__cil_tmp18;
  __cil_tmp20 = __cil_tmp19 + 4;
  __cil_tmp21 = *((struct Innermost **)__cil_tmp20);
  __cil_tmp22 = *((int *)__cil_tmp21);
  if (__cil_tmp22 == 4) {

  } else {
    {
    //__assert_fail("ptr->x->y->c == 4", "nested_structure_ptr-safe.c", 26U, "main");
    ERROR: __VERIFIER_error();
    }
  }
  }
  return (0);
}
}
