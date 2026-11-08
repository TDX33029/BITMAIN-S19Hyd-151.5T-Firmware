// FUN_01be70fa @ 01be70fa size=148 calls_out=4 calls_in=1
// strings: 

int FUN_01be70fa(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_4 == 0) {
    iVar1 = FUN_01be70d6();
    return iVar1;
  }
  thunk_FUN_01bee080(0x16e,param_1,param_2,param_3,param_4,0,0);
  iVar1 = FUN_01be3b5a();
  if ((iVar1 < 0) && (piVar2 = (int *)FUN_01be3244(), (*piVar2 - 0x16U & 0xffffffef) == 0)) {
    if ((param_4 & 0xfff7f7ff) == 0) {
      iVar1 = FUN_01be70d6(param_1,param_2,param_3);
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

