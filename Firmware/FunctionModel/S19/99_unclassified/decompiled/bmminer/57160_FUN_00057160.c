// FUN_00057160 @ 00057160  size=76  callers=0
// program: bmminer


void FUN_00057160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,char *param_6,__gnuc_va_list param_7)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x17) == '\0') {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    vsnprintf((char *)(param_1 + 0x17),0x9f,param_6,param_7);
    *(undefined1 *)((int)param_1 + 0xfa) = 0;
    *(undefined1 *)((int)param_1 + 0xfb) = param_5;
    return;
  }
  return;
}

