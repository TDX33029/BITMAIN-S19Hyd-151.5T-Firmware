// FUN_00feaeb8 @ 00feaeb8 size=128 calls_out=0 calls_in=1
// strings: 

longlong FUN_00feaeb8(uint param_1,uint param_2,int param_3,uint param_4)

{
  if (param_2 < param_1) goto LAB_00feaec8;
  if (param_1 != 0) {
    if (param_1 < param_4) {
      if (*(char *)(param_3 + param_1) < -0x40) {
LAB_00feaec8:
        return (ulonglong)param_4 << 0x20;
      }
    }
    else if (param_1 != param_4) goto LAB_00feaec8;
  }
  if (param_2 != 0) {
    if (param_2 < param_4) {
      param_4 = (uint)*(char *)(param_3 + param_2);
      if ((int)param_4 < -0x40) {
LAB_00feaf20:
        return (ulonglong)param_4 << 0x20;
      }
    }
    else if (param_2 != param_4) goto LAB_00feaf20;
  }
  return CONCAT44(param_2 - param_1,param_3 + param_1);
}

