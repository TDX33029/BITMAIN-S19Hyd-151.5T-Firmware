// FUN_016d6e26 @ 016d6e26 size=148 calls_out=4 calls_in=2
// strings: 

int FUN_016d6e26(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_4 == 0) {
    iVar1 = FUN_016d6e02();
    return iVar1;
  }
  thunk_FUN_016dde14(0x16e,param_1,param_2,param_3,param_4,0,0);
  iVar1 = FUN_016d3496();
  if ((iVar1 < 0) && (piVar2 = (int *)FUN_016d2bc8(), (*piVar2 - 0x16U & 0xffffffef) == 0)) {
    if ((param_4 & 0xfff7f7ff) == 0) {
      iVar1 = FUN_016d6e02(param_1,param_2,param_3);
      if (-1 < iVar1) {
        if ((int)(param_4 << 0xc) < 0) {
          software_interrupt(0);
        }
        if ((int)(param_4 << 0x14) < 0) {
          software_interrupt(0);
        }
      }
    }
    else {
      iVar1 = -1;
      *piVar2 = 0x16;
    }
  }
  return iVar1;
}

