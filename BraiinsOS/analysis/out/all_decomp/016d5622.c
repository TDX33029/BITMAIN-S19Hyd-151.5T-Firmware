// FUN_016d5622 @ 016d5622 size=96 calls_out=0 calls_in=14
// strings: 

int FUN_016d5622(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong in_d0;
  
  uVar1 = (uint)(in_d0 >> 0x20);
  iVar2 = (int)in_d0;
  if ((uVar1 & 0x7fffffff) < 0x7ff00000 || 0x7ff00000 - (uVar1 & 0x7fffffff) < (uint)(iVar2 == 0)) {
    if ((param_2 & 0x7fffffff) < 0x7ff00000 ||
        0x7ff00000 - (param_2 & 0x7fffffff) < (uint)(param_1 == 0)) {
      if (-((int)uVar1 >> 0x1f) == -((int)param_2 >> 0x1f)) {
        if ((double)(((ulonglong)uVar1 << 0x20) + (in_d0 & 0xffffffff)) <
            (double)CONCAT44(param_2,param_1)) {
          param_1 = iVar2;
        }
      }
      else {
        if (-((int)uVar1 >> 0x1f) != 0) {
          param_1 = iVar2;
        }
      }
    }
    else {
      param_1 = iVar2;
    }
  }
  return param_1;
}

