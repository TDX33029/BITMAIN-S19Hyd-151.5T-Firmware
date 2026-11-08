// FUN_01be9cd2 @ 01be9cd2 size=174 calls_out=2 calls_in=2
// strings: 

int FUN_01be9cd2(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  software_interrupt(0);
  iVar1 = FUN_01be3b5a();
  if (((iVar1 < 0) && (piVar2 = (int *)FUN_01be3244(), *piVar2 == 0x5d || *piVar2 == 0x16)) &&
     ((param_2 & 0x80800) != 0)) {
    software_interrupt(0);
    iVar1 = FUN_01be3b5a(param_1,param_2 & 0xfff7f7ff,param_3,param_4);
    if (-1 < iVar1) {
      if ((int)(param_2 << 0xc) < 0) {
        software_interrupt(0);
        software_interrupt(0);
      }
      if ((int)(param_2 << 0x14) < 0) {
        software_interrupt(0);
        software_interrupt(0);
      }
    }
  }
  return iVar1;
}

