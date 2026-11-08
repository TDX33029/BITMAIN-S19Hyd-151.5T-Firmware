// FUN_0144d1a8 @ 0144d1a8 size=208 calls_out=0 calls_in=2
// strings: 

bool FUN_0144d1a8(int *param_1,uint param_2,int param_3,int param_4,undefined1 *param_5)

{
  int *piVar1;
  
  if (param_2 != 0) {
    if (*param_1 == 0x2d) {
      if (param_4 != 0) {
        return true;
      }
      *param_1 = 0xfffd;
      *param_5 = 1;
    }
    piVar1 = param_1 + (param_2 - 1);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0x2d)) {
      if (param_4 != 0) {
        return true;
      }
      *piVar1 = 0xfffd;
      *param_5 = 1;
    }
    if (((param_3 == 0) && (3 < param_2)) && (param_1[2] == 0x2d)) {
      if (param_4 != 0 || param_1[3] != 0x2d) {
        return param_1[3] == 0x2d;
      }
      param_1[2] = 0xfffd;
      param_1[3] = 0xfffd;
      *param_5 = 1;
    }
  }
  return false;
}

