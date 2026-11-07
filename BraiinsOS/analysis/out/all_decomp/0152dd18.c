// FUN_0152dd18 @ 0152dd18 size=132 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_0152dd18(undefined4 *param_1,int param_2,short param_3,short param_4)

{
  if (param_2 == 0) {
    return 2;
  }
  param_2 = param_2 << 3;
  if (param_3 == 0x178) {
    do {
      if ((*(short *)(param_1[1] + 0x28) == 0x178) && (*(short *)(param_1[1] + 0x2a) == param_4)) {
LAB_0152dd70:
        return *param_1;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -8;
    } while (param_2 != 0);
  }
  else {
    do {
      if (*(short *)(param_1[1] + 0x28) == param_3) goto LAB_0152dd70;
      param_1 = param_1 + 2;
      param_2 = param_2 + -8;
    } while (param_2 != 0);
  }
  return 2;
}

