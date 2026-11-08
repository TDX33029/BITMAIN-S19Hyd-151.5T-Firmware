// FUN_013c8834 @ 013c8834 size=160 calls_out=1 calls_in=0
// strings: 

void FUN_013c8834(uint *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_01894418);
  }
  uVar3 = *(uint *)(param_2 + 0x40);
  uVar2 = 0;
  local_24 = 0;
  local_28 = 1;
  if (uVar3 <= param_6 - param_5) {
    uVar5 = (**(code **)(param_2 + 0x30))
                      (param_2,&local_28,param_3 + param_5,param_6 - param_5,
                       *(undefined4 *)(param_2 + 0x3c),uVar3);
    uVar1 = (uint)uVar5;
    bVar4 = (uVar5 & 1) != 0;
    if (bVar4) {
      uVar1 = (int)(uVar5 >> 0x20) + param_5;
    }
    uVar2 = (uint)bVar4;
    if (bVar4) {
      param_1[1] = uVar1;
      param_1[2] = uVar1 + uVar3;
    }
  }
  *param_1 = uVar2;
  return;
}

