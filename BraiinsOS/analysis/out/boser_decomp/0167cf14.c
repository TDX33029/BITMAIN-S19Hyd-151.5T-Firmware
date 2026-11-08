// FUN_0167cf14 @ 0167cf14 size=136 calls_out=2 calls_in=5
// strings: 

void FUN_0167cf14(uint *param_1,undefined1 *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(param_5,param_6,param_4,&DAT_01d0747c);
  }
  uVar4 = FUN_00655b94(*param_2,param_2[1],param_2[2],param_3 + param_5,param_6 - param_5);
  uVar2 = (uint)(uVar4 >> 0x20);
  uVar1 = (uint)uVar4;
  bVar3 = (uVar4 & 1) != 0;
  if (bVar3) {
    uVar1 = uVar2 + param_5;
  }
  if (bVar3) {
    uVar2 = uVar1 + 1;
  }
  *param_1 = (uint)bVar3;
  if (bVar3) {
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return;
}

