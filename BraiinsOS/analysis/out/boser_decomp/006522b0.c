// FUN_006522b0 @ 006522b0 size=120 calls_out=0 calls_in=1
// strings: 

bool FUN_006522b0(char *param_1,uint param_2)

{
  if (param_2 != 0) {
    if (*param_1 == '\\') {
      return true;
    }
    if ((param_2 != 1) && (-0x41 < (char)*(short *)(param_1 + 1))) {
      if (param_2 < 4) {
        if (param_2 != 3) {
          return false;
        }
      }
      else if (param_1[3] < -0x40) {
        return false;
      }
      return *(short *)(param_1 + 1) == 0x5c3a;
    }
  }
  return false;
}

